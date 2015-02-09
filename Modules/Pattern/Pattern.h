/* 
*  Project: StackOS/Module/Pattern
*  Author: uran
*  Description: Retarget stdio 
*  History:
*  						04.02.15 create
*/
#ifndef __MOD_PATTERN_H__
#define __MOD_PATTERN_H__

//-------- <<< Use Configuration Wizard in Context Menu >>> --------------------


//   <s> Module name 
#define STOS_MODULE_NAME						Pattern


// <e> Example menu 
#define STOS_PATTERN_EXAMPLE				1

//   <o> High-speed Internal Clock <1-999999999>
#define RTE_HSI                         8000000

//   <o> USART1_TX Pin <0=>PA9
#define RTE_USART1_TX_PORT_ID_DEF       0
#if    (RTE_USART1_TX_PORT_ID_DEF == 0)
#define RTE_USART1_TX_PORT_DEF          GPIOA
#define RTE_USART1_TX_BIT_DEF           9
#else
#error "Some error"
#endif

// </e>




// <e> Enable test unit (Benchmark) 
#define STOS_PATTERN_TESTBECH				1

//   <o> Select test unit <0=>Simple test <1=>Random data <2=>Some tests <3=>Hello world
//	 <i> 
#define STOS_PATTERN_TESTUNIT				3

// </e>


//-------- <<< end of configuration section >>>    --------------------
#define macro(X) \
void Module ##X## Init (const uint32_t mode); 


void PatternTask (void const *arg); 

macro(STOS_MODULE_NAME)

#undef STOS_MODULE_NAME


#endif /* __MOD_PATTERN_H__ */
