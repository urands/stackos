/* 
*  Project: StackOS
*  Author: uran
*  Description: Retarget stdio 
*  History:
*  						04.02.15 create
*/
#ifndef __STACK_OS_H__
#define __STACK_OS_H__


#include <cmsis_os.h>

//Defines for Stack OS
#include "StackOS_Defines.h"

//Interface module for Stack OS
#include "StackOS_Interface.h"


#include "StackOS_Function.h"


//Interface module for Stack OS
#include "StackOS_Module.h"


//-------- <<< Use Configuration Wizard in Context Menu >>> --------------------


//   <o> Debug information messages level <0=>Off <1=>Low <2=>Medium <3=>High
//	 <i> Debug information messages sending or stop  on warnings  
#define STACKOS_DEBUG							3
#if ( STACKOS_DEBUG > 3 )
	#error "Invalid debug information messages level!"
#endif


//   <o> Stack OS module count  <1-100>
#define STACKOS_MODULE_COUNT			2




// <h> Example Configuration

//   <o> High-speed Internal Clock <1-999999999>
#define RTE_HSI                         8000000

//   <o> USART1_TX Pin <0=>PA9
#define RTE_USART1_TX_PORT_ID_DEF       0
#if    (RTE_USART1_TX_PORT_ID_DEF == 0)
#define RTE_USART1_TX_PORT_DEF          GPIOA
#define RTE_USART1_TX_BIT_DEF           9
#else
#error "Invalid USART1_TX Pin Configuration!"
#endif

// </h>


//-------- <<< end of configuration section >>>    --------------------


#endif
