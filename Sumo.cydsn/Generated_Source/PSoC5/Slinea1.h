/*******************************************************************************
* File Name: Slinea1.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_Slinea1_H) /* Pins Slinea1_H */
#define CY_PINS_Slinea1_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Slinea1_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Slinea1__PORT == 15 && ((Slinea1__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Slinea1_Write(uint8 value);
void    Slinea1_SetDriveMode(uint8 mode);
uint8   Slinea1_ReadDataReg(void);
uint8   Slinea1_Read(void);
void    Slinea1_SetInterruptMode(uint16 position, uint16 mode);
uint8   Slinea1_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Slinea1_SetDriveMode() function.
     *  @{
     */
        #define Slinea1_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Slinea1_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Slinea1_DM_RES_UP          PIN_DM_RES_UP
        #define Slinea1_DM_RES_DWN         PIN_DM_RES_DWN
        #define Slinea1_DM_OD_LO           PIN_DM_OD_LO
        #define Slinea1_DM_OD_HI           PIN_DM_OD_HI
        #define Slinea1_DM_STRONG          PIN_DM_STRONG
        #define Slinea1_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Slinea1_MASK               Slinea1__MASK
#define Slinea1_SHIFT              Slinea1__SHIFT
#define Slinea1_WIDTH              1u

/* Interrupt constants */
#if defined(Slinea1__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Slinea1_SetInterruptMode() function.
     *  @{
     */
        #define Slinea1_INTR_NONE      (uint16)(0x0000u)
        #define Slinea1_INTR_RISING    (uint16)(0x0001u)
        #define Slinea1_INTR_FALLING   (uint16)(0x0002u)
        #define Slinea1_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Slinea1_INTR_MASK      (0x01u) 
#endif /* (Slinea1__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Slinea1_PS                     (* (reg8 *) Slinea1__PS)
/* Data Register */
#define Slinea1_DR                     (* (reg8 *) Slinea1__DR)
/* Port Number */
#define Slinea1_PRT_NUM                (* (reg8 *) Slinea1__PRT) 
/* Connect to Analog Globals */                                                  
#define Slinea1_AG                     (* (reg8 *) Slinea1__AG)                       
/* Analog MUX bux enable */
#define Slinea1_AMUX                   (* (reg8 *) Slinea1__AMUX) 
/* Bidirectional Enable */                                                        
#define Slinea1_BIE                    (* (reg8 *) Slinea1__BIE)
/* Bit-mask for Aliased Register Access */
#define Slinea1_BIT_MASK               (* (reg8 *) Slinea1__BIT_MASK)
/* Bypass Enable */
#define Slinea1_BYP                    (* (reg8 *) Slinea1__BYP)
/* Port wide control signals */                                                   
#define Slinea1_CTL                    (* (reg8 *) Slinea1__CTL)
/* Drive Modes */
#define Slinea1_DM0                    (* (reg8 *) Slinea1__DM0) 
#define Slinea1_DM1                    (* (reg8 *) Slinea1__DM1)
#define Slinea1_DM2                    (* (reg8 *) Slinea1__DM2) 
/* Input Buffer Disable Override */
#define Slinea1_INP_DIS                (* (reg8 *) Slinea1__INP_DIS)
/* LCD Common or Segment Drive */
#define Slinea1_LCD_COM_SEG            (* (reg8 *) Slinea1__LCD_COM_SEG)
/* Enable Segment LCD */
#define Slinea1_LCD_EN                 (* (reg8 *) Slinea1__LCD_EN)
/* Slew Rate Control */
#define Slinea1_SLW                    (* (reg8 *) Slinea1__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Slinea1_PRTDSI__CAPS_SEL       (* (reg8 *) Slinea1__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Slinea1_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Slinea1__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Slinea1_PRTDSI__OE_SEL0        (* (reg8 *) Slinea1__PRTDSI__OE_SEL0) 
#define Slinea1_PRTDSI__OE_SEL1        (* (reg8 *) Slinea1__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Slinea1_PRTDSI__OUT_SEL0       (* (reg8 *) Slinea1__PRTDSI__OUT_SEL0) 
#define Slinea1_PRTDSI__OUT_SEL1       (* (reg8 *) Slinea1__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Slinea1_PRTDSI__SYNC_OUT       (* (reg8 *) Slinea1__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Slinea1__SIO_CFG)
    #define Slinea1_SIO_HYST_EN        (* (reg8 *) Slinea1__SIO_HYST_EN)
    #define Slinea1_SIO_REG_HIFREQ     (* (reg8 *) Slinea1__SIO_REG_HIFREQ)
    #define Slinea1_SIO_CFG            (* (reg8 *) Slinea1__SIO_CFG)
    #define Slinea1_SIO_DIFF           (* (reg8 *) Slinea1__SIO_DIFF)
#endif /* (Slinea1__SIO_CFG) */

/* Interrupt Registers */
#if defined(Slinea1__INTSTAT)
    #define Slinea1_INTSTAT            (* (reg8 *) Slinea1__INTSTAT)
    #define Slinea1_SNAP               (* (reg8 *) Slinea1__SNAP)
    
	#define Slinea1_0_INTTYPE_REG 		(* (reg8 *) Slinea1__0__INTTYPE)
#endif /* (Slinea1__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Slinea1_H */


/* [] END OF FILE */
