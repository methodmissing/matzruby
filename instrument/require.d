#!/usr/sbin/dtrace -Zs 

#pragma D option quiet

this string filename;
this int mode;

dtrace:::BEGIN
{
	depth = 0;
}

mri*:::require_start
{ 
  this->interested = 1;
  this->depth++;
  this->filename = copyinstr(arg0);
  this->mode = arg1;
  self->start[this->filename, this->mode] = timestamp;
}

mri*:::require_end
/this->interested/
{ 
  this->filename = copyinstr(arg0);
  this->mode = arg1;
  this->elapsed = timestamp - self->start[this->filename, this->mode];
  @num[this->filename, this->mode] = count();
  @eavg[this->filename, this->mode] = avg(this->elapsed);
  @esum[this->filename, this->mode] = sum(this->elapsed);
  @edist[this->filename, this->mode] = quantize(this->elapsed);
  self->start[this->filename, this->mode] = 0;
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
	printf("%-24s %-23s %6s %10s %12s\n", "FILENAME", "SAFE MODE", "COUNT", "AVG(us)", "SUM(us)");
	printa("%-24.24s %-23.23d %@6d %@10d %@12d\n", @num, @eavg, @esum);	
}