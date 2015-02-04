/* 
*  Project: StackOS
*  Author: uran
*  Description: Retarget stdio 
*  History:
*  						04.02.15 create
*/
#ifndef __STACK_OS_H__
#define __STACK_OS_H__

//Defines for Stack OS
#include "StackOS_Defines.h"

//Interface module for Stack OS
#include "StackOS_Interface.h"

//-------- <<< Use Configuration Wizard in Context Menu >>> --------------------


//   <o> Debug inormation messages level <0=>Off <1=>Low <2=>Medium <3=>High
//	 <i> Debug inormation messages sending or stop  on warnings  
#define STACKOS_DEBUG							3
#if ( STACKOS_DEBUG > 3 )
	#error "Invalid debug inormation messages level!"
#endif




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
