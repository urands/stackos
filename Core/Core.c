/* 
*  Project: StackOS
*  Author: uran
*  Description: Retarget stdio 
*  History:
*  						04.02.15 create
*/

#include <StackOS.h>


osThreadId tid_thread1; // ID for thread 1
osThreadId tid_thread2; // for thread 2
typedef struct { // Message object structure
float voltage; // AD result of measured voltage
float current; // AD result of measured current
int counter; // A counter value
	char sss[512];
} T_MEAS;

/*osPoolDef(mpool, 50, T_MEAS); // Define memory pool
osPoolId mpool;
*/
osMessageQDef(MsgBox, 200, T_MEAS); // Define message queue
osMessageQId MsgBox;


//osMailQDef(mail, 113, T_MEAS); // Define mail queue
//osMailQId mail;

osMessageQId qury[10];

int main(void){
	
	T_MEAS *mptr;
	stosModuleDef aaaa;
	
	
	
	
	aaaa.qid_send = qury;
	// mpool = osPoolCreate(osPool(mpool)); // create memory pool
	MsgBox = osMessageCreate(osMessageQ(MsgBox), NULL); // create msg queue
	// mail = osMailCreate(osMailQ(mail), NULL); // create mail queue
	
	aaaa.qid_send[0] = aaaa.qid_send[ 50 ];


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
