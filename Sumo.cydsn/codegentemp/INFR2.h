/*******************************************************************************
* File Name: INFR2.h
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
#if !defined(CY_ISR_INFR2_H)
#define CY_ISR_INFR2_H


#include <cytypes.h>
#include <cyfitter.h>

/* Interrupt Controller API. */
void INFR2_Start(void);
void INFR2_StartEx(cyisraddress address);
void INFR2_Stop(void);

CY_ISR_PROTO(INFR2_Interrupt);

void INFR2_SetVector(cyisraddress address);
cyisraddress INFR2_GetVector(void);

void INFR2_SetPriority(uint8 priority);
uint8 INFR2_GetPriority(void);

void INFR2_Enable(void);
uint8 INFR2_GetState(void);
void INFR2_Disable(void);

void INFR2_SetPending(void);
void INFR2_ClearPending(void);


/* Interrupt Controller Constants */

/* Address of the INTC.VECT[x] register that contains the Address of the INFR2 ISR. */
#define INFR2_INTC_VECTOR            ((reg32 *) INFR2__INTC_VECT)

/* Address of the INFR2 ISR priority. */
#define INFR2_INTC_PRIOR             ((reg8 *) INFR2__INTC_PRIOR_REG)

/* Priority of the INFR2 interrupt. */
#define INFR2_INTC_PRIOR_NUMBER      INFR2__INTC_PRIOR_NUM

/* Address of the INTC.SET_EN[x] byte to bit enable INFR2 interrupt. */
#define INFR2_INTC_SET_EN            ((reg32 *) INFR2__INTC_SET_EN_REG)

/* Address of the INTC.CLR_EN[x] register to bit clear the INFR2 interrupt. */
#define INFR2_INTC_CLR_EN            ((reg32 *) INFR2__INTC_CLR_EN_REG)

/* Address of the INTC.SET_PD[x] register to set the INFR2 interrupt state to pending. */
#define INFR2_INTC_SET_PD            ((reg32 *) INFR2__INTC_SET_PD_REG)

/* Address of the INTC.CLR_PD[x] register to clear the INFR2 interrupt. */
#define INFR2_INTC_CLR_PD            ((reg32 *) INFR2__INTC_CLR_PD_REG)


#endif /* CY_ISR_INFR2_H */


/* [] END OF FILE */
