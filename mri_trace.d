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

  probe require_start( char*, int );
  probe require_end( char*, int );

  probe compile_start( char*, int );
  probe compile_end( char*, int );

  probe lex_start();
  probe lex_end();

  probe global_var_get_start( char* );
  probe global_var_get_end( char* );

  probe global_var_set_start( char* );
  probe global_var_set_end( char* );

  probe class_var_get_start( char*, char* );
  probe class_var_get_end( char*, char* );

  probe class_var_set_start( char*, char* );
  probe class_var_set_end( char*, char* );

  probe instance_var_get_start( char*, char* );
  probe instance_var_get_end( char*, char* );

  probe instance_var_set_start( char*, char* );
  probe instance_var_set_end( char*, char* );

  probe const_get_start( char*, char* );
  probe const_get_end( char*, char* );

  probe const_set_start( char*, char* );
  probe const_set_end( char*, char* );

};