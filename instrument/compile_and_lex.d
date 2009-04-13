#!/usr/sbin/dtrace -Zs 

#pragma D option quiet

this string file;
this int line;
this int compile_interested;
this int lex_interested;

dtrace:::BEGIN
{
	depth = 0;
}

mri*:::compile_start
{ 
  this->compile_interested = 1;
  this->depth++;
  this->file = copyinstr(arg0);
  this->line = arg1;
  self->start["compile", this->file, this->line] = timestamp;
}

mri*:::compile_end
/this->compile_interested/
{ 
  this->file = copyinstr(arg0);
  this->line = arg1;
  this->elapsed = timestamp - self->start["compile", this->file, this->line];
  @num["compile", this->file, this->line] = count();
  @eavg["compile", this->file, this->line] = avg(this->elapsed);
  @esum["compile", this->file, this->line] = sum(this->elapsed);
  @edist["compile", this->file, this->line] = quantize(this->elapsed);
  self->start["compile", this->file, this->line] = 0;
  self->depth--;
}

mri*:::lex_start
{ 
  this->lex_interested = 1;
  this->depth++;
  self->start["lex", "", 0] = timestamp;
}

mri*:::lex_end
/this->lex_interested/
{ 
  this->elapsed = timestamp - self->start["lex", "", 0];
  @num["lex", "", 0] = count();
  @eavg["lex", "", 0] = avg(this->elapsed);
  @esum["lex", "", 0] = sum(this->elapsed);
  @edist["lex", "", 0] = quantize(this->elapsed);
  self->start["lex", "", 0] = 0;
  self->depth--;
}

dtrace:::END
{
	normalize(@eavg, 1000);
	normalize(@esum, 1000);
	printf("ELAPSED TIME DISTRIBUTION,\n");
	printa(@edist);
	setopt("aggsortpos", "2");
	printf("%-33s %45s\n", "___ OVERLAP TIMES: ___", "______ ELAPSED ______");
	printf("%-24s %-24s %-23s %6s %10s %12s\n", "METHOD", "FILE", "LINE", "COUNT", "AVG(us)", "SUM(us)");
	printa("%-24.24s %-24.24s %-23.23d %@6d %@10d %@12d\n", @num, @eavg, @esum);	
}