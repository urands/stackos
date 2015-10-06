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

#include "StackOS.h"



typedef enum  {
  stosInput               =  0,       ///< port input; no error or event occurred.
  stosOutput		          =  1,       ///< port output; signal event occurred.
  stosReserved      =  0x7FFFFFFF  ///< prevent from enum down-size compiler optimization.
} stosPortDirection;


typedef enum  {
  stosDataRaw               =  0,       ///< port input; no error or event occurred.
  stosDataFormat	          =  1,       ///< port output; signal event occurred.
} stosPortDataType;


/* Typedef port */
typedef struct {
	stosPortDirection	dir;
	stosPortDataType	type;

} stosPortDef_t;


/* Typedef module */
typedef struct {
	stosPortDef_t*	port;
	osThreadId 			tid;
	osMessageQId*		qid_send;
	osMessageQId*		qid_recv;
	

} stosModuleDef_t;

#define stosKernelInit(_size) \
	extern stosModuleDef_t	stosModule [_size];



	
//Define port array variable
#define stosPortDef( modname, count ) \
	stosPortDef_t	STOS_MODULE_PORT_##modname[ count ]

#define stosPort( modname ) \
	STOS_MODULE_PORT_##modname

#define __stosPortDef( modname, count ) stosPortDef( modname, count )

#define __stosPort( modname ) stosPort( modname )

#define stosModuleDef( modname ) \
	stosModuleDef_t STOS_MODULE_##modname

#define stosModule( modname ) \
	 STOS_MODULE_##modname

#define __stosModuleDef( modname ) stosModuleDef( modname )

#define __stosModule( modname ) stosModule( modname )
 
/*
#define stosModule( _id, modname, priority, ports ) \
	stosPortDef_t	STOS_MODULE_PORTS_##modname[ ports ]; \
	stosModuleDef_t STOS_MODULE_##modname; \
*/

#if (osFeature_MessageQ == 1 )

#define stosModuleSendQueryDef( modname, qid_send_cnt )  \
	osMessageQId stos_MessageQ_send_##modname [ qid_send_cnt ];  

#define stosModuleRecvQueryDef( modname, qid_recv_cnt )  \
	osMessageQId stos_MessageQ_recv_##modname [ qid_recv_cnt ]; 

#endif 

#define stosModuleInit( _id, _modname, _mode ) \
	stosModule[ _id ].qid_send = stos_MessageQ_send_##_modname##; \
	stosModule[ _id ].qid_recv = stos_MessageQ_recv_##_modname##; \
	stosModule[ _id ].tid = osThreadCreate (osThread (##_modname##Task), NULL); \
  if ( stosModule[ _id ].tid == NULL ) return osErrorResource;

#define stosModuleConnectSendToRecv( mod_id1, qnum_send , mod_id2, qnum_recv ) \
  stosModule[ _id ].qid_recv;


#endif /* __STACK_OS_INTERFACE_H__ */
