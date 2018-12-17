/*******************************************************************************
* File Name: Sensor.h
* Version 1.70
*
*  Description:
*   Provides the function definitions for the Interrupt Controller.
*
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/
#if !defined(CY_ISR_Sensor_H)
#define CY_ISR_Sensor_H


#include <cytypes.h>
#include <cyfitter.h>

/* Interrupt Controller API. */
void Sensor_Start(void);
void Sensor_StartEx(cyisraddress address);
void Sensor_Stop(void);

CY_ISR_PROTO(Sensor_Interrupt);

void Sensor_SetVector(cyisraddress address);
cyisraddress Sensor_GetVector(void);

void Sensor_SetPriority(uint8 priority);
uint8 Sensor_GetPriority(void);

void Sensor_Enable(void);
uint8 Sensor_GetState(void);
void Sensor_Disable(void);

void Sensor_SetPending(void);
void Sensor_ClearPending(void);


/* Interrupt Controller Constants */

/* Address of the INTC.VECT[x] register that contains the Address of the Sensor ISR. */
#define Sensor_INTC_VECTOR            ((reg32 *) Sensor__INTC_VECT)

/* Address of the Sensor ISR priority. */
#define Sensor_INTC_PRIOR             ((reg8 *) Sensor__INTC_PRIOR_REG)

/* Priority of the Sensor interrupt. */
#define Sensor_INTC_PRIOR_NUMBER      Sensor__INTC_PRIOR_NUM

/* Address of the INTC.SET_EN[x] byte to bit enable Sensor interrupt. */
#define Sensor_INTC_SET_EN            ((reg32 *) Sensor__INTC_SET_EN_REG)

/* Address of the INTC.CLR_EN[x] register to bit clear the Sensor interrupt. */
#define Sensor_INTC_CLR_EN            ((reg32 *) Sensor__INTC_CLR_EN_REG)

/* Address of the INTC.SET_PD[x] register to set the Sensor interrupt state to pending. */
#define Sensor_INTC_SET_PD            ((reg32 *) Sensor__INTC_SET_PD_REG)

/* Address of the INTC.CLR_PD[x] register to clear the Sensor interrupt. */
#define Sensor_INTC_CLR_PD            ((reg32 *) Sensor__INTC_CLR_PD_REG)


#endif /* CY_ISR_Sensor_H */


/* [] END OF FILE */
