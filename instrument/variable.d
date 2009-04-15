#!/usr/sbin/dtrace -Zs 

#pragma D option quiet

this string type;
this string klass;
this string name;

dtrace:::BEGIN
{
	depth = 0;
}

mri*:::global_var_get_start
{ 
  this->global_var_get_interested = 1;
  this->depth++;
  this->type = "$global_var";
  this->klass = "";
  this->name = copyinstr(arg0);
  self->start[this->type, this->klass, this->name] = timestamp;
}

mri*:::global_var_get_end
/this->global_var_get_interested/
{ 
  this->type = "$global_var";
  this->klass = "";
  this->name = copyinstr(arg0);
  this->elapsed = timestamp - self->start[this->type, this->klass, this->name];
  @num[this->type, this->klass, this->name] = count();
  @eavg[this->type, this->klass, this->name] = avg(this->elapsed);
  @esum[this->type, this->klass, this->name] = sum(this->elapsed);
  @edist[this->type, this->klass, this->name] = quantize(this->elapsed);
  self->start[this->type, this->klass, this->name] = 0;
  self->depth--;
}

mri*:::global_var_set_start
{ 
  this->global_var_set_interested = 1;
  this->depth++;
  this->type = "$global_var=";
  this->klass = "";
  this->name = copyinstr(arg0);
  self->start[this->type, this->klass, this->name] = timestamp;
}

mri*:::global_var_set_end
/this->global_var_set_interested/
{ 
  this->type = "$global_var=";
  this->klass = copyinstr(arg0);
  this->name = copyinstr(arg1);
  this->elapsed = timestamp - self->start[this->type, this->klass, this->name];
  @num[this->type, this->klass, this->name] = count();
  @eavg[this->type, this->klass, this->name] = avg(this->elapsed);
  @esum[this->type, this->klass, this->name] = sum(this->elapsed);
  @edist[this->type, this->klass, this->name] = quantize(this->elapsed);
  self->start[this->type, this->klass, this->name] = 0;
  self->depth--;
}

mri*:::class_var_get_start
{ 
  this->class_var_get_interested = 1;
  this->depth++;
  this->type = "@@class_var";
  this->klass = copyinstr(arg0);
  this->name = copyinstr(arg1);
  self->start[this->type, this->klass, this->name] = timestamp;
}

mri*:::class_var_get_end
/this->class_var_get_interested/
{ 
  this->type = "@@class_var";
  this->klass = copyinstr(arg0);
  this->name = copyinstr(arg1);
  this->elapsed = timestamp - self->start[this->type, this->klass, this->name];
  @num[this->type, this->klass, this->name] = count();
  @eavg[this->type, this->klass, this->name] = avg(this->elapsed);
  @esum[this->type, this->klass, this->name] = sum(this->elapsed);
  @edist[this->type, this->klass, this->name] = quantize(this->elapsed);
  self->start[this->type, this->klass, this->name] = 0;
  self->depth--;
}

mri*:::class_var_set_start
{ 
  this->class_var_set_interested = 1;
  this->depth++;
  this->type = "@@class_var=";
  this->klass = copyinstr(arg0);
  this->name = copyinstr(arg1);
  self->start[this->type, this->klass, this->name] = timestamp;
}

mri*:::class_var_set_end
/this->class_var_set_interested/
{ 
  this->type = "@@class_var=";
  this->klass = copyinstr(arg0);
  this->name = copyinstr(arg1);
  this->elapsed = timestamp - self->start[this->type, this->klass, this->name];
  @num[this->type, this->klass, this->name] = count();
  @eavg[this->type, this->klass, this->name] = avg(this->elapsed);
  @esum[this->type, this->klass, this->name] = sum(this->elapsed);
  @edist[this->type, this->klass, this->name] = quantize(this->elapsed);
  self->start[this->type, this->klass, this->name] = 0;
  self->depth--;
}

