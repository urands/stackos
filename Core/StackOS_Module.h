/* 
*  Project: StackOS
*  Author: uran
*  Description: Defines for Stack OS
*  History:
*  						05.10.15 create
*/

#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>


#if ( STOS_PORTDEFINITION == 1 )

#if ( STOS_MODULE_PORT0 == 0 &&  STOS_MODULE_PORT1 == 1  )
	#error "Port 1 cannot activate before port 0. Check configuration settings."
#endif

#if ( STOS_MODULE_PORT1 == 1 )
	
#elif  ( STOS_MODULE_PORT0 == 1 )
	
#endif




#endif



//Remove definitions for module 

#ifdef STOS_PORTDEFINITION 
	#undef STOS_PORTDEFINITION
#endif

#ifdef STOS_MODULE_PORT0 
	#undef STOS_MODULE_PORT0
#endif

#ifdef STOS_MODULE_NAME 
	#undef STOS_MODULE_NAME
#endif






/**
\brief  Access structure of the UART Driver.
*/
/*
typedef struct _STACKOS_MODULE {
  STACKOS_MOD_VERSION   (*GetVersion)      (void);                               ///< Pointer to \ref ARM_UART_GetVersion : Get driver version.

	STACKOS_STATUS       (*Initialize)      (STACKOS_SignalEvent_t cb_event,        
                                            uint32_t               event_mask);  ///< Pointer to \ref ARM_UART_Initialize : Initialize UART Interface.	
	
	STACKOS_STATUS       (*Configure)       (void* confRef, uint16_t confSize ); ///< Pointer to \ref ARM_UART_Configure : Configure UART Interface.
	
	
	STACKOS_STATUS       (*Uninitialize)    (void);                               ///< Pointer to \ref ARM_UART_Uninitialize : De-initialize UART Interface.
	
	STACKOS_STATUS       (*SetParametr)    (uint32_t paramcode, void* paramRef, uint32_t paramSize );  ///< Pointer to \ref ARM_UART_Uninitialize : De-initialize UART Interface.
	
	STACKOS_STATUS       (*GetParametr)    (uint32_t paramcode, void* paramRef, uint32_t paramSize );  ///< Pointer to \ref ARM_UART_Uninitialize : De-initialize UART Interface.
	
	
	STACKOS_STATUS       (*Start)    (void);                               ///< Pointer to \ref ARM_UART_Uninitialize : De-initialize UART Interface.
	
	
	STACKOS_STATUS       (*Stop)    (void);                               ///< Pointer to \ref ARM_UART_Uninitialize : De-initialize UART Interface.
	
	
	
	void*								 stosData;
	
	
  
  ARM_UART_STATUS       (*Uninitialize)    (void);                               ///< Pointer to \ref ARM_UART_Uninitialize : De-initialize UART Interface.
  ARM_UART_STATUS       (*PowerControl)    (ARM_POWER_STATE state);              ///< Pointer to \ref ARM_UART_PowerControl : Control UART Interface Power.
 
  int32_t               (*WriteData)       (const uint8_t *data, uint32_t size); ///< Pointer to \ref ARM_UART_WriteData : Write data to UART transmitter.
  int32_t               (*ReadData)        (      uint8_t *data, uint32_t size); ///< Pointer to \ref ARM_UART_ReadData : Read data from UART receiver.
  int32_t               (*DataAvailable)   (void);                               ///< Pointer to \ref ARM_UART_DataAvailable : Check available data in UART receiver.
  bool                  (*TxDone)          (void);           `                    ///< Pointer to \ref ARM_UART_TxDone : Check if UART transmission is completed.
  ARM_UART_STATUS       (*SetTxThreshold)  (uint32_t level);                     ///< Pointer to \ref ARM_UART_SetTxThreshold : Set transmit threshold.
  ARM_UART_STATUS       (*SetRxThreshold)  (uint32_t level);                     ///< Pointer to \ref ARM_UART_SetRxThreshold : Set receive threshold.
  ARM_UART_STATUS       (*FlushTxBuffer)   (void);                               ///< Pointer to \ref ARM_UART_FlushTxBuffer : Flush UART transmit buffer.
  ARM_UART_STATUS       (*FlushRxBuffer)   (void);                               ///< Pointer to \ref ARM_UART_FlushRxBuffer : Flush UART receive buffer.
  ARM_UART_COM_ERROR    (*GetComError)     (void);                               ///< Pointer to \ref ARM_UART_GetComError : Get UART Communication errors.
  ARM_UART_STATUS       (*SetComBreak)     (void);                               ///< Pointer to \ref ARM_UART_SetComBreak : Suspend transmission and put UART Transmission line in a break state.
  ARM_UART_STATUS       (*ClearComBreak)   (void);                               ///< Pointer to \ref ARM_UART_ClearComBreak : Resume transmission and put UART Transmission line in a non-break state.
  ARM_UART_STATUS       (*SetModemControl) (ARM_UART_MODEM_CONTROL control);     ///< Pointer to \ref ARM_UART_SetModemControl : Set UART Modem Control line state.
  ARM_UART_MODEM_STATUS (*GetModemStatus)  (void);                               ///< Pointer to \ref ARM_UART_GetModemStatus : Get UART Modem Status lines state.
	
	
	
} const STACKOS_MODULE;
*/
/*

  osOK                    =     0,       ///< function completed; no error or event occurred.
  osEventSignal           =  0x08,       ///< function completed; signal event occurred.
  osEventMessage          =  0x10,       ///< function completed; message event occurred.
  osEventMail             =  0x20,       ///< function completed; mail event occurred.
  osEventTimeout          =  0x40,       ///< function completed; timeout occurred.
  osErrorParameter        =  0x80,       ///< parameter error: a mandatory parameter was missing or specified an incorrect object.
  osErrorResource         =  0x81,       ///< resource not available: a specified resource was not available.
  osErrorTimeoutResource  =  0xC1,       ///< resource not available within given time: a specified resource was not available within the timeout period.
  osErrorISR              =  0x82,       ///< not allowed in ISR context: the function cannot be called from interrupt service routines.
  osErrorISRRecursive     =  0x83,       ///< function called multiple times from ISR with same object.
  osErrorPriority         =  0x84,       ///< system cannot determine priority or thread has illegal priority.
  osErrorNoMemory         =  0x85,       ///< system is out of memory: it was impossible to allocate or reserve memory for the operation.
  osErrorValue            =  0x86,       ///< value of a parameter is out of range.
  osErrorOS               =  0xFF,       ///< unspecified RTOS error: run-time error but no other error message fits.
  os_status_reserved      =  0x7FFFFFFF  ///< prevent from enum down-size compiler optimization.


*/
