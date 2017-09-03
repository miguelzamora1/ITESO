/****************************************************************************************************/
/**
\file       led_ctrl.h
\brief      MCU abstraction level - LED control
\author     Abraham Tezmol
\version    1.0
\project    Tau 
\date       24/June/2016
*/
/****************************************************************************************************/

#ifndef __LED_CTRL_H        /*prevent duplicated includes*/
#define __LED_CTRL_H

/*****************************************************************************************************
* Include files
*****************************************************************************************************/

/** Core modules */
#include "compiler.h"

/** Used modules */

/*****************************************************************************************************
* Declaration of module wide TYPEs 
*****************************************************************************************************/

/*****************************************************************************************************
* Definition of module wide MACROs / #DEFINE-CONSTANTs 
*****************************************************************************************************/


/*****************************************************************************************************
* Declaration of module wide FUNCTIONS
*****************************************************************************************************/

/** Turns LED 0 Off of SAMV71 board */
void vfnLedCtrl_Led1Off( void );

/** Configures LED 0 and 1 of SAMV71 board */
void vfnLedCtrl_Configure( void );

/** Turn a combination of 2 LEDs with a unique blinking pattern */
void vfnLedCtrl_BlinkingPattern(void);


/**************************************************************************************************/

#endif /* __LED_CTRL_H */