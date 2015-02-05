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

} stosModuleDef_t;


#define stosKernelInit( _size ) \
extern stosModuleDef_t	stosModule [_size];


#define stosModuleDef( _id, modname, priority ) \
	const uint8_t	STOS_MODULE_##modname = _id; \
  osThreadDef( ##modname##Task, priority, 1, 0 );

#define stosModuleSendQueryDef( modname, qid_send_cnt )  \
	osMessageQId stos_MessageQ_send_##modname [ qid_send_cnt ];  

#define stosModuleRecvQueryDef( modname, qid_recv_cnt )  \
	osMessageQId stos_MessageQ_recv_##modname [ qid_recv_cnt ]; 


#define stosModuleInit( _id, _modname, _mode ) \
	stosModule[ _id ].qid_send = stos_MessageQ_send_##_modname##; \
	stosModule[ _id ].qid_recv = stos_MessageQ_recv_##_modname##; \
	stosModule[ _id ].tid = osThreadCreate (osThread (##_modname##Task), NULL); \
  if ( stosModule[ _id ].tid == NULL ) return osErrorResource;

#define stosModuleConnectSendToRecv( mod_id1, qnum_send , mod_id2, qnum_recv ) \
  stosModule[ _id ].qid_recv;


#endif /* __STACK_OS_INTERFACE_H__ */
