/* 
*  Project: StackOS
*  Author: uran
*  Description: Defines for Stack OS
*  History:
*  						05.10.15 create
*/
#ifndef __STACK_OS_MODULES_H__
#define __STACK_OS_MODULES_H__

#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>

/**
\brief  Driver Version
*/
typedef struct _STACKOS_MOD_VERSION {
  uint16_t api;                         ///< API version
  uint16_t drv;                         ///< Driver version
} STACKOS_MOD_VERSION;

/**
\brief General power states
*/ 
typedef enum _STACKOS_MOD_STATE {
  ARM_POWER_OFF,                        ///< Power off: no operation possible
  ARM_POWER_LOW,                        ///< Low Power mode: retain state, detect and signal wake-up events
  ARM_POWER_FULL                        ///< Power on: full operation at maximum performance
} ARM_POWER_STATE;


/**
\brief General power states
*/ 
typedef enum _STACKOS_EVENT {
  STACKOS_EVENT_INITIALIZE,                        ///< Power off: no operation possible
  STACKOS_EVENT_BUFFER_DONE,                        ///< Low Power mode: retain state, detect and signal wake-up events
} STACKOS_EVENT;





/**
\brief General power states
*/ 
typedef enum _STACKOS_STATUS {
  STACKOS_SUCCESS,                        ///< Power off: no operation possible
  STACKOS_FAIL,                        ///< Low Power mode: retain state, detect and signal wake-up events
} STACKOS_STATUS;


typedef void (*STACKOS_SignalEvent_t) (STACKOS_EVENT event);  ///< Pointer to \ref ARM_UART_SignalEvent : Signal UART Event.


/**
\brief  Access structure of the UART Driver.
*/
typedef struct _STACKOS_MODULE {
  STACKOS_MOD_VERSION   (*GetVersion)      (void);                               ///< Pointer to \ref ARM_UART_GetVersion : Get driver version.

	STACKOS_STATUS       (*Initialize)      (STACKOS_SignalEvent_t cb_event,        
                                            uint32_t               event_mask);  ///< Pointer to \ref ARM_UART_Initialize : Initialize UART Interface.	
	
	STACKOS_STATUS       (*Configure)       (void* confRef, uint16_t confSize ); ///< Pointer to \ref ARM_UART_Configure : Configure UART Interface.
	
	
	STACKOS_STATUS       (*Uninitialize)    (void);                               ///< Pointer to \ref ARM_UART_Uninitialize : De-initialize UART Interface.
	
	
	STACKOS_STATUS       (*Start)    (void);                               ///< Pointer to \ref ARM_UART_Uninitialize : De-initialize UART Interface.
	
	
	STACKOS_STATUS       (*Stop)    (void);                               ///< Pointer to \ref ARM_UART_Uninitialize : De-initialize UART Interface.
	
	
	
	void*								 stosData;
	
/*	
  
  ARM_UART_STATUS       (*Uninitialize)    (void);                               ///< Pointer to \ref ARM_UART_Uninitialize : De-initialize UART Interface.
  ARM_UART_STATUS       (*PowerControl)    (ARM_POWER_STATE state);              ///< Pointer to \ref ARM_UART_PowerControl : Control UART Interface Power.
 
  int32_t               (*WriteData)       (const uint8_t *data, uint32_t size); ///< Pointer to \ref ARM_UART_WriteData : Write data to UART transmitter.
  int32_t               (*ReadData)        (      uint8_t *data, uint32_t size); ///< Pointer to \ref ARM_UART_ReadData : Read data from UART receiver.
  int32_t               (*DataAvailable)   (void);                               ///< Pointer to \ref ARM_UART_DataAvailable : Check available data in UART receiver.
  bool                  (*TxDone)          (void);                               ///< Pointer to \ref ARM_UART_TxDone : Check if UART transmission is completed.
  ARM_UART_STATUS       (*SetTxThreshold)  (uint32_t level);                     ///< Pointer to \ref ARM_UART_SetTxThreshold : Set transmit threshold.
  ARM_UART_STATUS       (*SetRxThreshold)  (uint32_t level);                     ///< Pointer to \ref ARM_UART_SetRxThreshold : Set receive threshold.
  ARM_UART_STATUS       (*FlushTxBuffer)   (void);                               ///< Pointer to \ref ARM_UART_FlushTxBuffer : Flush UART transmit buffer.
  ARM_UART_STATUS       (*FlushRxBuffer)   (void);                               ///< Pointer to \ref ARM_UART_FlushRxBuffer : Flush UART receive buffer.
  ARM_UART_COM_ERROR    (*GetComError)     (void);                               ///< Pointer to \ref ARM_UART_GetComError : Get UART Communication errors.
  ARM_UART_STATUS       (*SetComBreak)     (void);                               ///< Pointer to \ref ARM_UART_SetComBreak : Suspend transmission and put UART Transmission line in a break state.
  ARM_UART_STATUS       (*ClearComBreak)   (void);                               ///< Pointer to \ref ARM_UART_ClearComBreak : Resume transmission and put UART Transmission line in a non-break state.
  ARM_UART_STATUS       (*SetModemControl) (ARM_UART_MODEM_CONTROL control);     ///< Pointer to \ref ARM_UART_SetModemControl : Set UART Modem Control line state.
  ARM_UART_MODEM_STATUS (*GetModemStatus)  (void);                               ///< Pointer to \ref ARM_UART_GetModemStatus : Get UART Modem Status lines state.
	
	
	*/
} const STACKOS_MODULE;





#endif 
