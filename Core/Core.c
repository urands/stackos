/* 
*  Project: StackOS
*  Author: uran
*  Description: Retarget stdio 
*  History:
*  						04.02.15 create
*/
#include <StackOS.h>



STACKOS_MODULE mod, mod2;

int main(void){
		//Initialize StackOS
		if ( stosInitialize() == osOK ){
			//Start StackOS
			if ( stosStart() == osOK ){
				//Free resources from this thread
				return 1;
			}
		}
		
		mod.Initialize(NULL,0);
		
		mod2.Initialize(NULL,0);
		
		stosSetParametr(mod2, GSM_MODEM_TCP_CLIENT, confTcpClient);


		stosSetIdle( mod2 );
		
		
		
		mod2.PowerControl( STACKOS_POWERUP );
		
		mod2.PowerControl( STACKOS_POWERDOWN );
		
		
		mod2.PowerControl( STACKOS_STANDBY );


		
		
		stosCommand(mod2, GSM_MODEM_POWER_UP, STACKOS_FAITFOREWER ):
		
		
		stosCommand(mod2, GSM_MODEM_CONNECT, STACKOS_FAITFOREWER ):
		
		stosCommand(mod2, GSM_MODEM_POWER_UP, STACKOS_FAITFOREWER ):
		
		
		stosPortConfigure(mod2, STACKOS_GSM_TCP_PORT, confGSMPort):
		
		stosPortConnect(mod, STACKOS_START_INPUT_PORT, mod2, STACKOS_GSM_TCP_PORT);
		
		mod.Start();
		
		mod2.Start();
		
		
		
		
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
