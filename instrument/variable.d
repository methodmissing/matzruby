#!/usr/sbin/dtrace -Zs 

#pragma D option quiet

this string klass;
this string name;

dtrace:::BEGIN
{
	depth = 0;
}

mri*:::global_var_get_start
{ 
  this->interested = 1;
  this->depth++;
  this->klass = copyinstr(arg0);
  this->name = copyinstr(arg1);
  self->start[this->klass, this->name] = timestamp;
}

mri*:::global_var_get_end
/this->interested/
{ 
  this->klass = copyinstr(arg0);
  this->name = copyinstr(arg1);
  this->elapsed = timestamp - self->start[this->klass, this->name];
  @num[this->klass, this->name] = count();
  @eavg[this->klass, this->name] = avg(this->elapsed);
  @esum[this->klass, this->name] = sum(this->elapsed);
  @edist[this->klass, this->name] = quantize(this->elapsed);
  self->start[this->klass, this->name] = 0;
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
	printf("%-24s %-24s %6s %10s %12s\n", "CLASS", "VARIABLE NAME", "COUNT", "AVG(us)", "SUM(us)");
	printa("%-24.24s %-24.24s %@6d %@10d %@12d\n", @num, @eavg, @esum);	
}