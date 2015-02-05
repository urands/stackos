/* 
*  Project: StackOS
*  Author: uran
*  Description: Functions for Stack OS
*  History:
*  						05.02.15 create
*/
#include <StackOS.h>


/* GLOBAL INITIALIZER */

stosModuleDef_t	stosModule[ STACKOS_MODULE_COUNT ] = {0};


/* stosInitialize - initialize kernel objects */
osStatus stosInitialize( void ){
	
	/* Initialize CMSIS OS */
	if (osKernelInitialize () != osOK) {
		return stosError( OS_ERROR_STOS_START );
	}
	
	//System initialize

	stosModule[0].tid = 0;

	return osOK;
}


/* stosRunning - running kernel objects */
osStatus stosStart( void ){
	uint32_t i;
	//Create threads
	for(i = 0; i < STACKOS_MODULE_COUNT; ++i ){
		stosModule[i].tid = 0;
	}
	
	
	//and running
	if (osKernelStart () != osOK) { // start kernel with job2 execution
			return stosError( OS_ERROR_STOS_START );
	}

	return osOK;
}

/* stosRunning - running kernel objects */
osStatus stosError( uint32_t error_code ){
	return osErrorOS;
}


