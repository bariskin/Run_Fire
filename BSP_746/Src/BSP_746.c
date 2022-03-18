/**
******************************************************************************
* @file      BSP_746.c
* @author    
* @version 
* @date      
* @brief     This file provides common functions for the BSP_746.c
*                      
*/

/* ------------------------Includes ----------------------------------*/

#include "BSP_746.h"


void set_LED_1(void)
 {
   HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, GPIO_PIN_SET);
 }
 
 
 void reset_LED_1(void)
 {
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, GPIO_PIN_RESET);
 }
 
 void set_LED_2(void)
 {
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_1, GPIO_PIN_SET);
 }
 
 void reset_LED_2(void)
 {
   HAL_GPIO_WritePin(GPIOC, GPIO_PIN_1, GPIO_PIN_RESET);
 }
 
 void set_LED_3(void)
 {
	
	 HAL_GPIO_WritePin(GPIOC, GPIO_PIN_2, GPIO_PIN_SET);
 }
 
 void reset_LED_3(void)
 {
	 HAL_GPIO_WritePin(GPIOC, GPIO_PIN_2, GPIO_PIN_RESET);
 }
 
 void set_LED_4(void)
 { 
   HAL_GPIO_WritePin(GPIOC, GPIO_PIN_3, GPIO_PIN_SET);
 }
 
 void reset_LED_4(void)
 {
	 HAL_GPIO_WritePin(GPIOC, GPIO_PIN_3, GPIO_PIN_RESET);
 }
 
 void set_LED_5(void)
 {
	 HAL_GPIO_WritePin(GPIOC, GPIO_PIN_4, GPIO_PIN_SET);
 }
 
 void reset_LED_5(void)
 {
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_4, GPIO_PIN_RESET);
 }  
 
 
 void set_LED_6(void)
	{
		 HAL_GPIO_WritePin(GPIOC, GPIO_PIN_5, GPIO_PIN_SET);
	}
	
  void reset_LED_6(void)
	{
		 HAL_GPIO_WritePin(GPIOC, GPIO_PIN_5, GPIO_PIN_RESET);	
	}
	
	void set_LED_7(void)
	{
		 HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, GPIO_PIN_SET);
	}
  void reset_LED_7(void)
	{
		HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, GPIO_PIN_RESET);
	}
		
	void set_LED_8(void)
	{
		HAL_GPIO_WritePin(GPIOC, GPIO_PIN_8, GPIO_PIN_SET);
	}
  void reset_LED_8(void)
	{
	  HAL_GPIO_WritePin(GPIOC, GPIO_PIN_8, GPIO_PIN_RESET);
	}

  void set_LED_9(void)
	{
		HAL_GPIO_WritePin(GPIOF, GPIO_PIN_0, GPIO_PIN_SET);
	}
  void reset_LED_9(void)
	{	
		HAL_GPIO_WritePin(GPIOF, GPIO_PIN_0, GPIO_PIN_RESET);
	}
	
	
	void set_LED_10(void)
	{
		HAL_GPIO_WritePin(GPIOF, GPIO_PIN_1, GPIO_PIN_SET);
	}
  void reset_LED_10(void)
	{
		HAL_GPIO_WritePin(GPIOF, GPIO_PIN_1, GPIO_PIN_RESET);
	}
	
	void set_LED_11(void)
	{
		HAL_GPIO_WritePin(GPIOF, GPIO_PIN_2, GPIO_PIN_SET);
	}
  void reset_LED_11(void)
	{
		HAL_GPIO_WritePin(GPIOF, GPIO_PIN_2, GPIO_PIN_RESET);
	}
	
	void set_LED_12(void)
	{
		HAL_GPIO_WritePin(GPIOF, GPIO_PIN_3, GPIO_PIN_SET);
	}
  void reset_LED_12(void)
	{
		HAL_GPIO_WritePin(GPIOF, GPIO_PIN_3, GPIO_PIN_RESET);
	}
		
	void set_LED_13(void)
	{
		HAL_GPIO_WritePin(GPIOF, GPIO_PIN_4, GPIO_PIN_SET);
	}
  void reset_LED_13(void)
	{
		HAL_GPIO_WritePin(GPIOF, GPIO_PIN_4, GPIO_PIN_RESET);
	}
	
	void set_LED_14(void)
	{
		HAL_GPIO_WritePin(GPIOF, GPIO_PIN_5, GPIO_PIN_SET);		
	}
		
  void reset_LED_14(void)
	{
		HAL_GPIO_WritePin(GPIOF, GPIO_PIN_5, GPIO_PIN_RESET);
	}
	
	
	void set_LED_15(void)
	{
		HAL_GPIO_WritePin(GPIOF, GPIO_PIN_6, GPIO_PIN_SET);		
	}
  void reset_LED_15(void)
	{
		
		HAL_GPIO_WritePin(GPIOF, GPIO_PIN_6, GPIO_PIN_RESET);		
	}
	
	void set_LED_16(void)
	{
		 HAL_GPIO_WritePin(GPIOF, GPIO_PIN_7, GPIO_PIN_SET);		
	}
		
  void reset_LED_16(void)
	{
		HAL_GPIO_WritePin(GPIOF, GPIO_PIN_7, GPIO_PIN_RESET);		
	}
	
	
	void set_LED_17(void)
	{
			
		 HAL_GPIO_WritePin(GPIOF, GPIO_PIN_8, GPIO_PIN_SET);	
		
	}
  void reset_LED_17(void)
	{
		HAL_GPIO_WritePin(GPIOF, GPIO_PIN_8, GPIO_PIN_RESET);	
		
	}
		

	void set_LED_18(void)
	{
		 HAL_GPIO_WritePin(GPIOF, GPIO_PIN_9, GPIO_PIN_SET);		
	}
	
	
  void reset_LED_18(void)
	{
		HAL_GPIO_WritePin(GPIOF, GPIO_PIN_9, GPIO_PIN_RESET);			
	}
 
 