/**
******************************************************************************
* @file      ButtonNadler.h
* @author    
* @version   
* @date      
* @brief     This file contains defines and all the functions prototypes for the  ButtonHandler.h
******************************************************************************
*/


#ifndef _BUTTON_HANDLER_H
#define _BUTTON_HANDLER_H

#ifdef __cplusplus
extern "C" {
#endif
  
 /* ------------------------Includes ----------------------------------*/
 #include "stm32f7xx.h"

 
  /** @defgroup button_handler
  * @{
  */
	  void Handler_BUT_UP(void);
		void Handler_BUT_DOWN(void);
		void Handler_BUT_START(void);
		void Handler_BUT_STOP(void);
		
	  void readButtons(void);
		
  
  /**
  * @}
  */
 /* ------------------------Defines ----------------------------------*/
    
	#define BUT_UP     1	 		
	#define BUT_DOWN   2
  #define BUT_START  3
	#define BUT_STOP   4
	
	
	
	
	#define ON 1
  #define OFF  0
  
 /* ------------------------External variables -------------------------*/
  

  
  /** @addtogroup button_handler
  * @{
  */
	
	void Handler_BUT_UP(void);
 
  void Handler_BUT_DOWN(void);

  void Handler_BUT_START(void);

  void Handler_BUT_STOP(void);


  /**
  * @}
  */
  
#ifdef __cplusplus
}
#endif

#endif  /* _BUTTON_HANDLER_H */
