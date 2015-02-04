/* 
*  Project: StackOS/Module/Toolbox
*  Author: uran
*  Description: Retarget stdio 
*  History:
*  						04.02.15 create
*/
#ifndef __STACK_OS_H__
#define __STACK_OS_H__

//-------- <<< Use Configuration Wizard in Context Menu >>> --------------------


// <e> Enable retarget stdio 
#define STOS_TOOLBOX_RETARGET				0

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

// </e>


//-------- <<< end of configuration section >>>    --------------------


#endif
