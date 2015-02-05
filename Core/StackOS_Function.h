/* 
*  Project: StackOS
*  Author: uran
*  Description: Functions for Stack OS
*  History:
*  						05.02.15 create
*/
#ifndef __STACK_OS_FUNCTION_H__
#define __STACK_OS_FUNCTION_H__

#include <cmsis_os.h>

/* Some results */


/* stosInitialize - initialize kernel objects */
osStatus stosInitialize( void );


/* stosRunning - running kernel objects */
osStatus stosStart( void );


/* stosRunning - running kernel objects */
osStatus stosError( uint32_t error_code );




#endif /* __STACK_OS_FUNCTION_H__ */
