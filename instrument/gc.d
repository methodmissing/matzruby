#!/usr/sbin/dtrace -Zs 

#pragma D option quiet

dtrace:::BEGIN
{
	depth = 0;
}

mri*:::gc_malloc_start
{ 
  this->malloc_start = timestamp;
}

mri*:::gc_malloc_end
/this->malloc_start/
{ 
  this->elapsed = timestamp - this->malloc_start;
  this->malloc_start = 0;
  this->type = "malloc";
  @num[this->type] = count();
  @eavg[this->type] = avg(this->elapsed);
  @esum[this->type] = sum(this->elapsed);
  @edist[this->type] = quantize(this->elapsed);
  this->depth--;
}

mri*:::gc_calloc_start
{ 
  this->calloc_start = timestamp;
}

mri*:::gc_calloc_end
/this->calloc_start/
{ 
  this->elapsed = timestamp - this->calloc_start;
  this->calloc_start = 0;
  this->type = "calloc";
  @num[this->type] = count();
  @eavg[this->type] = avg(this->elapsed);
  @esum[this->type] = sum(this->elapsed);
  @edist[this->type] = quantize(this->elapsed);
  this->depth--;
}

mri*:::gc_realloc_start
{ 
  this->realloc_start = timestamp;
}

mri*:::gc_realloc_end
/this->realloc_start/
{ 
  this->elapsed = timestamp - this->realloc_start;
  this->realloc_start = 0;
  this->type = "realloc";
  @num[this->type] = count();
  @eavg[this->type] = avg(this->elapsed);
  @esum[this->type] = sum(this->elapsed);
  @edist[this->type] = quantize(this->elapsed);
  this->depth--;
}

mri*:::gc_free_start
{ 
  this->free_start = timestamp;
}

mri*:::gc_free_end
/this->free_start/
{ 
  this->elapsed = timestamp - this->free_start;
  this->free_start = 0;
  this->type = "free";
  @num[this->type] = count();
  @eavg[this->type] = avg(this->elapsed);
  @esum[this->type] = sum(this->elapsed);
  @edist[this->type] = quantize(this->elapsed);
  this->depth--;
}

mri*:::gc_register_address_start
{ 
  this->register_address_start = timestamp;
}

mri*:::gc_register_address_end
/this->register_address_start/
{ 
  this->elapsed = timestamp - this->register_address_start;
  this->register_address_start = 0;
  this->type = "register_address";
  @num[this->type] = count();
  @eavg[this->type] = avg(this->elapsed);
  @esum[this->type] = sum(this->elapsed);
  @edist[this->type] = quantize(this->elapsed);
  this->depth--;
}

mri*:::gc_unregister_address_start
{ 
  this->unregister_address_start = timestamp;
}

mri*:::gc_unregister_address_end
/this->unregister_address_start/
{ 
  this->elapsed = timestamp - this->unregister_address_start;
  this->unregister_address_start = 0;
  this->type = "unregister_address";
  @num[this->type] = count();
  @eavg[this->type] = avg(this->elapsed);
  @esum[this->type] = sum(this->elapsed);
  @edist[this->type] = quantize(this->elapsed);
  this->depth--;
}

mri*:::gc_add_heap_start
{ 
  this->add_heap_start = timestamp;
}

mri*:::gc_add_heap_end
/this->add_heap_start/
{ 
  this->elapsed = timestamp - this->add_heap_start;
  this->add_heap_start = 0;
  this->type = "add_heap";
  @num[this->type] = count();
  @eavg[this->type] = avg(this->elapsed);
  @esum[this->type] = sum(this->elapsed);
  @edist[this->type] = quantize(this->elapsed);
  this->depth--;
}

dtrace:::END
{
	normalize(@eavg, 1000);
	normalize(@esum, 1000);
	printf("ELAPSED TIME DISTRIBUTION,\n");
	printa(@edist);
	setopt("aggsortpos", "2");
	printf("%-33s %45s\n", "___ OVERLAP TIMES: ___", "______ ELAPSED ______");
	printf("%-24s %6s %10s %12s\n", "OPERATION", "COUNT", "AVG(us)", "SUM(us)");
	printa("%-24.24s %@6d %@10d %@12d\n", @num, @eavg, @esum);	
}