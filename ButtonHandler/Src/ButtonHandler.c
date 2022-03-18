/**
******************************************************************************
* @file      ButtonHandler.c
* @author    
* @version 
* @date      
* @brief     This file provides common functions for the ButtonHandler.c
*                      
*/

/* ------------------------Includes ----------------------------------*/
#include "ButtonHandler.h"
#include "mainFSM.h"
/* ------------------------External variables -------------------------*/


/* ------------------------Global variables----------------------------*/



/* ------------------------Locale variables----------------------------*/

 uint8_t counterBUT_UP    = 0;
 uint8_t counterBUT_DOWN  = 0;   
 uint8_t counterBUT_START = 0;
 uint8_t counterBUT_STOP  = 0; 
 
 
 uint8_t stateBUT_UP      = GPIO_PIN_SET;
 uint8_t stateBUT_DOWN    = GPIO_PIN_SET;
 uint8_t stateBUT_START   = GPIO_PIN_SET;
 uint8_t stateBUT_STOP    = GPIO_PIN_SET;
 
 
 uint8_t flagBUT_UP      = OFF;
 uint8_t flagBUT_DOWN    = OFF;
 uint8_t flagBUT_START   = OFF;
 uint8_t flagBUT_STOP    = OFF;
 
 
 uint8_t current_button = BUT_UP;

/* ------------------------Functions-----------------------------------*/


void Handler_BUT_UP(void )
 {
    stateBUT_UP = HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_1);
	 
	   if(stateBUT_UP == GPIO_PIN_RESET && flagBUT_UP == OFF)  // pressed button BUT_UP
			 
		     {
					 counterBUT_UP ++;
					 
					   if(counterBUT_UP >  10)
						 {
							 
							 flagBUT_UP = ON;
						 
							 ChannelNumber++;
							 
							  if(ChannelNumber >= 18)
                      {
										     	ChannelNumber = 18;
											}   
						 
						 }
					 
				 }
	    else if(stateBUT_UP == GPIO_PIN_SET && flagBUT_UP == ON) // relesead button BUT_UP
			 
		     {
					  counterBUT_UP  = 0; 
							
					  flagBUT_UP = OFF;
		     }
 }
 
 
 
 void Handler_BUT_DOWN(void )
 {
     stateBUT_DOWN = HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_2);
	 
	   if(stateBUT_DOWN == GPIO_PIN_RESET && flagBUT_DOWN == OFF)  // pressed button BUT_DOWN
			 
		     {
					 counterBUT_DOWN ++;
					 
					   if(counterBUT_DOWN >  10)   // debunce time 2ms * 4 * 5 = 40ms
						 {
							 
							 flagBUT_DOWN = ON;		
							 			 
                ChannelNumber--;
							 
							  if(ChannelNumber <= 3)
                      {
										     	ChannelNumber = 3;
											}  		 
						 
						 }
					 
				 }
	    else if(stateBUT_DOWN == GPIO_PIN_SET && flagBUT_DOWN == ON) // relesead button BUT_DOWN
			 
		     {
					  counterBUT_DOWN  = 0; 
							
					  flagBUT_DOWN = OFF;
		     }
 }
 
 void Handler_BUT_START(void )
 {
	     stateBUT_START = HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_4);
	 
	   if(stateBUT_START == GPIO_PIN_RESET && flagBUT_START == OFF)  // pressed button BUT_START
			 
		     {
					 counterBUT_START ++;
					 
					   if(counterBUT_START >  5)      // debunce time 2ms * 4 * 5 = 40ms
						 {
							 
							 //action hier 
							 flag_run  = 1;
							 
							 flagBUT_START = ON; 					 	 
						 }
					 
				 }
	    else if(stateBUT_START == GPIO_PIN_SET && flagBUT_START == ON) // relesead button BUT_START
			 
		     {
					  counterBUT_START  = 0; 				
					  flagBUT_START = OFF;
		     }

 }
 
 void Handler_BUT_STOP(void )
 {
	   stateBUT_STOP = HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_5);
	 
	   if(stateBUT_STOP == GPIO_PIN_RESET && flagBUT_STOP== OFF)  // pressed button BUT_STOP
			 
		     {
					 counterBUT_STOP ++;
					 
					   if(counterBUT_STOP >  5)      // debunce time 2ms * 4 * 5 = 40ms
						 {
							 //action hier 
							 
						  	flag_run  = 0;
							 
							 flagBUT_STOP = OFF;	 
               							 
						 }		 
				 }
	    else if(stateBUT_STOP == GPIO_PIN_SET && flagBUT_STOP == ON) // relesead button BUT_STOP
			 
		     {
					  counterBUT_STOP  = 0; 						
					  flagBUT_STOP = OFF;
		     }
 }


void readButtons(void)
{
  switch(current_button)
  {
		case BUT_UP:      //1
			
		Handler_BUT_UP();
      
      current_button = BUT_DOWN;
   break;
/***************************/ 
		case BUT_DOWN:    //2
			
    Handler_BUT_DOWN();
		
      current_button = BUT_START;   
   break;
/***************************/  
		case  BUT_START:   //3
			
		Handler_BUT_START();
    

   current_button = BUT_STOP;
 break;
 /***************************/
		case  BUT_STOP: //4
			
		Handler_BUT_STOP();
  
    current_button = BUT_UP;
 break;


  }  
}