/* 
*  Project: StackOS
*  Author: uran
*  Description: Route module for Stack OS 
*  History:
*  						05.02.15 create
*/

#include <cmsis_os.h>
#include <StackOS.h>


/*************************************************
* Include modules
**************************************************/
#include <Pattern/Pattern.h>



/*************************************************
* Init global
**************************************************/
stosKernelInit( STACKOS_MODULE_COUNT );

/**************************************************
*	Module defines from zero
**************************************************/
/*
*	stosModuleDef ( _id , _module_name, _priority, _send_query, _recv_query )
*/

/* Pattern module defines ( ID from 0 to inv ) */
stosModuleDef( 0 , Pattern, osPriorityNormal );
stosModuleSendQueryDef ( Pattern, 1 );
stosModuleRecvQueryDef ( Pattern, 1 );
/**********************************************/






/**************************************************
*	Module initialize from zero
**************************************************/
osStatus stosModuleInitialize( void ){
	
/*
*	stosModuleInit ( _id , _module_name, _mode )
*/

	
	stosModuleInit(0, Pattern, 0 );
	
	return osOK;
}
