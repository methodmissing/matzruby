#!/usr/sbin/dtrace -Zs 

#pragma D option quiet

this string status;
this int restore;

dtrace:::BEGIN
{
	depth = 0;
}

mri*:::thread_switch_start
{ 
  this->interested = 1;
  this->depth++;
  this->status = copyinstr(arg0);
  this->restore = arg1;
  self->start[this->status, this->restore] = timestamp;
}

mri*:::thread_switch_end
/this->interested/
{ 
  this->status = copyinstr(arg0);
  this->restore = arg1;
  this->elapsed = timestamp - self->start[this->status, arg1];
  @num[this->status, this->restore] = count();
  @eavg[this->status, this->restore] = avg(this->elapsed);
  @esum[this->status, this->restore] = sum(this->elapsed);
  @edist[this->status, this->restore] = quantize(this->elapsed);
  self->start[this->status, this->restore] = 0;
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
	printf("%-24s %-23s %6s %10s %12s\n", "STATUS", "RESTORE VALUE", "COUNT", "AVG(us)", "SUM(us)");
	printa("%-24.24s %-23.23d %@6d %@10d %@12d\n", @num, @eavg, @esum);	
}