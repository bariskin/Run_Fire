/**
******************************************************************************
* @file      mainFSM.c
* @author    
* @version 
* @date      
* @brief     This file provides common functions for the mainFSM.c
*                      
*/

/* ------------------------Includes ----------------------------------*/

#include "mainFSM.h"


/* ------------------------External variables -------------------------*/


/* ------------------------Global variables----------------------------*/

volatile uint8_t ChannelNumber = 5;
volatile uint16_t LedTime   = 1000; 
volatile uint16_t SpeedTime = 1000;

volatile uint8_t flag_run ;

/* ------------------------Locale variables----------------------------*/


 void (*pfn_LED_output_set[])(void) = 
	{
    set_LED_1,
    set_LED_2,
    set_LED_3,
	  set_LED_4,
	  set_LED_5,
		set_LED_6,
    set_LED_7,
    set_LED_8,
	  set_LED_9,
	  set_LED_10,
	  set_LED_11,
    set_LED_12,
    set_LED_13,
	  set_LED_14,
	  set_LED_15,
		set_LED_16,
		set_LED_17,
		set_LED_18

  };


 void (*pfn_LED_output_reset[])(void) = 
	{
    reset_LED_1,
    reset_LED_2,
    reset_LED_3,
	  reset_LED_4,
	  reset_LED_5,
		reset_LED_6,
    reset_LED_7,
    reset_LED_8,
	  reset_LED_9,
	  reset_LED_10,
		reset_LED_11,
    reset_LED_12,
    reset_LED_13,
	  reset_LED_14,
	  reset_LED_15,
		reset_LED_16,
    reset_LED_17,
    reset_LED_18
	 	
  };
 

/* ------------------------Functions-----------------------------------*/ 
static uint8_t i = 0;
	
void run_fire(uint8_t ch_number, uint16_t led_time, uint16_t speed_time)
	{
   
		
		uint16_t led_time_temp = 5;
	//	uint16_t speed_time_temp =  speed_time;
		

		    (*pfn_LED_output_set[i])();         // set current LED	
			
		    osDelay(led_time);
			
		
	      (*pfn_LED_output_reset[i])();       // reset current LED
			
			   osDelay(led_time  - speed_time);
			
			    i++;
			

         if(i >= ch_number)
				      {
							   i = 0;
							}					 
		
		
	}