mri*:::instance_var_get_start
{ 
  this->instance_var_get_interested = 1;
  this->depth++;
  this->type = "@instance_var";
  this->klass = copyinstr(arg0);
  this->name = copyinstr(arg1);
  self->start[this->type, this->klass, this->name] = timestamp;
}

mri*:::instance_var_get_end
/this->instance_var_get_interested/
{ 
  this->type = "@instance_var";
  this->klass = copyinstr(arg0);
  this->name = copyinstr(arg1);
  this->elapsed = timestamp - self->start[this->type, this->klass, this->name];
  @num[this->type, this->klass, this->name] = count();
  @eavg[this->type, this->klass, this->name] = avg(this->elapsed);
  @esum[this->type, this->klass, this->name] = sum(this->elapsed);
  @edist[this->type, this->klass, this->name] = quantize(this->elapsed);
  self->start[this->type, this->klass, this->name] = 0;
  self->depth--;
}

mri*:::instance_var_set_start
{ 
  this->instance_var_set_interested = 1;
  this->depth++;
  this->type = "@instance_var=";
  this->klass = copyinstr(arg0);
  this->name = copyinstr(arg1);
  self->start[this->type, this->klass, this->name] = timestamp;
}

mri*:::instance_var_set_end
/this->instance_var_set_interested/
{ 
  this->type = "@instance_var=";
  this->klass = copyinstr(arg0);
  this->name = copyinstr(arg1);
  this->elapsed = timestamp - self->start[this->type, this->klass, this->name];
  @num[this->type, this->klass, this->name] = count();
  @eavg[this->type, this->klass, this->name] = avg(this->elapsed);
  @esum[this->type, this->klass, this->name] = sum(this->elapsed);
  @edist[this->type, this->klass, this->name] = quantize(this->elapsed);
  self->start[this->type, this->klass, this->name] = 0;
  self->depth--;
}

mri*:::const_get_start
{ 
  this->const_get_interested = 1;
  this->depth++;
  this->type = "CONSTANT";
  this->klass = copyinstr(arg0);
  this->name = copyinstr(arg1);
  self->start[this->type, this->klass, this->name] = timestamp;
}

mri*:::const_get_end
/this->const_get_interested/
{ 
  this->type = "CONSTANT";
  this->klass = copyinstr(arg0);
  this->name = copyinstr(arg1);
  this->elapsed = timestamp - self->start[this->type, this->klass, this->name];
  @num[this->type, this->klass, this->name] = count();
  @eavg[this->type, this->klass, this->name] = avg(this->elapsed);
  @esum[this->type, this->klass, this->name] = sum(this->elapsed);
  @edist[this->type, this->klass, this->name] = quantize(this->elapsed);
  self->start[this->type, this->klass, this->name] = 0;
  self->depth--;
}

mri*:::const_set_start
{ 
  this->const_set_interested = 1;
  this->depth++;
  this->type = "CONSTANT=";
  this->klass = copyinstr(arg0);
  this->name = copyinstr(arg1);
  self->start[this->type, this->klass, this->name] = timestamp;
}

mri*:::const_set_end
/this->const_set_interested/
{ 
  this->type = "CONSTANT=";
  this->klass = copyinstr(arg0);
  this->name = copyinstr(arg1);
  this->elapsed = timestamp - self->start[this->type, this->klass, this->name];
  @num[this->type, this->klass, this->name] = count();
  @eavg[this->type, this->klass, this->name] = avg(this->elapsed);
  @esum[this->type, this->klass, this->name] = sum(this->elapsed);
  @edist[this->type, this->klass, this->name] = quantize(this->elapsed);
  self->start[this->type, this->klass, this->name] = 0;
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
	printf("%-24s %-24s %-24s %6s %10s %12s\n", "VARIABLE TYPE", "CLASS", "VARIABLE NAME", "COUNT", "AVG(us)", "SUM(us)");
	printa("%-24.24s %-24.24s %-24.24s %@6d %@10d %@12d\n", @num, @eavg, @esum);	
}