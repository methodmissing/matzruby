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


extern void __dtrace_probe$mri$thread_switch_end$v1$63686172202a$696e74(char *, int);
extern int __dtrace_isenabled$mri$thread_switch_end$v1(void);
extern void __dtrace_probe$mri$thread_switch_start$v1$63686172202a$696e74(char *, int);
extern int __dtrace_isenabled$mri$thread_switch_start$v1(void);

#ifdef	__cplusplus
}
#endif

#endif	/* _MRI_TRACE_H */
