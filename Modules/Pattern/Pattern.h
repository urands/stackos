/* 
*  Project: StackOS/Module/Pattern
*  Author: uran
*  Description: Retarget stdio 
*  History:
*  						04.02.15 create
*/
#ifndef __MOD_PATTERN_H__
#define __MOD_PATTERN_H__

#include <StackOS.h>

// <<< Use Configuration Wizard in Context Menu >>> 


//<e> Module thread
#define STOS_MODULE_THREAD 1
//<o> Thread priority<0-255>
//<i> Thread priority<0-255>
#define STOS_MODULE_THREAD_LEVEL 20


//</e>
#define STOS_MODULE_NAME Pattern

//<e> Port defenition 
#define STOS_PORTDEFINITION				1

//<e> Port 0
//	<o1>Direction <0=>Input <1=>Output
//	<i> Direction
//	<o2>Data type <0=>Raw data 
//	<i> Port 0 direction
//	<o3>Transfer type <0=>Asynchronous (non-blocking) <1=>Synchronous (blocking)
//	<i> Transfer type <0=>Asynchronous (non-blocking) <1=>Synchronous (blocking)
//	<o4>Query count <0-1000>
//	<i> Query count <0-1000>
//</e>
#define STOS_MODULE_PORT0										1
#define STOS_MODULE_PORT0_DIRECTION					0
#define STOS_MODULE_PORT0_DATATYPE					0
#define STOS_MODULE_PORT0_TRANSFERTYPE			0
#define STOS_MODULE_PORT0_QUERYCOUNT				3


//<e> Port 1
//	<o1>Direction <0=>Input <1=>Output
//	<i> Direction
//	<o2>Data type <0=>Raw data 
//	<i> Port 0 direction
//	<o3>Transfer type <0=>Asynchronous (non-blocking) <1=>Synchronous (blocking)
//	<i> Transfer type <0=>Asynchronous (non-blocking) <1=>Synchronous (blocking)
//	<o4>Query count <0-1000>
//	<i> Query count <0-1000>
//</e>
#define STOS_MODULE_PORT1										1
#define STOS_MODULE_PORT1_DIRECTION					1
#define STOS_MODULE_PORT1_DATATYPE					0
#define STOS_MODULE_PORT1_TRANSFERTYPE			0
#define STOS_MODULE_PORT1_QUERYCOUNT				3





//</e>



// <e> Enable test unit (Benchmark) 
//   <o1> Select test unit <0=>Simple test <1=>Random data <2=>Some tests <3=>Hello world
//	 <i> 
// </e>
#define STOS_MODULE_TESTBECH				0
#define STOS_MODULE_TESTUNIT				3



// <<< end of configuration section >>>

#include <StackOS_Module.h>

//#define macro(X) \
void Module ##X## Init (const uint32_t mode); 


void PatternTask (void const *arg); 



//macro(STOS_MODULE_NAME)

//#undef STOS_MODULE_NAME

#endif /* __MOD_PATTERN_H__ */
