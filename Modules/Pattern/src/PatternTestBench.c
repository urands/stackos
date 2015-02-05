/* 
*  Project: StackOS/Module/Pattern
*  Author: uran
*  Description: TestBench 
*  History:
*  						04.02.15 create
*/
#include <StackOS.h>
#include <Pattern/Pattern.h>


/* This is simple test  for this module */
void PatternSimpleTest( void ){
	
	
	
}


/* Test on work some functions */
void PatternHelloWorld( void ){
	
	
	
}


/* Pattern testbench selector  */
void PatternTestBench( uint32_t select_testbench ){
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

