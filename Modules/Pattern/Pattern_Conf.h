/* 
*  Project: StackOS/Module/Pattern
*  Author: uran
*  Description: Pattern module 
*  History:
*  						04.02.15 create
*/
#ifndef __MOD_PATTERN_CONF_H__
#define __MOD_PATTERN_CONF_H__

#include <StackOS.h>

#define STOS_MODULE_NAME Pattern

// <<< Use Configuration Wizard in Context Menu >>> 
//<e> Module thread
#define STOS_MODULE_THREAD 1
//<o> Thread priority<0-255>
//<i> Thread priority<0-255>
#define STOS_MODULE_THREAD_LEVEL 20
//</e>

//<e> Port defenition 
#define STOS_PORTDEFINITION				1

//<e> Port 0
//	<o1>Direction <0=>Input <1=>Output
//	<i> Direction
//	<o2>Data type <0=>Raw data <1=>Format data 
//	<i> Port 0 direction
//	<o3>Transfer type <0=>Asynchronous (non-blocking) <1=>Synchronous (blocking)
//	<i> Transfer type <0=>Asynchronous (non-blocking) <1=>Synchronous (blocking)
//	<o4>Query count <0-1000>
//	<i> Query count <0-1000>
//</e>
#define STOS_MODULE_PORT0										1
#define STOS_MODULE_PORT0_DIRECTION					0
#define STOS_MODULE_PORT0_DATATYPE					1
#define STOS_MODULE_PORT0_TRANSFERTYPE			0
#define STOS_MODULE_PORT0_QUERYCOUNT				3


//<e> Port 1
//	<o1>Direction <0=>Input <1=>Output
//	<i> Direction
//	<o2>Data type <0=>Raw data <1=>Format data
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




// <<< end of configuration section >>>

#include <StackOS_Module.h>

#endif /* __MOD_PATTERN_CONF_H__ */
