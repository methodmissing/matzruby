#!/usr/sbin/dtrace -Zs 

#pragma D option quiet

dtrace:::BEGIN
{
	depth = 0;
}

mri*:::marshal_dump_start
{ 
  this->interested = 1;
  this->depth++;
  self->start["marshal_dump"] = timestamp;
}

mri*:::marshal_dump_end
/this->interested/
{ 
  this->elapsed = timestamp - self->start["marshal_dump"];
  @num["marshal_dump"] = count();
  @eavg["marshal_dump"] = avg(this->elapsed);
  @esum["marshal_dump"] = sum(this->elapsed);
  @edist["marshal_dump"] = quantize(this->elapsed);
  self->start["marshal_dump"] = 0;
  self->depth--;
}

mri*:::marshal_load_start
{ 
  this->interested = 1;
  this->depth++;
  self->start["marshal_load"] = timestamp;
}

mri*:::marshal_load_end
/this->interested/
{ 
  this->elapsed = timestamp - self->start["marshal_load"];
  @num["marshal_load"] = count();
  @eavg["marshal_load"] = avg(this->elapsed);
  @esum["marshal_load"] = sum(this->elapsed);
  @edist["marshal_load"] = quantize(this->elapsed);
  self->start["marshal_load"] = 0;
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
	printf("%-24s %6s %10s %12s\n", "MARSHAL", "COUNT", "AVG(us)", "SUM(us)");
	printa("%-24.24s %@6d %@10d %@12d\n", @num, @eavg, @esum);	
}