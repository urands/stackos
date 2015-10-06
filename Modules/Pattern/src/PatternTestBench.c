/* 
*  Project: StackOS/Module/Pattern
*  Author: uran
*  Description: TestBench 
*  History:
*  						04.02.15 create
*/
#include <StackOS.h>

#ifdef STOS_TESTUNIT

// <<< Use Configuration Wizard in Context Menu >>> 

// <e> Enable test unit (Benchmark) 
//   <o1> Select test unit <0=>Simple test <1=>Random data <2=>Some tests <3=>Hello world
//	 <i> 
// </e>
#define STOS_PATTERN_TESTBECH				1
#define STOS_PATTERN_TESTUNIT				3

// <<< end of configuration section >>>



/* This is simple test  for this module */
void PatternSimpleTest( void ){
	
	
	
}


/* Test on work some functions */
void PatternHelloWorld( void ){
	
	
	
}


/* Pattern testbench selector  */
void stosTestUnit( void ){
		switch( STOS_PATTERN_TESTUNIT ){
			case 0:
				//Nothing do, this is working thread
				break;
			case 1:
				PatternSimpleTest();
				break;
			case 2:
				PatternHelloWorld();
				break;
			case 3:
				break;
		}
}



#endif
