/* 
*  Project: StackOS
*  Author: uran
*  Description: Interface module for Stack OS 
*  History:
*  						04.02.15 create
*/
#ifndef __STACK_OS_INTERFACE_H__
#define __STACK_OS_INTERFACE_H__

#include <cmsis_os.h>

/* Typedef module */
typedef struct {
	osThreadId 			tid;
	osMessageQId*		qid_send;
	osMessageQId*		qid_recv;

} stosModuleDef;



#endif /* __STACK_OS_INTERFACE_H__ */
