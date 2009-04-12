#!/usr/sbin/dtrace -Zs 

#pragma D option quiet

this string class;
this int id;

dtrace:::BEGIN
{
	depth = 0;
}

mri*:::clear_cache_start
{ 
  this->interested = 1;
  self->start["clear_cache", "", 0] = timestamp;
}

mri*:::clear_cache_end
/this->interested/
{ 
  this->elapsed = timestamp - self->start["clear_cache", "", 0];
  @num["clear_cache", "", 0] = count();
  @eavg["clear_cache", "", 0] = avg(this->elapsed);
  @esum["clear_cache", "", 0] = sum(this->elapsed);
  @edist["clear_cache", "", 0] = quantize(this->elapsed);
  self->start["clear_cache", "", 0] = 0;
}

mri*:::clear_cache_by_id_start
{ 
  this->id = arg0;
  this->interested = 1;
  self->start["clear_cache_by_id", "", this->id] = timestamp;
}

mri*:::clear_cache_by_id_end
/this->interested/
{ 
  this->id = arg0;
  this->elapsed = timestamp - self->start["clear_cache", "", this->id];
  @num["clear_cache_by_id", "", this->id] = count();
  @eavg["clear_cache_by_id", "", this->id] = avg(this->elapsed);
  @esum["clear_cache_by_id", "", this->id] = sum(this->elapsed);
  @edist["clear_cache_by_id", "", this->id] = quantize(this->elapsed);
  self->start["clear_cache_by_id", "", this->id] = 0;
}

mri*:::clear_cache_by_class_start
{ 
  this->class = copyinstr(arg0);
  this->id = arg1;
  this->interested = 1;
  self->start["clear_cache_by_class", this->class, this->id] = timestamp;
}

mri*:::clear_cache_by_class_end
/this->interested/
{ 
  this->class = copyinstr(arg0);
  this->id = arg1;
  this->elapsed = timestamp - self->start["clear_cache", this->class, this->id];
  @num["clear_cache_by_class", this->class, this->id] = count();
  @eavg["clear_cache_by_class", this->class, this->id] = avg(this->elapsed);
  @esum["clear_cache_by_class", this->class, this->id] = sum(this->elapsed);
  @edist["clear_cache_by_class", this->class, this->id] = quantize(this->elapsed);
  self->start["clear_cache_by_class", this->class, this->id] = 0;
}

dtrace:::END
{
	normalize(@eavg, 1000);
	normalize(@esum, 1000);
	printf("ELAPSED TIME DISTRIBUTION,\n");
	printa(@edist);
	setopt("aggsortpos", "2");
	printf("%-33s %45s\n", "___ OVERLAP TIMES: ___", "______ ELAPSED ______");
	printf("%-24s %-24s %6s %6s %10s %12s\n", "METHOD", "CLASS", "ID", "COUNT", "AVG(us)", "SUM(us)");
	printa("%-24.24s %-24.24s %6d %@6d %@10d %@12d\n", @num, @eavg, @esum);	
}