provider mri {

  probe thread_switch_start( char*, int);
  probe thread_switch_end( char*, int );

  probe clear_cache_start();
  probe clear_cache_end();

  probe clear_cache_by_class_start( char* );
  probe clear_cache_by_class_end( char* );

  probe clear_cache_by_id_start( int );
  probe clear_cache_by_id_end( int );

  probe marshal_dump_start();
  probe marshal_dump_end();  

  probe marshal_load_start();
  probe marshal_load_end();

};