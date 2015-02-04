/* 
*  Project: StackOS
*  Author: uran
*  Description: Retarget stdio 
*  History:
*  						04.02.15 create
*/

/*----------------------------------------------------------------------------
 *      RTX User configuration part BEGIN
 *---------------------------------------------------------------------------*/

//-------- <<< Use Configuration Wizard in Context Menu >>> -----------------




//   <o> USART1_RX Pin <0=>PA10
#define RTE_USART1_RX_PORT_ID_DEF       0
#if    (RTE_USART1_RX_PORT_ID_DEF == 0)
#define RTE_USART1_RX_PORT_DEF          GPIOA
#define RTE_USART1_RX_BIT_DEF           10
#else
#error "Invalid USART1_RX Pin Configuration!"
#endif

//   <o> USART1_CK Pin <0=>PA8
#define RTE_USART1_CK_PORT_ID_DEF       0
#if    (RTE_USART1_CK_PORT_ID_DEF == 0)
#define RTE_USART1_CK_PORT_DEF          GPIOA
#define RTE_USART1_CK_BIT_DEF           8
#else
#error "Invalid USART1_CK Pin Configuration!"
#endif

//   <o> USART1_CTS Pin <0=>PA11
#define RTE_USART1_CTS_PORT_ID_DEF      0
#if    (RTE_USART1_CTS_PORT_ID_DEF == 0)
#define RTE_USART1_CTS_PORT_DEF         GPIOA
#define RTE_USART1_CTS_BIT_DEF          11
#else
#error "Invalid USART1_CTS Pin Configuration!"
#endif

//   <o> USART1_RTS Pin <0=>PA12
#define RTE_USART1_RTS_PORT_ID_DEF      0
#if    (RTE_USART1_RTS_PORT_ID_DEF == 0)
#define RTE_USART1_RTS_PORT_DEF         GPIOA
#define RTE_USART1_RTS_BIT_DEF          12
#else
#error "Invalid USART1_RTS Pin Configuration!"
#endif

//   <e> USART1 Pin Remap
//   <i> Enable USART1 Pin Remapping
#define RTE_USART1_REMAP_FULL           0

//     <o> USART1_TX Pin <0=>PB6
#define RTE_USART1_TX_PORT_ID_FULL      0
#if    (RTE_USART1_TX_PORT_ID_FULL == 0)
#define RTE_USART1_TX_PORT_FULL         GPIOB
#define RTE_USART1_TX_BIT_FULL          6
#else
#error "Invalid USART1_TX Pin Configuration!"
#endif

//     <o> USART1_RX Pin <0=>PB7
#define RTE_USART1_RX_PORT_ID_FULL      0
#if    (RTE_USART1_RX_PORT_ID_FULL == 0)
#define RTE_USART1_RX_PORT_FULL         GPIOB
#define RTE_USART1_RX_BIT_FULL          7
#else
#error "Invalid USART1_RX Pin Configuration!"
#endif
//   </e>


//
// <h>Thread Configuration
// =======================
//
//   <o>Number of concurrent running user threads <1-250>
//   <i> Defines max. number of user threads that will run at the same time.
//   <i> Default: 6
#ifndef OS_TASKCNT
 #define OS_TASKCNT     6
#endif
 
//   <o>Default Thread stack size [bytes] <64-4096:8><#/4>
//   <i> Defines default stack size for threads with osThreadDef stacksz = 0
//   <i> Default: 200
#ifndef OS_STKSIZE
 #define OS_STKSIZE     50
#endif
 
//   <o>Main Thread stack size [bytes] <64-32768:8><#/4>
//   <i> Defines stack size for main thread.
//   <i> Default: 200
#ifndef OS_MAINSTKSIZE
 #define OS_MAINSTKSIZE 50
#endif
 
//   <o>Number of threads with user-provided stack size <0-250>
//   <i> Defines the number of threads with user-provided stack size.
//   <i> Default: 0
#ifndef OS_PRIVCNT
 #define OS_PRIVCNT     0
#endif
 
//   <o>Total stack size [bytes] for threads with user-provided stack size <0-1048576:8><#/4>
//   <i> Defines the combined stack size for threads with user-provided stack size.
//   <i> Default: 0
#ifndef OS_PRIVSTKSIZE
 #define OS_PRIVSTKSIZE 0
#endif
 
//   <q>Check for stack overflow
//   <i> Includes the stack checking code for stack overflow.
//   <i> Note that additional code reduces the Kernel performance.
#ifndef OS_STKCHECK
 #define OS_STKCHECK    1
#endif
 
//   <o>Processor mode for thread execution 
//     <0=> Unprivileged mode 
//     <1=> Privileged mode
//   <i> Default: Privileged mode
#ifndef OS_RUNPRIV
 #define OS_RUNPRIV     1
#endif
 
// </h>
 
// <h>RTX Kernel Timer Tick Configuration
// ======================================
//   <q> Use Cortex-M SysTick timer as RTX Kernel Timer
//   <i> Cortex-M processors provide in most cases a SysTick timer that can be used as 
//   <i> as time-base for RTX.
#ifndef OS_SYSTICK
 #define OS_SYSTICK     1
#endif
//
//   <o>RTOS Kernel Timer input clock frequency [Hz] <1-1000000000>
//   <i> Defines the input frequency of the RTOS Kernel Timer.  
//   <i> When the Cortex-M SysTick timer is used, the input clock 
//   <i> is on most systems identical with the core clock.
#ifndef OS_CLOCK
 #define OS_CLOCK       12000000
#endif
 
//   <o>RTX Timer tick interval value [us] <1-1000000>
//   <i> The RTX Timer tick interval value is used to calculate timeout values.
//   <i> When the Cortex-M SysTick timer is enabled, the value also configures the SysTick timer.
//   <i> Default: 1000  (1ms)
#ifndef OS_TICK
 #define OS_TICK        1000
#endif
 
// </h>
 
// <h>System Configuration
// =======================
//
// <e>Round-Robin Thread switching
// ===============================
//
// <i> Enables Round-Robin Thread switching.
#ifndef OS_ROBIN
 #define OS_ROBIN       1
#endif
 
//   <o>Round-Robin Timeout [ticks] <1-1000>
//   <i> Defines how long a thread will execute before a thread switch.
//   <i> Default: 5
#ifndef OS_ROBINTOUT
 #define OS_ROBINTOUT   5
#endif
 
// </e>
 
// <e>User Timers
// ==============
//   <i> Enables user Timers
#ifndef OS_TIMERS
 #define OS_TIMERS      1
#endif
 
//   <o>Timer Thread Priority
//                        <1=> Low
//     <2=> Below Normal  <3=> Normal  <4=> Above Normal
//                        <5=> High
//                        <6=> Realtime (highest)
//   <i> Defines priority for Timer Thread
//   <i> Default: High
#ifndef OS_TIMERPRIO
 #define OS_TIMERPRIO   5
#endif
 
//   <o>Timer Thread stack size [bytes] <64-4096:8><#/4>
//   <i> Defines stack size for Timer thread.
//   <i> Default: 200
#ifndef OS_TIMERSTKSZ
 #define OS_TIMERSTKSZ  50
#endif

/*----------------------------------------------------------------------------
 *      RTX Configuration Functions
 *---------------------------------------------------------------------------*/

 
/*----------------------------------------------------------------------------
 * end of file
 *---------------------------------------------------------------------------*/