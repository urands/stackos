/* 
*  Project: StackOS
*  Author: uran
*  Description: Retarget stdio 
*  History:
*  						04.02.15 create
*/
#include <StackOS.h>

#include <Pattern/Pattern.h>

#include <Toolbox/Toolbox.h>

int main(void){


	//Initialize StackOS
		if ( stosInitialize() == osOK ){
			//Start StackOS
			if ( stosStart() == osOK ){
				//Free resources from this thread
				return 1;
			}
		}

		return 0;
}

/*
Code - code size
RO-data - const variables (Read Only Data)
RW-data -  (Read Write Data)
ZI-data - ZeroInitialized data (Zero-Initialized Data)


Total RAM Size = RW Data + ZI Data
Total ROM Size = Code + RO Data + RW Data

//free
Program Size: Code=6008 RO-data=424 RW-data=96 ZI-data=4752 


with messages:
Program Size: Code=6656 RO-data=444 RW-data=112 ZI-data=57584  

*/
