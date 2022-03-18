/**
******************************************************************************
* @file      mainFSM.h
* @author    
* @version   
* @date      
* @brief     This file contains defines and all the functions prototypes for the mainFSM.h
******************************************************************************
*/


#ifndef _MAIN_FSM_H
#define _MAIN_FSM_H

#ifdef __cplusplus
extern "C" {
#endif
  
 /* ------------------------Includes ----------------------------------*/
 #include "stm32f7xx.h"
 #include "cmsis_os.h"
 #include "BSP_746.h"

 
  /** @defgroup main_fsm
  * @{
  */
  
  /**
  * @}
  */
 /* ------------------------Defines ----------------------------------*/
 #define OFF 0
 #define ON  1  
 
 #define LED_TIME    2000
 #define  SPEED_TIME 2000

  
 /* ------------------------External variables -------------------------*/
  
extern volatile uint8_t ChannelNumber ;
extern volatile uint16_t LedTime ; 
extern volatile uint16_t SpeedTime ;
  
extern volatile uint8_t flag_run ;
	
 
  /** @addtogroup main_fsm
  * @{
  */
	
void run_fire(uint8_t ch_number, uint16_t led_time, uint16_t speed_time);
		
  /**
  * @}
  */
  
#ifdef __cplusplus
}
#endif

#endif  /* _MAIN_FSM_H */
