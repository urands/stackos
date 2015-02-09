/* 
*  Project: StackOS
*  Author: uran
*  Description: Defines for Stack OS
*  History:
*  						04.02.15 create
*/
#ifndef __STACK_OS_DEFINES_H__
#define __STACK_OS_DEFINES_H__

/* Some results */

#if ( osCMSIS < 0x10002 ) 
	#error  "CMSIS version error" #osKernelSystemId
#endif

/* STACK OS ERROR CODES */
#define OS_ERROR_STOS_START        10






/* MACRO DEFINES */
#define stosMOduleDef(X) \
void Module ##X## Init (const uint32_t mode);



#endif /* __STACK_OS_DEFINES_H__ */
