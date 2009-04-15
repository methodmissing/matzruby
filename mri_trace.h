/*
 * Generated by dtrace(1M).
 */

#ifndef	_MRI_TRACE_H
#define	_MRI_TRACE_H

#include <unistd.h>

#ifdef	__cplusplus
extern "C" {
#endif

#define MRI_STABILITY "___dtrace_stability$mri$v1$1_1_0_1_1_0_1_1_0_1_1_0_1_1_0"

#define MRI_TYPEDEFS "___dtrace_typedefs$mri$v1"

#define	MRI_CLASS_VAR_GET_END(arg0, arg1) \
{ \
	__asm__ volatile(".reference " MRI_TYPEDEFS); \
	__dtrace_probe$mri$class_var_get_end$v1$63686172202a$63686172202a(arg0, arg1); \
	__asm__ volatile(".reference " MRI_STABILITY); \
} 
#define	MRI_CLASS_VAR_GET_END_ENABLED() \
	__dtrace_isenabled$mri$class_var_get_end$v1()
#define	MRI_CLASS_VAR_GET_START(arg0, arg1) \
{ \
	__asm__ volatile(".reference " MRI_TYPEDEFS); \
	__dtrace_probe$mri$class_var_get_start$v1$63686172202a$63686172202a(arg0, arg1); \
	__asm__ volatile(".reference " MRI_STABILITY); \
} 
#define	MRI_CLASS_VAR_GET_START_ENABLED() \
	__dtrace_isenabled$mri$class_var_get_start$v1()
#define	MRI_CLASS_VAR_SET_END(arg0, arg1) \
{ \
	__asm__ volatile(".reference " MRI_TYPEDEFS); \
	__dtrace_probe$mri$class_var_set_end$v1$63686172202a$63686172202a(arg0, arg1); \
	__asm__ volatile(".reference " MRI_STABILITY); \
} 
#define	MRI_CLASS_VAR_SET_END_ENABLED() \
	__dtrace_isenabled$mri$class_var_set_end$v1()
#define	MRI_CLASS_VAR_SET_START(arg0, arg1) \
{ \
	__asm__ volatile(".reference " MRI_TYPEDEFS); \
	__dtrace_probe$mri$class_var_set_start$v1$63686172202a$63686172202a(arg0, arg1); \
	__asm__ volatile(".reference " MRI_STABILITY); \
} 
#define	MRI_CLASS_VAR_SET_START_ENABLED() \
	__dtrace_isenabled$mri$class_var_set_start$v1()
#define	MRI_CLEAR_CACHE_BY_CLASS_END(arg0) \
{ \
	__asm__ volatile(".reference " MRI_TYPEDEFS); \
	__dtrace_probe$mri$clear_cache_by_class_end$v1$63686172202a(arg0); \
	__asm__ volatile(".reference " MRI_STABILITY); \
} 
#define	MRI_CLEAR_CACHE_BY_CLASS_END_ENABLED() \
	__dtrace_isenabled$mri$clear_cache_by_class_end$v1()
#define	MRI_CLEAR_CACHE_BY_CLASS_START(arg0) \
{ \
	__asm__ volatile(".reference " MRI_TYPEDEFS); \
	__dtrace_probe$mri$clear_cache_by_class_start$v1$63686172202a(arg0); \
	__asm__ volatile(".reference " MRI_STABILITY); \
} 
#define	MRI_CLEAR_CACHE_BY_CLASS_START_ENABLED() \
	__dtrace_isenabled$mri$clear_cache_by_class_start$v1()
#define	MRI_CLEAR_CACHE_BY_ID_END(arg0) \
{ \
	__asm__ volatile(".reference " MRI_TYPEDEFS); \
	__dtrace_probe$mri$clear_cache_by_id_end$v1$696e74(arg0); \
	__asm__ volatile(".reference " MRI_STABILITY); \
} 
#define	MRI_CLEAR_CACHE_BY_ID_END_ENABLED() \
	__dtrace_isenabled$mri$clear_cache_by_id_end$v1()
#define	MRI_CLEAR_CACHE_BY_ID_START(arg0) \
{ \
	__asm__ volatile(".reference " MRI_TYPEDEFS); \
	__dtrace_probe$mri$clear_cache_by_id_start$v1$696e74(arg0); \
	__asm__ volatile(".reference " MRI_STABILITY); \
} 
#define	MRI_CLEAR_CACHE_BY_ID_START_ENABLED() \
	__dtrace_isenabled$mri$clear_cache_by_id_start$v1()
#define	MRI_CLEAR_CACHE_END() \
{ \
	__asm__ volatile(".reference " MRI_TYPEDEFS); \
	__dtrace_probe$mri$clear_cache_end$v1(); \
	__asm__ volatile(".reference " MRI_STABILITY); \
} 
#define	MRI_CLEAR_CACHE_END_ENABLED() \
	__dtrace_isenabled$mri$clear_cache_end$v1()
#define	MRI_CLEAR_CACHE_START() \
{ \
	__asm__ volatile(".reference " MRI_TYPEDEFS); \
	__dtrace_probe$mri$clear_cache_start$v1(); \
	__asm__ volatile(".reference " MRI_STABILITY); \
} 
#define	MRI_CLEAR_CACHE_START_ENABLED() \
	__dtrace_isenabled$mri$clear_cache_start$v1()
#define	MRI_COMPILE_END(arg0, arg1) \
{ \
	__asm__ volatile(".reference " MRI_TYPEDEFS); \
	__dtrace_probe$mri$compile_end$v1$63686172202a$696e74(arg0, arg1); \
	__asm__ volatile(".reference " MRI_STABILITY); \
} 
#define	MRI_COMPILE_END_ENABLED() \
	__dtrace_isenabled$mri$compile_end$v1()
#define	MRI_COMPILE_START(arg0, arg1) \
{ \
	__asm__ volatile(".reference " MRI_TYPEDEFS); \
	__dtrace_probe$mri$compile_start$v1$63686172202a$696e74(arg0, arg1); \
	__asm__ volatile(".reference " MRI_STABILITY); \
} 
#define	MRI_COMPILE_START_ENABLED() \
	__dtrace_isenabled$mri$compile_start$v1()
#define	MRI_CONST_GET_END(arg0, arg1) \
{ \
	__asm__ volatile(".reference " MRI_TYPEDEFS); \
	__dtrace_probe$mri$const_get_end$v1$63686172202a$63686172202a(arg0, arg1); \
	__asm__ volatile(".reference " MRI_STABILITY); \
} 
#define	MRI_CONST_GET_END_ENABLED() \
	__dtrace_isenabled$mri$const_get_end$v1()
#define	MRI_CONST_GET_START(arg0, arg1) \
{ \
	__asm__ volatile(".reference " MRI_TYPEDEFS); \
	__dtrace_probe$mri$const_get_start$v1$63686172202a$63686172202a(arg0, arg1); \
	__asm__ volatile(".reference " MRI_STABILITY); \
} 
#define	MRI_CONST_GET_START_ENABLED() \
	__dtrace_isenabled$mri$const_get_start$v1()
#define	MRI_CONST_SET_END(arg0, arg1) \
{ \
	__asm__ volatile(".reference " MRI_TYPEDEFS); \
	__dtrace_probe$mri$const_set_end$v1$63686172202a$63686172202a(arg0, arg1); \
	__asm__ volatile(".reference " MRI_STABILITY); \
} 
#define	MRI_CONST_SET_END_ENABLED() \
	__dtrace_isenabled$mri$const_set_end$v1()
#define	MRI_CONST_SET_START(arg0, arg1) \
{ \
	__asm__ volatile(".reference " MRI_TYPEDEFS); \
	__dtrace_probe$mri$const_set_start$v1$63686172202a$63686172202a(arg0, arg1); \
	__asm__ volatile(".reference " MRI_STABILITY); \
} 
#define	MRI_CONST_SET_START_ENABLED() \
	__dtrace_isenabled$mri$const_set_start$v1()
#define	MRI_GC_CALLOC_END() \
{ \
	__asm__ volatile(".reference " MRI_TYPEDEFS); \
	__dtrace_probe$mri$gc_calloc_end$v1(); \
	__asm__ volatile(".reference " MRI_STABILITY); \
} 
#define	MRI_GC_CALLOC_END_ENABLED() \
	__dtrace_isenabled$mri$gc_calloc_end$v1()
#define	MRI_GC_CALLOC_START() \
{ \
	__asm__ volatile(".reference " MRI_TYPEDEFS); \
	__dtrace_probe$mri$gc_calloc_start$v1(); \
	__asm__ volatile(".reference " MRI_STABILITY); \
} 
#define	MRI_GC_CALLOC_START_ENABLED() \
	__dtrace_isenabled$mri$gc_calloc_start$v1()
#define	MRI_GC_FREE_END() \
{ \
	__asm__ volatile(".reference " MRI_TYPEDEFS); \
	__dtrace_probe$mri$gc_free_end$v1(); \
	__asm__ volatile(".reference " MRI_STABILITY); \
} 
#define	MRI_GC_FREE_END_ENABLED() \
	__dtrace_isenabled$mri$gc_free_end$v1()
#define	MRI_GC_FREE_START() \
{ \
	__asm__ volatile(".reference " MRI_TYPEDEFS); \
	__dtrace_probe$mri$gc_free_start$v1(); \
	__asm__ volatile(".reference " MRI_STABILITY); \
} 
#define	MRI_GC_FREE_START_ENABLED() \
	__dtrace_isenabled$mri$gc_free_start$v1()
#define	MRI_GC_MALLOC_END() \
{ \
	__asm__ volatile(".reference " MRI_TYPEDEFS); \
	__dtrace_probe$mri$gc_malloc_end$v1(); \
	__asm__ volatile(".reference " MRI_STABILITY); \
} 
#define	MRI_GC_MALLOC_END_ENABLED() \
	__dtrace_isenabled$mri$gc_malloc_end$v1()
#define	MRI_GC_MALLOC_START() \
{ \
	__asm__ volatile(".reference " MRI_TYPEDEFS); \
	__dtrace_probe$mri$gc_malloc_start$v1(); \
	__asm__ volatile(".reference " MRI_STABILITY); \
} 
#define	MRI_GC_MALLOC_START_ENABLED() \
	__dtrace_isenabled$mri$gc_malloc_start$v1()
#define	MRI_GC_REALLOC_END() \
{ \
	__asm__ volatile(".reference " MRI_TYPEDEFS); \
	__dtrace_probe$mri$gc_realloc_end$v1(); \
	__asm__ volatile(".reference " MRI_STABILITY); \
} 
#define	MRI_GC_REALLOC_END_ENABLED() \
	__dtrace_isenabled$mri$gc_realloc_end$v1()
#define	MRI_GC_REALLOC_START() \
{ \
	__asm__ volatile(".reference " MRI_TYPEDEFS); \
	__dtrace_probe$mri$gc_realloc_start$v1(); \
	__asm__ volatile(".reference " MRI_STABILITY); \
} 
#define	MRI_GC_REALLOC_START_ENABLED() \
	__dtrace_isenabled$mri$gc_realloc_start$v1()
#define	MRI_GLOBAL_VAR_GET_END(arg0) \
{ \
	__asm__ volatile(".reference " MRI_TYPEDEFS); \
	__dtrace_probe$mri$global_var_get_end$v1$63686172202a(arg0); \
	__asm__ volatile(".reference " MRI_STABILITY); \
} 
#define	MRI_GLOBAL_VAR_GET_END_ENABLED() \
	__dtrace_isenabled$mri$global_var_get_end$v1()
#define	MRI_GLOBAL_VAR_GET_START(arg0) \
{ \
	__asm__ volatile(".reference " MRI_TYPEDEFS); \
	__dtrace_probe$mri$global_var_get_start$v1$63686172202a(arg0); \
	__asm__ volatile(".reference " MRI_STABILITY); \
} 
#define	MRI_GLOBAL_VAR_GET_START_ENABLED() \
	__dtrace_isenabled$mri$global_var_get_start$v1()
#define	MRI_GLOBAL_VAR_SET_END(arg0) \
{ \
	__asm__ volatile(".reference " MRI_TYPEDEFS); \
	__dtrace_probe$mri$global_var_set_end$v1$63686172202a(arg0); \
	__asm__ volatile(".reference " MRI_STABILITY); \
} 
#define	MRI_GLOBAL_VAR_SET_END_ENABLED() \
	__dtrace_isenabled$mri$global_var_set_end$v1()
#define	MRI_GLOBAL_VAR_SET_START(arg0) \
{ \
	__asm__ volatile(".reference " MRI_TYPEDEFS); \
	__dtrace_probe$mri$global_var_set_start$v1$63686172202a(arg0); \
	__asm__ volatile(".reference " MRI_STABILITY); \
} 
#define	MRI_GLOBAL_VAR_SET_START_ENABLED() \
	__dtrace_isenabled$mri$global_var_set_start$v1()
#define	MRI_INSTANCE_VAR_GET_END(arg0, arg1) \
{ \
	__asm__ volatile(".reference " MRI_TYPEDEFS); \
	__dtrace_probe$mri$instance_var_get_end$v1$63686172202a$63686172202a(arg0, arg1); \
	__asm__ volatile(".reference " MRI_STABILITY); \
} 
#define	MRI_INSTANCE_VAR_GET_END_ENABLED() \
	__dtrace_isenabled$mri$instance_var_get_end$v1()
#define	MRI_INSTANCE_VAR_GET_START(arg0, arg1) \
{ \
	__asm__ volatile(".reference " MRI_TYPEDEFS); \
	__dtrace_probe$mri$instance_var_get_start$v1$63686172202a$63686172202a(arg0, arg1); \
	__asm__ volatile(".reference " MRI_STABILITY); \
} 
#define	MRI_INSTANCE_VAR_GET_START_ENABLED() \
	__dtrace_isenabled$mri$instance_var_get_start$v1()
#define	MRI_INSTANCE_VAR_SET_END(arg0, arg1) \
{ \
	__asm__ volatile(".reference " MRI_TYPEDEFS); \
	__dtrace_probe$mri$instance_var_set_end$v1$63686172202a$63686172202a(arg0, arg1); \
	__asm__ volatile(".reference " MRI_STABILITY); \
} 
#define	MRI_INSTANCE_VAR_SET_END_ENABLED() \
	__dtrace_isenabled$mri$instance_var_set_end$v1()
#define	MRI_INSTANCE_VAR_SET_START(arg0, arg1) \
{ \
	__asm__ volatile(".reference " MRI_TYPEDEFS); \
	__dtrace_probe$mri$instance_var_set_start$v1$63686172202a$63686172202a(arg0, arg1); \
	__asm__ volatile(".reference " MRI_STABILITY); \
} 
#define	MRI_INSTANCE_VAR_SET_START_ENABLED() \
	__dtrace_isenabled$mri$instance_var_set_start$v1()
#define	MRI_LEX_END() \
{ \
	__asm__ volatile(".reference " MRI_TYPEDEFS); \
	__dtrace_probe$mri$lex_end$v1(); \
	__asm__ volatile(".reference " MRI_STABILITY); \
} 
#define	MRI_LEX_END_ENABLED() \
	__dtrace_isenabled$mri$lex_end$v1()
#define	MRI_LEX_START() \
{ \
	__asm__ volatile(".reference " MRI_TYPEDEFS); \
	__dtrace_probe$mri$lex_start$v1(); \
	__asm__ volatile(".reference " MRI_STABILITY); \
} 
#define	MRI_LEX_START_ENABLED() \
	__dtrace_isenabled$mri$lex_start$v1()
#define	MRI_MARSHAL_DUMP_END() \
{ \
	__asm__ volatile(".reference " MRI_TYPEDEFS); \
	__dtrace_probe$mri$marshal_dump_end$v1(); \
	__asm__ volatile(".reference " MRI_STABILITY); \
} 
#define	MRI_MARSHAL_DUMP_END_ENABLED() \
	__dtrace_isenabled$mri$marshal_dump_end$v1()
#define	MRI_MARSHAL_DUMP_START() \
{ \
	__asm__ volatile(".reference " MRI_TYPEDEFS); \
	__dtrace_probe$mri$marshal_dump_start$v1(); \
	__asm__ volatile(".reference " MRI_STABILITY); \
} 
#define	MRI_MARSHAL_DUMP_START_ENABLED() \
	__dtrace_isenabled$mri$marshal_dump_start$v1()
#define	MRI_MARSHAL_LOAD_END() \
{ \
	__asm__ volatile(".reference " MRI_TYPEDEFS); \
	__dtrace_probe$mri$marshal_load_end$v1(); \
	__asm__ volatile(".reference " MRI_STABILITY); \
} 
#define	MRI_MARSHAL_LOAD_END_ENABLED() \
	__dtrace_isenabled$mri$marshal_load_end$v1()
#define	MRI_MARSHAL_LOAD_START() \
{ \
	__asm__ volatile(".reference " MRI_TYPEDEFS); \
	__dtrace_probe$mri$marshal_load_start$v1(); \
	__asm__ volatile(".reference " MRI_STABILITY); \
} 
#define	MRI_MARSHAL_LOAD_START_ENABLED() \
	__dtrace_isenabled$mri$marshal_load_start$v1()
#define	MRI_REQUIRE_END(arg0, arg1) \
{ \
	__asm__ volatile(".reference " MRI_TYPEDEFS); \
	__dtrace_probe$mri$require_end$v1$63686172202a$696e74(arg0, arg1); \
	__asm__ volatile(".reference " MRI_STABILITY); \
} 
#define	MRI_REQUIRE_END_ENABLED() \
	__dtrace_isenabled$mri$require_end$v1()
#define	MRI_REQUIRE_START(arg0, arg1) \
{ \
	__asm__ volatile(".reference " MRI_TYPEDEFS); \
	__dtrace_probe$mri$require_start$v1$63686172202a$696e74(arg0, arg1); \
	__asm__ volatile(".reference " MRI_STABILITY); \
} 
#define	MRI_REQUIRE_START_ENABLED() \
	__dtrace_isenabled$mri$require_start$v1()
#define	MRI_THREAD_SWITCH_END(arg0, arg1) \
{ \
	__asm__ volatile(".reference " MRI_TYPEDEFS); \
	__dtrace_probe$mri$thread_switch_end$v1$63686172202a$696e74(arg0, arg1); \
	__asm__ volatile(".reference " MRI_STABILITY); \
} 
#define	MRI_THREAD_SWITCH_END_ENABLED() \
	__dtrace_isenabled$mri$thread_switch_end$v1()
#define	MRI_THREAD_SWITCH_START(arg0, arg1) \
{ \
	__asm__ volatile(".reference " MRI_TYPEDEFS); \
	__dtrace_probe$mri$thread_switch_start$v1$63686172202a$696e74(arg0, arg1); \
	__asm__ volatile(".reference " MRI_STABILITY); \
} 
#define	MRI_THREAD_SWITCH_START_ENABLED() \
	__dtrace_isenabled$mri$thread_switch_start$v1()


extern void __dtrace_probe$mri$class_var_get_end$v1$63686172202a$63686172202a(char *, char *);
extern int __dtrace_isenabled$mri$class_var_get_end$v1(void);
extern void __dtrace_probe$mri$class_var_get_start$v1$63686172202a$63686172202a(char *, char *);
extern int __dtrace_isenabled$mri$class_var_get_start$v1(void);
extern void __dtrace_probe$mri$class_var_set_end$v1$63686172202a$63686172202a(char *, char *);
extern int __dtrace_isenabled$mri$class_var_set_end$v1(void);
extern void __dtrace_probe$mri$class_var_set_start$v1$63686172202a$63686172202a(char *, char *);
extern int __dtrace_isenabled$mri$class_var_set_start$v1(void);
extern void __dtrace_probe$mri$clear_cache_by_class_end$v1$63686172202a(char *);
extern int __dtrace_isenabled$mri$clear_cache_by_class_end$v1(void);
extern void __dtrace_probe$mri$clear_cache_by_class_start$v1$63686172202a(char *);
extern int __dtrace_isenabled$mri$clear_cache_by_class_start$v1(void);
extern void __dtrace_probe$mri$clear_cache_by_id_end$v1$696e74(int);
extern int __dtrace_isenabled$mri$clear_cache_by_id_end$v1(void);
extern void __dtrace_probe$mri$clear_cache_by_id_start$v1$696e74(int);
extern int __dtrace_isenabled$mri$clear_cache_by_id_start$v1(void);
extern void __dtrace_probe$mri$clear_cache_end$v1(void);
extern int __dtrace_isenabled$mri$clear_cache_end$v1(void);
extern void __dtrace_probe$mri$clear_cache_start$v1(void);
extern int __dtrace_isenabled$mri$clear_cache_start$v1(void);
extern void __dtrace_probe$mri$compile_end$v1$63686172202a$696e74(char *, int);
extern int __dtrace_isenabled$mri$compile_end$v1(void);
extern void __dtrace_probe$mri$compile_start$v1$63686172202a$696e74(char *, int);
extern int __dtrace_isenabled$mri$compile_start$v1(void);
extern void __dtrace_probe$mri$const_get_end$v1$63686172202a$63686172202a(char *, char *);
extern int __dtrace_isenabled$mri$const_get_end$v1(void);
extern void __dtrace_probe$mri$const_get_start$v1$63686172202a$63686172202a(char *, char *);
extern int __dtrace_isenabled$mri$const_get_start$v1(void);
extern void __dtrace_probe$mri$const_set_end$v1$63686172202a$63686172202a(char *, char *);
extern int __dtrace_isenabled$mri$const_set_end$v1(void);
extern void __dtrace_probe$mri$const_set_start$v1$63686172202a$63686172202a(char *, char *);
extern int __dtrace_isenabled$mri$const_set_start$v1(void);
extern void __dtrace_probe$mri$gc_calloc_end$v1(void);
extern int __dtrace_isenabled$mri$gc_calloc_end$v1(void);
extern void __dtrace_probe$mri$gc_calloc_start$v1(void);
extern int __dtrace_isenabled$mri$gc_calloc_start$v1(void);
extern void __dtrace_probe$mri$gc_free_end$v1(void);
extern int __dtrace_isenabled$mri$gc_free_end$v1(void);
extern void __dtrace_probe$mri$gc_free_start$v1(void);
extern int __dtrace_isenabled$mri$gc_free_start$v1(void);
extern void __dtrace_probe$mri$gc_malloc_end$v1(void);
extern int __dtrace_isenabled$mri$gc_malloc_end$v1(void);
extern void __dtrace_probe$mri$gc_malloc_start$v1(void);
extern int __dtrace_isenabled$mri$gc_malloc_start$v1(void);
extern void __dtrace_probe$mri$gc_realloc_end$v1(void);
extern int __dtrace_isenabled$mri$gc_realloc_end$v1(void);
extern void __dtrace_probe$mri$gc_realloc_start$v1(void);
extern int __dtrace_isenabled$mri$gc_realloc_start$v1(void);
extern void __dtrace_probe$mri$global_var_get_end$v1$63686172202a(char *);
extern int __dtrace_isenabled$mri$global_var_get_end$v1(void);
extern void __dtrace_probe$mri$global_var_get_start$v1$63686172202a(char *);
extern int __dtrace_isenabled$mri$global_var_get_start$v1(void);
extern void __dtrace_probe$mri$global_var_set_end$v1$63686172202a(char *);
extern int __dtrace_isenabled$mri$global_var_set_end$v1(void);
extern void __dtrace_probe$mri$global_var_set_start$v1$63686172202a(char *);
extern int __dtrace_isenabled$mri$global_var_set_start$v1(void);
extern void __dtrace_probe$mri$instance_var_get_end$v1$63686172202a$63686172202a(char *, char *);
extern int __dtrace_isenabled$mri$instance_var_get_end$v1(void);
extern void __dtrace_probe$mri$instance_var_get_start$v1$63686172202a$63686172202a(char *, char *);
extern int __dtrace_isenabled$mri$instance_var_get_start$v1(void);
extern void __dtrace_probe$mri$instance_var_set_end$v1$63686172202a$63686172202a(char *, char *);
extern int __dtrace_isenabled$mri$instance_var_set_end$v1(void);
extern void __dtrace_probe$mri$instance_var_set_start$v1$63686172202a$63686172202a(char *, char *);
extern int __dtrace_isenabled$mri$instance_var_set_start$v1(void);
extern void __dtrace_probe$mri$lex_end$v1(void);
extern int __dtrace_isenabled$mri$lex_end$v1(void);
extern void __dtrace_probe$mri$lex_start$v1(void);
extern int __dtrace_isenabled$mri$lex_start$v1(void);
extern void __dtrace_probe$mri$marshal_dump_end$v1(void);
extern int __dtrace_isenabled$mri$marshal_dump_end$v1(void);
extern void __dtrace_probe$mri$marshal_dump_start$v1(void);
extern int __dtrace_isenabled$mri$marshal_dump_start$v1(void);
extern void __dtrace_probe$mri$marshal_load_end$v1(void);
extern int __dtrace_isenabled$mri$marshal_load_end$v1(void);
extern void __dtrace_probe$mri$marshal_load_start$v1(void);
extern int __dtrace_isenabled$mri$marshal_load_start$v1(void);
extern void __dtrace_probe$mri$require_end$v1$63686172202a$696e74(char *, int);
extern int __dtrace_isenabled$mri$require_end$v1(void);
extern void __dtrace_probe$mri$require_start$v1$63686172202a$696e74(char *, int);
extern int __dtrace_isenabled$mri$require_start$v1(void);
extern void __dtrace_probe$mri$thread_switch_end$v1$63686172202a$696e74(char *, int);
extern int __dtrace_isenabled$mri$thread_switch_end$v1(void);
extern void __dtrace_probe$mri$thread_switch_start$v1$63686172202a$696e74(char *, int);
extern int __dtrace_isenabled$mri$thread_switch_start$v1(void);

#ifdef	__cplusplus
}
#endif

#endif	/* _MRI_TRACE_H */
