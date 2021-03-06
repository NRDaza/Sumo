;
; File Name: cyfitteriar.inc
; 
; PSoC Creator  4.2
;
; Description:
; 
;
;-------------------------------------------------------------------------------
; Copyright (c) 2007-2018 Cypress Semiconductor.  All rights reserved.
; You may use this file only in accordance with the license, terms, conditions, 
; disclaimers, and limitations in the end user license agreement accompanying 
; the software package with which this file was provided.
;-------------------------------------------------------------------------------

#ifndef INCLUDED_CYFITTERIAR_INC
#define INCLUDED_CYFITTERIAR_INC
    INCLUDE cydeviceiar.inc
    INCLUDE cydeviceiar_trm.inc

/* A1 */
A1__0__INTTYPE EQU CYREG_PICU2_INTTYPE0
A1__0__MASK EQU 0x01
A1__0__PC EQU CYREG_PRT2_PC0
A1__0__PORT EQU 2
A1__0__SHIFT EQU 0
A1__AG EQU CYREG_PRT2_AG
A1__AMUX EQU CYREG_PRT2_AMUX
A1__BIE EQU CYREG_PRT2_BIE
A1__BIT_MASK EQU CYREG_PRT2_BIT_MASK
A1__BYP EQU CYREG_PRT2_BYP
A1__CTL EQU CYREG_PRT2_CTL
A1__DM0 EQU CYREG_PRT2_DM0
A1__DM1 EQU CYREG_PRT2_DM1
A1__DM2 EQU CYREG_PRT2_DM2
A1__DR EQU CYREG_PRT2_DR
A1__INP_DIS EQU CYREG_PRT2_INP_DIS
A1__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU2_BASE
A1__LCD_COM_SEG EQU CYREG_PRT2_LCD_COM_SEG
A1__LCD_EN EQU CYREG_PRT2_LCD_EN
A1__MASK EQU 0x01
A1__PORT EQU 2
A1__PRT EQU CYREG_PRT2_PRT
A1__PRTDSI__CAPS_SEL EQU CYREG_PRT2_CAPS_SEL
A1__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT2_DBL_SYNC_IN
A1__PRTDSI__OE_SEL0 EQU CYREG_PRT2_OE_SEL0
A1__PRTDSI__OE_SEL1 EQU CYREG_PRT2_OE_SEL1
A1__PRTDSI__OUT_SEL0 EQU CYREG_PRT2_OUT_SEL0
A1__PRTDSI__OUT_SEL1 EQU CYREG_PRT2_OUT_SEL1
A1__PRTDSI__SYNC_OUT EQU CYREG_PRT2_SYNC_OUT
A1__PS EQU CYREG_PRT2_PS
A1__SHIFT EQU 0
A1__SLW EQU CYREG_PRT2_SLW

/* A2 */
A2__0__INTTYPE EQU CYREG_PICU2_INTTYPE1
A2__0__MASK EQU 0x02
A2__0__PC EQU CYREG_PRT2_PC1
A2__0__PORT EQU 2
A2__0__SHIFT EQU 1
A2__AG EQU CYREG_PRT2_AG
A2__AMUX EQU CYREG_PRT2_AMUX
A2__BIE EQU CYREG_PRT2_BIE
A2__BIT_MASK EQU CYREG_PRT2_BIT_MASK
A2__BYP EQU CYREG_PRT2_BYP
A2__CTL EQU CYREG_PRT2_CTL
A2__DM0 EQU CYREG_PRT2_DM0
A2__DM1 EQU CYREG_PRT2_DM1
A2__DM2 EQU CYREG_PRT2_DM2
A2__DR EQU CYREG_PRT2_DR
A2__INP_DIS EQU CYREG_PRT2_INP_DIS
A2__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU2_BASE
A2__LCD_COM_SEG EQU CYREG_PRT2_LCD_COM_SEG
A2__LCD_EN EQU CYREG_PRT2_LCD_EN
A2__MASK EQU 0x02
A2__PORT EQU 2
A2__PRT EQU CYREG_PRT2_PRT
A2__PRTDSI__CAPS_SEL EQU CYREG_PRT2_CAPS_SEL
A2__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT2_DBL_SYNC_IN
A2__PRTDSI__OE_SEL0 EQU CYREG_PRT2_OE_SEL0
A2__PRTDSI__OE_SEL1 EQU CYREG_PRT2_OE_SEL1
A2__PRTDSI__OUT_SEL0 EQU CYREG_PRT2_OUT_SEL0
A2__PRTDSI__OUT_SEL1 EQU CYREG_PRT2_OUT_SEL1
A2__PRTDSI__SYNC_OUT EQU CYREG_PRT2_SYNC_OUT
A2__PS EQU CYREG_PRT2_PS
A2__SHIFT EQU 1
A2__SLW EQU CYREG_PRT2_SLW

/* B1 */
B1__0__INTTYPE EQU CYREG_PICU2_INTTYPE3
B1__0__MASK EQU 0x08
B1__0__PC EQU CYREG_PRT2_PC3
B1__0__PORT EQU 2
B1__0__SHIFT EQU 3
B1__AG EQU CYREG_PRT2_AG
B1__AMUX EQU CYREG_PRT2_AMUX
B1__BIE EQU CYREG_PRT2_BIE
B1__BIT_MASK EQU CYREG_PRT2_BIT_MASK
B1__BYP EQU CYREG_PRT2_BYP
B1__CTL EQU CYREG_PRT2_CTL
B1__DM0 EQU CYREG_PRT2_DM0
B1__DM1 EQU CYREG_PRT2_DM1
B1__DM2 EQU CYREG_PRT2_DM2
B1__DR EQU CYREG_PRT2_DR
B1__INP_DIS EQU CYREG_PRT2_INP_DIS
B1__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU2_BASE
B1__LCD_COM_SEG EQU CYREG_PRT2_LCD_COM_SEG
B1__LCD_EN EQU CYREG_PRT2_LCD_EN
B1__MASK EQU 0x08
B1__PORT EQU 2
B1__PRT EQU CYREG_PRT2_PRT
B1__PRTDSI__CAPS_SEL EQU CYREG_PRT2_CAPS_SEL
B1__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT2_DBL_SYNC_IN
B1__PRTDSI__OE_SEL0 EQU CYREG_PRT2_OE_SEL0
B1__PRTDSI__OE_SEL1 EQU CYREG_PRT2_OE_SEL1
B1__PRTDSI__OUT_SEL0 EQU CYREG_PRT2_OUT_SEL0
B1__PRTDSI__OUT_SEL1 EQU CYREG_PRT2_OUT_SEL1
B1__PRTDSI__SYNC_OUT EQU CYREG_PRT2_SYNC_OUT
B1__PS EQU CYREG_PRT2_PS
B1__SHIFT EQU 3
B1__SLW EQU CYREG_PRT2_SLW

/* B2 */
B2__0__INTTYPE EQU CYREG_PICU2_INTTYPE4
B2__0__MASK EQU 0x10
B2__0__PC EQU CYREG_PRT2_PC4
B2__0__PORT EQU 2
B2__0__SHIFT EQU 4
B2__AG EQU CYREG_PRT2_AG
B2__AMUX EQU CYREG_PRT2_AMUX
B2__BIE EQU CYREG_PRT2_BIE
B2__BIT_MASK EQU CYREG_PRT2_BIT_MASK
B2__BYP EQU CYREG_PRT2_BYP
B2__CTL EQU CYREG_PRT2_CTL
B2__DM0 EQU CYREG_PRT2_DM0
B2__DM1 EQU CYREG_PRT2_DM1
B2__DM2 EQU CYREG_PRT2_DM2
B2__DR EQU CYREG_PRT2_DR
B2__INP_DIS EQU CYREG_PRT2_INP_DIS
B2__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU2_BASE
B2__LCD_COM_SEG EQU CYREG_PRT2_LCD_COM_SEG
B2__LCD_EN EQU CYREG_PRT2_LCD_EN
B2__MASK EQU 0x10
B2__PORT EQU 2
B2__PRT EQU CYREG_PRT2_PRT
B2__PRTDSI__CAPS_SEL EQU CYREG_PRT2_CAPS_SEL
B2__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT2_DBL_SYNC_IN
B2__PRTDSI__OE_SEL0 EQU CYREG_PRT2_OE_SEL0
B2__PRTDSI__OE_SEL1 EQU CYREG_PRT2_OE_SEL1
B2__PRTDSI__OUT_SEL0 EQU CYREG_PRT2_OUT_SEL0
B2__PRTDSI__OUT_SEL1 EQU CYREG_PRT2_OUT_SEL1
B2__PRTDSI__SYNC_OUT EQU CYREG_PRT2_SYNC_OUT
B2__PS EQU CYREG_PRT2_PS
B2__SHIFT EQU 4
B2__SLW EQU CYREG_PRT2_SLW

/* S1 */
S1__0__INTTYPE EQU CYREG_PICU0_INTTYPE7
S1__0__MASK EQU 0x80
S1__0__PC EQU CYREG_PRT0_PC7
S1__0__PORT EQU 0
S1__0__SHIFT EQU 7
S1__AG EQU CYREG_PRT0_AG
S1__AMUX EQU CYREG_PRT0_AMUX
S1__BIE EQU CYREG_PRT0_BIE
S1__BIT_MASK EQU CYREG_PRT0_BIT_MASK
S1__BYP EQU CYREG_PRT0_BYP
S1__CTL EQU CYREG_PRT0_CTL
S1__DM0 EQU CYREG_PRT0_DM0
S1__DM1 EQU CYREG_PRT0_DM1
S1__DM2 EQU CYREG_PRT0_DM2
S1__DR EQU CYREG_PRT0_DR
S1__INP_DIS EQU CYREG_PRT0_INP_DIS
S1__INTSTAT EQU CYREG_PICU0_INTSTAT
S1__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU0_BASE
S1__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
S1__LCD_EN EQU CYREG_PRT0_LCD_EN
S1__MASK EQU 0x80
S1__PORT EQU 0
S1__PRT EQU CYREG_PRT0_PRT
S1__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
S1__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
S1__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
S1__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
S1__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
S1__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
S1__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
S1__PS EQU CYREG_PRT0_PS
S1__SHIFT EQU 7
S1__SLW EQU CYREG_PRT0_SLW
S1__SNAP EQU CYREG_PICU0_SNAP

/* S2 */
S2__0__INTTYPE EQU CYREG_PICU0_INTTYPE6
S2__0__MASK EQU 0x40
S2__0__PC EQU CYREG_PRT0_PC6
S2__0__PORT EQU 0
S2__0__SHIFT EQU 6
S2__AG EQU CYREG_PRT0_AG
S2__AMUX EQU CYREG_PRT0_AMUX
S2__BIE EQU CYREG_PRT0_BIE
S2__BIT_MASK EQU CYREG_PRT0_BIT_MASK
S2__BYP EQU CYREG_PRT0_BYP
S2__CTL EQU CYREG_PRT0_CTL
S2__DM0 EQU CYREG_PRT0_DM0
S2__DM1 EQU CYREG_PRT0_DM1
S2__DM2 EQU CYREG_PRT0_DM2
S2__DR EQU CYREG_PRT0_DR
S2__INP_DIS EQU CYREG_PRT0_INP_DIS
S2__INTSTAT EQU CYREG_PICU0_INTSTAT
S2__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU0_BASE
S2__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
S2__LCD_EN EQU CYREG_PRT0_LCD_EN
S2__MASK EQU 0x40
S2__PORT EQU 0
S2__PRT EQU CYREG_PRT0_PRT
S2__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
S2__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
S2__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
S2__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
S2__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
S2__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
S2__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
S2__PS EQU CYREG_PRT0_PS
S2__SHIFT EQU 6
S2__SLW EQU CYREG_PRT0_SLW
S2__SNAP EQU CYREG_PICU0_SNAP

/* LED */
LED__0__INTTYPE EQU CYREG_PICU0_INTTYPE1
LED__0__MASK EQU 0x02
LED__0__PC EQU CYREG_PRT0_PC1
LED__0__PORT EQU 0
LED__0__SHIFT EQU 1
LED__AG EQU CYREG_PRT0_AG
LED__AMUX EQU CYREG_PRT0_AMUX
LED__BIE EQU CYREG_PRT0_BIE
LED__BIT_MASK EQU CYREG_PRT0_BIT_MASK
LED__BYP EQU CYREG_PRT0_BYP
LED__CTL EQU CYREG_PRT0_CTL
LED__DM0 EQU CYREG_PRT0_DM0
LED__DM1 EQU CYREG_PRT0_DM1
LED__DM2 EQU CYREG_PRT0_DM2
LED__DR EQU CYREG_PRT0_DR
LED__INP_DIS EQU CYREG_PRT0_INP_DIS
LED__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU0_BASE
LED__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
LED__LCD_EN EQU CYREG_PRT0_LCD_EN
LED__MASK EQU 0x02
LED__PORT EQU 0
LED__PRT EQU CYREG_PRT0_PRT
LED__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
LED__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
LED__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
LED__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
LED__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
LED__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
LED__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
LED__PS EQU CYREG_PRT0_PS
LED__SHIFT EQU 1
LED__SLW EQU CYREG_PRT0_SLW

/* Ekko */
Ekko__0__INTTYPE EQU CYREG_PICU2_INTTYPE5
Ekko__0__MASK EQU 0x20
Ekko__0__PC EQU CYREG_PRT2_PC5
Ekko__0__PORT EQU 2
Ekko__0__SHIFT EQU 5
Ekko__AG EQU CYREG_PRT2_AG
Ekko__AMUX EQU CYREG_PRT2_AMUX
Ekko__BIE EQU CYREG_PRT2_BIE
Ekko__BIT_MASK EQU CYREG_PRT2_BIT_MASK
Ekko__BYP EQU CYREG_PRT2_BYP
Ekko__CTL EQU CYREG_PRT2_CTL
Ekko__DM0 EQU CYREG_PRT2_DM0
Ekko__DM1 EQU CYREG_PRT2_DM1
Ekko__DM2 EQU CYREG_PRT2_DM2
Ekko__DR EQU CYREG_PRT2_DR
Ekko__INP_DIS EQU CYREG_PRT2_INP_DIS
Ekko__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU2_BASE
Ekko__LCD_COM_SEG EQU CYREG_PRT2_LCD_COM_SEG
Ekko__LCD_EN EQU CYREG_PRT2_LCD_EN
Ekko__MASK EQU 0x20
Ekko__PORT EQU 2
Ekko__PRT EQU CYREG_PRT2_PRT
Ekko__PRTDSI__CAPS_SEL EQU CYREG_PRT2_CAPS_SEL
Ekko__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT2_DBL_SYNC_IN
Ekko__PRTDSI__OE_SEL0 EQU CYREG_PRT2_OE_SEL0
Ekko__PRTDSI__OE_SEL1 EQU CYREG_PRT2_OE_SEL1
Ekko__PRTDSI__OUT_SEL0 EQU CYREG_PRT2_OUT_SEL0
Ekko__PRTDSI__OUT_SEL1 EQU CYREG_PRT2_OUT_SEL1
Ekko__PRTDSI__SYNC_OUT EQU CYREG_PRT2_SYNC_OUT
Ekko__PS EQU CYREG_PRT2_PS
Ekko__SHIFT EQU 5
Ekko__SLW EQU CYREG_PRT2_SLW

/* LED1 */
LED1__0__INTTYPE EQU CYREG_PICU1_INTTYPE2
LED1__0__MASK EQU 0x04
LED1__0__PC EQU CYREG_PRT1_PC2
LED1__0__PORT EQU 1
LED1__0__SHIFT EQU 2
LED1__AG EQU CYREG_PRT1_AG
LED1__AMUX EQU CYREG_PRT1_AMUX
LED1__BIE EQU CYREG_PRT1_BIE
LED1__BIT_MASK EQU CYREG_PRT1_BIT_MASK
LED1__BYP EQU CYREG_PRT1_BYP
LED1__CTL EQU CYREG_PRT1_CTL
LED1__DM0 EQU CYREG_PRT1_DM0
LED1__DM1 EQU CYREG_PRT1_DM1
LED1__DM2 EQU CYREG_PRT1_DM2
LED1__DR EQU CYREG_PRT1_DR
LED1__INP_DIS EQU CYREG_PRT1_INP_DIS
LED1__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU1_BASE
LED1__LCD_COM_SEG EQU CYREG_PRT1_LCD_COM_SEG
LED1__LCD_EN EQU CYREG_PRT1_LCD_EN
LED1__MASK EQU 0x04
LED1__PORT EQU 1
LED1__PRT EQU CYREG_PRT1_PRT
LED1__PRTDSI__CAPS_SEL EQU CYREG_PRT1_CAPS_SEL
LED1__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT1_DBL_SYNC_IN
LED1__PRTDSI__OE_SEL0 EQU CYREG_PRT1_OE_SEL0
LED1__PRTDSI__OE_SEL1 EQU CYREG_PRT1_OE_SEL1
LED1__PRTDSI__OUT_SEL0 EQU CYREG_PRT1_OUT_SEL0
LED1__PRTDSI__OUT_SEL1 EQU CYREG_PRT1_OUT_SEL1
LED1__PRTDSI__SYNC_OUT EQU CYREG_PRT1_SYNC_OUT
LED1__PS EQU CYREG_PRT1_PS
LED1__SHIFT EQU 2
LED1__SLW EQU CYREG_PRT1_SLW

/* LED2 */
LED2__0__INTTYPE EQU CYREG_PICU12_INTTYPE0
LED2__0__MASK EQU 0x01
LED2__0__PC EQU CYREG_PRT12_PC0
LED2__0__PORT EQU 12
LED2__0__SHIFT EQU 0
LED2__AG EQU CYREG_PRT12_AG
LED2__BIE EQU CYREG_PRT12_BIE
LED2__BIT_MASK EQU CYREG_PRT12_BIT_MASK
LED2__BYP EQU CYREG_PRT12_BYP
LED2__DM0 EQU CYREG_PRT12_DM0
LED2__DM1 EQU CYREG_PRT12_DM1
LED2__DM2 EQU CYREG_PRT12_DM2
LED2__DR EQU CYREG_PRT12_DR
LED2__INP_DIS EQU CYREG_PRT12_INP_DIS
LED2__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU12_BASE
LED2__MASK EQU 0x01
LED2__PORT EQU 12
LED2__PRT EQU CYREG_PRT12_PRT
LED2__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT12_DBL_SYNC_IN
LED2__PRTDSI__OE_SEL0 EQU CYREG_PRT12_OE_SEL0
LED2__PRTDSI__OE_SEL1 EQU CYREG_PRT12_OE_SEL1
LED2__PRTDSI__OUT_SEL0 EQU CYREG_PRT12_OUT_SEL0
LED2__PRTDSI__OUT_SEL1 EQU CYREG_PRT12_OUT_SEL1
LED2__PRTDSI__SYNC_OUT EQU CYREG_PRT12_SYNC_OUT
LED2__PS EQU CYREG_PRT12_PS
LED2__SHIFT EQU 0
LED2__SIO_CFG EQU CYREG_PRT12_SIO_CFG
LED2__SIO_DIFF EQU CYREG_PRT12_SIO_DIFF
LED2__SIO_HYST_EN EQU CYREG_PRT12_SIO_HYST_EN
LED2__SIO_REG_HIFREQ EQU CYREG_PRT12_SIO_REG_HIFREQ
LED2__SLW EQU CYREG_PRT12_SLW

/* PWM1 */
PWM1_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_AUX_CTL_REG EQU CYREG_B0_UDB13_14_ACTL
PWM1_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_CONTROL_REG EQU CYREG_B0_UDB13_14_CTL
PWM1_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_COUNT_REG EQU CYREG_B0_UDB13_14_CTL
PWM1_PWMUDB_genblk1_ctrlreg__16BIT_COUNT_CONTROL_REG EQU CYREG_B0_UDB13_14_CTL
PWM1_PWMUDB_genblk1_ctrlreg__16BIT_COUNT_COUNT_REG EQU CYREG_B0_UDB13_14_CTL
PWM1_PWMUDB_genblk1_ctrlreg__16BIT_MASK_MASK_REG EQU CYREG_B0_UDB13_14_MSK
PWM1_PWMUDB_genblk1_ctrlreg__16BIT_MASK_PERIOD_REG EQU CYREG_B0_UDB13_14_MSK
PWM1_PWMUDB_genblk1_ctrlreg__16BIT_PERIOD_MASK_REG EQU CYREG_B0_UDB13_14_MSK
PWM1_PWMUDB_genblk1_ctrlreg__16BIT_PERIOD_PERIOD_REG EQU CYREG_B0_UDB13_14_MSK
PWM1_PWMUDB_genblk1_ctrlreg__7__MASK EQU 0x80
PWM1_PWMUDB_genblk1_ctrlreg__7__POS EQU 7
PWM1_PWMUDB_genblk1_ctrlreg__CONTROL_AUX_CTL_REG EQU CYREG_B0_UDB13_ACTL
PWM1_PWMUDB_genblk1_ctrlreg__CONTROL_REG EQU CYREG_B0_UDB13_CTL
PWM1_PWMUDB_genblk1_ctrlreg__CONTROL_ST_REG EQU CYREG_B0_UDB13_ST_CTL
PWM1_PWMUDB_genblk1_ctrlreg__COUNT_REG EQU CYREG_B0_UDB13_CTL
PWM1_PWMUDB_genblk1_ctrlreg__COUNT_ST_REG EQU CYREG_B0_UDB13_ST_CTL
PWM1_PWMUDB_genblk1_ctrlreg__MASK EQU 0x80
PWM1_PWMUDB_genblk1_ctrlreg__MASK_CTL_AUX_CTL_REG EQU CYREG_B0_UDB13_MSK_ACTL
PWM1_PWMUDB_genblk1_ctrlreg__PER_CTL_AUX_CTL_REG EQU CYREG_B0_UDB13_MSK_ACTL
PWM1_PWMUDB_genblk1_ctrlreg__PERIOD_REG EQU CYREG_B0_UDB13_MSK
PWM1_PWMUDB_genblk8_stsreg__0__MASK EQU 0x01
PWM1_PWMUDB_genblk8_stsreg__0__POS EQU 0
PWM1_PWMUDB_genblk8_stsreg__1__MASK EQU 0x02
PWM1_PWMUDB_genblk8_stsreg__1__POS EQU 1
PWM1_PWMUDB_genblk8_stsreg__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B0_UDB13_14_ACTL
PWM1_PWMUDB_genblk8_stsreg__16BIT_STATUS_REG EQU CYREG_B0_UDB13_14_ST
PWM1_PWMUDB_genblk8_stsreg__2__MASK EQU 0x04
PWM1_PWMUDB_genblk8_stsreg__2__POS EQU 2
PWM1_PWMUDB_genblk8_stsreg__3__MASK EQU 0x08
PWM1_PWMUDB_genblk8_stsreg__3__POS EQU 3
PWM1_PWMUDB_genblk8_stsreg__MASK EQU 0x0F
PWM1_PWMUDB_genblk8_stsreg__MASK_REG EQU CYREG_B0_UDB13_MSK
PWM1_PWMUDB_genblk8_stsreg__MASK_ST_AUX_CTL_REG EQU CYREG_B0_UDB13_MSK_ACTL
PWM1_PWMUDB_genblk8_stsreg__PER_ST_AUX_CTL_REG EQU CYREG_B0_UDB13_MSK_ACTL
PWM1_PWMUDB_genblk8_stsreg__STATUS_AUX_CTL_REG EQU CYREG_B0_UDB13_ACTL
PWM1_PWMUDB_genblk8_stsreg__STATUS_CNT_REG EQU CYREG_B0_UDB13_ST_CTL
PWM1_PWMUDB_genblk8_stsreg__STATUS_CONTROL_REG EQU CYREG_B0_UDB13_ST_CTL
PWM1_PWMUDB_genblk8_stsreg__STATUS_REG EQU CYREG_B0_UDB13_ST
PWM1_PWMUDB_sP8_pwmdp_u0__16BIT_A0_REG EQU CYREG_B0_UDB13_14_A0
PWM1_PWMUDB_sP8_pwmdp_u0__16BIT_A1_REG EQU CYREG_B0_UDB13_14_A1
PWM1_PWMUDB_sP8_pwmdp_u0__16BIT_D0_REG EQU CYREG_B0_UDB13_14_D0
PWM1_PWMUDB_sP8_pwmdp_u0__16BIT_D1_REG EQU CYREG_B0_UDB13_14_D1
PWM1_PWMUDB_sP8_pwmdp_u0__16BIT_DP_AUX_CTL_REG EQU CYREG_B0_UDB13_14_ACTL
PWM1_PWMUDB_sP8_pwmdp_u0__16BIT_F0_REG EQU CYREG_B0_UDB13_14_F0
PWM1_PWMUDB_sP8_pwmdp_u0__16BIT_F1_REG EQU CYREG_B0_UDB13_14_F1
PWM1_PWMUDB_sP8_pwmdp_u0__A0_A1_REG EQU CYREG_B0_UDB13_A0_A1
PWM1_PWMUDB_sP8_pwmdp_u0__A0_REG EQU CYREG_B0_UDB13_A0
PWM1_PWMUDB_sP8_pwmdp_u0__A1_REG EQU CYREG_B0_UDB13_A1
PWM1_PWMUDB_sP8_pwmdp_u0__D0_D1_REG EQU CYREG_B0_UDB13_D0_D1
PWM1_PWMUDB_sP8_pwmdp_u0__D0_REG EQU CYREG_B0_UDB13_D0
PWM1_PWMUDB_sP8_pwmdp_u0__D1_REG EQU CYREG_B0_UDB13_D1
PWM1_PWMUDB_sP8_pwmdp_u0__DP_AUX_CTL_REG EQU CYREG_B0_UDB13_ACTL
PWM1_PWMUDB_sP8_pwmdp_u0__F0_F1_REG EQU CYREG_B0_UDB13_F0_F1
PWM1_PWMUDB_sP8_pwmdp_u0__F0_REG EQU CYREG_B0_UDB13_F0
PWM1_PWMUDB_sP8_pwmdp_u0__F1_REG EQU CYREG_B0_UDB13_F1
PWM1_PWMUDB_sP8_pwmdp_u0__MSK_DP_AUX_CTL_REG EQU CYREG_B0_UDB13_MSK_ACTL
PWM1_PWMUDB_sP8_pwmdp_u0__PER_DP_AUX_CTL_REG EQU CYREG_B0_UDB13_MSK_ACTL

/* PWM2 */
PWM2_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_AUX_CTL_REG EQU CYREG_B0_UDB14_15_ACTL
PWM2_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_CONTROL_REG EQU CYREG_B0_UDB14_15_CTL
PWM2_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_COUNT_REG EQU CYREG_B0_UDB14_15_CTL
PWM2_PWMUDB_genblk1_ctrlreg__16BIT_COUNT_CONTROL_REG EQU CYREG_B0_UDB14_15_CTL
PWM2_PWMUDB_genblk1_ctrlreg__16BIT_COUNT_COUNT_REG EQU CYREG_B0_UDB14_15_CTL
PWM2_PWMUDB_genblk1_ctrlreg__16BIT_MASK_MASK_REG EQU CYREG_B0_UDB14_15_MSK
PWM2_PWMUDB_genblk1_ctrlreg__16BIT_MASK_PERIOD_REG EQU CYREG_B0_UDB14_15_MSK
PWM2_PWMUDB_genblk1_ctrlreg__16BIT_PERIOD_MASK_REG EQU CYREG_B0_UDB14_15_MSK
PWM2_PWMUDB_genblk1_ctrlreg__16BIT_PERIOD_PERIOD_REG EQU CYREG_B0_UDB14_15_MSK
PWM2_PWMUDB_genblk1_ctrlreg__7__MASK EQU 0x80
PWM2_PWMUDB_genblk1_ctrlreg__7__POS EQU 7
PWM2_PWMUDB_genblk1_ctrlreg__CONTROL_AUX_CTL_REG EQU CYREG_B0_UDB14_ACTL
PWM2_PWMUDB_genblk1_ctrlreg__CONTROL_REG EQU CYREG_B0_UDB14_CTL
PWM2_PWMUDB_genblk1_ctrlreg__CONTROL_ST_REG EQU CYREG_B0_UDB14_ST_CTL
PWM2_PWMUDB_genblk1_ctrlreg__COUNT_REG EQU CYREG_B0_UDB14_CTL
PWM2_PWMUDB_genblk1_ctrlreg__COUNT_ST_REG EQU CYREG_B0_UDB14_ST_CTL
PWM2_PWMUDB_genblk1_ctrlreg__MASK EQU 0x80
PWM2_PWMUDB_genblk1_ctrlreg__MASK_CTL_AUX_CTL_REG EQU CYREG_B0_UDB14_MSK_ACTL
PWM2_PWMUDB_genblk1_ctrlreg__PER_CTL_AUX_CTL_REG EQU CYREG_B0_UDB14_MSK_ACTL
PWM2_PWMUDB_genblk1_ctrlreg__PERIOD_REG EQU CYREG_B0_UDB14_MSK
PWM2_PWMUDB_genblk8_stsreg__0__MASK EQU 0x01
PWM2_PWMUDB_genblk8_stsreg__0__POS EQU 0
PWM2_PWMUDB_genblk8_stsreg__1__MASK EQU 0x02
PWM2_PWMUDB_genblk8_stsreg__1__POS EQU 1
PWM2_PWMUDB_genblk8_stsreg__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B0_UDB14_15_ACTL
PWM2_PWMUDB_genblk8_stsreg__16BIT_STATUS_REG EQU CYREG_B0_UDB14_15_ST
PWM2_PWMUDB_genblk8_stsreg__2__MASK EQU 0x04
PWM2_PWMUDB_genblk8_stsreg__2__POS EQU 2
PWM2_PWMUDB_genblk8_stsreg__3__MASK EQU 0x08
PWM2_PWMUDB_genblk8_stsreg__3__POS EQU 3
PWM2_PWMUDB_genblk8_stsreg__MASK EQU 0x0F
PWM2_PWMUDB_genblk8_stsreg__MASK_REG EQU CYREG_B0_UDB14_MSK
PWM2_PWMUDB_genblk8_stsreg__MASK_ST_AUX_CTL_REG EQU CYREG_B0_UDB14_MSK_ACTL
PWM2_PWMUDB_genblk8_stsreg__PER_ST_AUX_CTL_REG EQU CYREG_B0_UDB14_MSK_ACTL
PWM2_PWMUDB_genblk8_stsreg__STATUS_AUX_CTL_REG EQU CYREG_B0_UDB14_ACTL
PWM2_PWMUDB_genblk8_stsreg__STATUS_CNT_REG EQU CYREG_B0_UDB14_ST_CTL
PWM2_PWMUDB_genblk8_stsreg__STATUS_CONTROL_REG EQU CYREG_B0_UDB14_ST_CTL
PWM2_PWMUDB_genblk8_stsreg__STATUS_REG EQU CYREG_B0_UDB14_ST
PWM2_PWMUDB_sP8_pwmdp_u0__16BIT_A0_REG EQU CYREG_B0_UDB14_15_A0
PWM2_PWMUDB_sP8_pwmdp_u0__16BIT_A1_REG EQU CYREG_B0_UDB14_15_A1
PWM2_PWMUDB_sP8_pwmdp_u0__16BIT_D0_REG EQU CYREG_B0_UDB14_15_D0
PWM2_PWMUDB_sP8_pwmdp_u0__16BIT_D1_REG EQU CYREG_B0_UDB14_15_D1
PWM2_PWMUDB_sP8_pwmdp_u0__16BIT_DP_AUX_CTL_REG EQU CYREG_B0_UDB14_15_ACTL
PWM2_PWMUDB_sP8_pwmdp_u0__16BIT_F0_REG EQU CYREG_B0_UDB14_15_F0
PWM2_PWMUDB_sP8_pwmdp_u0__16BIT_F1_REG EQU CYREG_B0_UDB14_15_F1
PWM2_PWMUDB_sP8_pwmdp_u0__A0_A1_REG EQU CYREG_B0_UDB14_A0_A1
PWM2_PWMUDB_sP8_pwmdp_u0__A0_REG EQU CYREG_B0_UDB14_A0
PWM2_PWMUDB_sP8_pwmdp_u0__A1_REG EQU CYREG_B0_UDB14_A1
PWM2_PWMUDB_sP8_pwmdp_u0__D0_D1_REG EQU CYREG_B0_UDB14_D0_D1
PWM2_PWMUDB_sP8_pwmdp_u0__D0_REG EQU CYREG_B0_UDB14_D0
PWM2_PWMUDB_sP8_pwmdp_u0__D1_REG EQU CYREG_B0_UDB14_D1
PWM2_PWMUDB_sP8_pwmdp_u0__DP_AUX_CTL_REG EQU CYREG_B0_UDB14_ACTL
PWM2_PWMUDB_sP8_pwmdp_u0__F0_F1_REG EQU CYREG_B0_UDB14_F0_F1
PWM2_PWMUDB_sP8_pwmdp_u0__F0_REG EQU CYREG_B0_UDB14_F0
PWM2_PWMUDB_sP8_pwmdp_u0__F1_REG EQU CYREG_B0_UDB14_F1
PWM2_PWMUDB_sP8_pwmdp_u0__MSK_DP_AUX_CTL_REG EQU CYREG_B0_UDB14_MSK_ACTL
PWM2_PWMUDB_sP8_pwmdp_u0__PER_DP_AUX_CTL_REG EQU CYREG_B0_UDB14_MSK_ACTL

/* STBY */
STBY__0__INTTYPE EQU CYREG_PICU2_INTTYPE2
STBY__0__MASK EQU 0x04
STBY__0__PC EQU CYREG_PRT2_PC2
STBY__0__PORT EQU 2
STBY__0__SHIFT EQU 2
STBY__AG EQU CYREG_PRT2_AG
STBY__AMUX EQU CYREG_PRT2_AMUX
STBY__BIE EQU CYREG_PRT2_BIE
STBY__BIT_MASK EQU CYREG_PRT2_BIT_MASK
STBY__BYP EQU CYREG_PRT2_BYP
STBY__CTL EQU CYREG_PRT2_CTL
STBY__DM0 EQU CYREG_PRT2_DM0
STBY__DM1 EQU CYREG_PRT2_DM1
STBY__DM2 EQU CYREG_PRT2_DM2
STBY__DR EQU CYREG_PRT2_DR
STBY__INP_DIS EQU CYREG_PRT2_INP_DIS
STBY__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU2_BASE
STBY__LCD_COM_SEG EQU CYREG_PRT2_LCD_COM_SEG
STBY__LCD_EN EQU CYREG_PRT2_LCD_EN
STBY__MASK EQU 0x04
STBY__PORT EQU 2
STBY__PRT EQU CYREG_PRT2_PRT
STBY__PRTDSI__CAPS_SEL EQU CYREG_PRT2_CAPS_SEL
STBY__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT2_DBL_SYNC_IN
STBY__PRTDSI__OE_SEL0 EQU CYREG_PRT2_OE_SEL0
STBY__PRTDSI__OE_SEL1 EQU CYREG_PRT2_OE_SEL1
STBY__PRTDSI__OUT_SEL0 EQU CYREG_PRT2_OUT_SEL0
STBY__PRTDSI__OUT_SEL1 EQU CYREG_PRT2_OUT_SEL1
STBY__PRTDSI__SYNC_OUT EQU CYREG_PRT2_SYNC_OUT
STBY__PS EQU CYREG_PRT2_PS
STBY__SHIFT EQU 2
STBY__SLW EQU CYREG_PRT2_SLW

/* Clock */
Clock__CFG0 EQU CYREG_CLKDIST_DCFG1_CFG0
Clock__CFG1 EQU CYREG_CLKDIST_DCFG1_CFG1
Clock__CFG2 EQU CYREG_CLKDIST_DCFG1_CFG2
Clock__CFG2_SRC_SEL_MASK EQU 0x07
Clock__INDEX EQU 0x01
Clock__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
Clock__PM_ACT_MSK EQU 0x02
Clock__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
Clock__PM_STBY_MSK EQU 0x02
Clock_1__CFG0 EQU CYREG_CLKDIST_DCFG0_CFG0
Clock_1__CFG1 EQU CYREG_CLKDIST_DCFG0_CFG1
Clock_1__CFG2 EQU CYREG_CLKDIST_DCFG0_CFG2
Clock_1__CFG2_SRC_SEL_MASK EQU 0x07
Clock_1__INDEX EQU 0x00
Clock_1__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
Clock_1__PM_ACT_MSK EQU 0x01
Clock_1__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
Clock_1__PM_STBY_MSK EQU 0x01

/* INFR1 */
INFR1__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
INFR1__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
INFR1__INTC_MASK EQU 0x01
INFR1__INTC_NUMBER EQU 0
INFR1__INTC_PRIOR_NUM EQU 7
INFR1__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_0
INFR1__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
INFR1__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

/* INFR2 */
INFR2__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
INFR2__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
INFR2__INTC_MASK EQU 0x02
INFR2__INTC_NUMBER EQU 1
INFR2__INTC_PRIOR_NUM EQU 7
INFR2__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_1
INFR2__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
INFR2__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

/* Timer */
Timer_TimerHW__CAP0 EQU CYREG_TMR0_CAP0
Timer_TimerHW__CAP1 EQU CYREG_TMR0_CAP1
Timer_TimerHW__CFG0 EQU CYREG_TMR0_CFG0
Timer_TimerHW__CFG1 EQU CYREG_TMR0_CFG1
Timer_TimerHW__CFG2 EQU CYREG_TMR0_CFG2
Timer_TimerHW__CNT_CMP0 EQU CYREG_TMR0_CNT_CMP0
Timer_TimerHW__CNT_CMP1 EQU CYREG_TMR0_CNT_CMP1
Timer_TimerHW__PER0 EQU CYREG_TMR0_PER0
Timer_TimerHW__PER1 EQU CYREG_TMR0_PER1
Timer_TimerHW__PM_ACT_CFG EQU CYREG_PM_ACT_CFG3
Timer_TimerHW__PM_ACT_MSK EQU 0x01
Timer_TimerHW__PM_STBY_CFG EQU CYREG_PM_STBY_CFG3
Timer_TimerHW__PM_STBY_MSK EQU 0x01
Timer_TimerHW__RT0 EQU CYREG_TMR0_RT0
Timer_TimerHW__RT1 EQU CYREG_TMR0_RT1
Timer_TimerHW__SR0 EQU CYREG_TMR0_SR0

/* Slinea */
Slinea__0__INTTYPE EQU CYREG_PICU0_INTTYPE5
Slinea__0__MASK EQU 0x20
Slinea__0__PC EQU CYREG_PRT0_PC5
Slinea__0__PORT EQU 0
Slinea__0__SHIFT EQU 5
Slinea__AG EQU CYREG_PRT0_AG
Slinea__AMUX EQU CYREG_PRT0_AMUX
Slinea__BIE EQU CYREG_PRT0_BIE
Slinea__BIT_MASK EQU CYREG_PRT0_BIT_MASK
Slinea__BYP EQU CYREG_PRT0_BYP
Slinea__CTL EQU CYREG_PRT0_CTL
Slinea__DM0 EQU CYREG_PRT0_DM0
Slinea__DM1 EQU CYREG_PRT0_DM1
Slinea__DM2 EQU CYREG_PRT0_DM2
Slinea__DR EQU CYREG_PRT0_DR
Slinea__INP_DIS EQU CYREG_PRT0_INP_DIS
Slinea__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU0_BASE
Slinea__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
Slinea__LCD_EN EQU CYREG_PRT0_LCD_EN
Slinea__MASK EQU 0x20
Slinea__PORT EQU 0
Slinea__PRT EQU CYREG_PRT0_PRT
Slinea__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
Slinea__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
Slinea__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
Slinea__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
Slinea__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
Slinea__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
Slinea__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
Slinea__PS EQU CYREG_PRT0_PS
Slinea__SHIFT EQU 5
Slinea__SLW EQU CYREG_PRT0_SLW

/* Control */
Control_Sync_ctrl_reg__0__MASK EQU 0x01
Control_Sync_ctrl_reg__0__POS EQU 0
Control_Sync_ctrl_reg__16BIT_CONTROL_AUX_CTL_REG EQU CYREG_B0_UDB12_13_ACTL
Control_Sync_ctrl_reg__16BIT_CONTROL_CONTROL_REG EQU CYREG_B0_UDB12_13_CTL
Control_Sync_ctrl_reg__16BIT_CONTROL_COUNT_REG EQU CYREG_B0_UDB12_13_CTL
Control_Sync_ctrl_reg__16BIT_COUNT_CONTROL_REG EQU CYREG_B0_UDB12_13_CTL
Control_Sync_ctrl_reg__16BIT_COUNT_COUNT_REG EQU CYREG_B0_UDB12_13_CTL
Control_Sync_ctrl_reg__16BIT_MASK_MASK_REG EQU CYREG_B0_UDB12_13_MSK
Control_Sync_ctrl_reg__16BIT_MASK_PERIOD_REG EQU CYREG_B0_UDB12_13_MSK
Control_Sync_ctrl_reg__16BIT_PERIOD_MASK_REG EQU CYREG_B0_UDB12_13_MSK
Control_Sync_ctrl_reg__16BIT_PERIOD_PERIOD_REG EQU CYREG_B0_UDB12_13_MSK
Control_Sync_ctrl_reg__CONTROL_AUX_CTL_REG EQU CYREG_B0_UDB12_ACTL
Control_Sync_ctrl_reg__CONTROL_REG EQU CYREG_B0_UDB12_CTL
Control_Sync_ctrl_reg__CONTROL_ST_REG EQU CYREG_B0_UDB12_ST_CTL
Control_Sync_ctrl_reg__COUNT_REG EQU CYREG_B0_UDB12_CTL
Control_Sync_ctrl_reg__COUNT_ST_REG EQU CYREG_B0_UDB12_ST_CTL
Control_Sync_ctrl_reg__MASK EQU 0x01
Control_Sync_ctrl_reg__MASK_CTL_AUX_CTL_REG EQU CYREG_B0_UDB12_MSK_ACTL
Control_Sync_ctrl_reg__PER_CTL_AUX_CTL_REG EQU CYREG_B0_UDB12_MSK_ACTL
Control_Sync_ctrl_reg__PERIOD_REG EQU CYREG_B0_UDB12_MSK

/* Slinea1 */
Slinea1__0__INTTYPE EQU CYREG_PICU3_INTTYPE0
Slinea1__0__MASK EQU 0x01
Slinea1__0__PC EQU CYREG_PRT3_PC0
Slinea1__0__PORT EQU 3
Slinea1__0__SHIFT EQU 0
Slinea1__AG EQU CYREG_PRT3_AG
Slinea1__AMUX EQU CYREG_PRT3_AMUX
Slinea1__BIE EQU CYREG_PRT3_BIE
Slinea1__BIT_MASK EQU CYREG_PRT3_BIT_MASK
Slinea1__BYP EQU CYREG_PRT3_BYP
Slinea1__CTL EQU CYREG_PRT3_CTL
Slinea1__DM0 EQU CYREG_PRT3_DM0
Slinea1__DM1 EQU CYREG_PRT3_DM1
Slinea1__DM2 EQU CYREG_PRT3_DM2
Slinea1__DR EQU CYREG_PRT3_DR
Slinea1__INP_DIS EQU CYREG_PRT3_INP_DIS
Slinea1__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU3_BASE
Slinea1__LCD_COM_SEG EQU CYREG_PRT3_LCD_COM_SEG
Slinea1__LCD_EN EQU CYREG_PRT3_LCD_EN
Slinea1__MASK EQU 0x01
Slinea1__PORT EQU 3
Slinea1__PRT EQU CYREG_PRT3_PRT
Slinea1__PRTDSI__CAPS_SEL EQU CYREG_PRT3_CAPS_SEL
Slinea1__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT3_DBL_SYNC_IN
Slinea1__PRTDSI__OE_SEL0 EQU CYREG_PRT3_OE_SEL0
Slinea1__PRTDSI__OE_SEL1 EQU CYREG_PRT3_OE_SEL1
Slinea1__PRTDSI__OUT_SEL0 EQU CYREG_PRT3_OUT_SEL0
Slinea1__PRTDSI__OUT_SEL1 EQU CYREG_PRT3_OUT_SEL1
Slinea1__PRTDSI__SYNC_OUT EQU CYREG_PRT3_SYNC_OUT
Slinea1__PS EQU CYREG_PRT3_PS
Slinea1__SHIFT EQU 0
Slinea1__SLW EQU CYREG_PRT3_SLW

/* Trigger */
Trigger__0__INTTYPE EQU CYREG_PICU2_INTTYPE6
Trigger__0__MASK EQU 0x40
Trigger__0__PC EQU CYREG_PRT2_PC6
Trigger__0__PORT EQU 2
Trigger__0__SHIFT EQU 6
Trigger__AG EQU CYREG_PRT2_AG
Trigger__AMUX EQU CYREG_PRT2_AMUX
Trigger__BIE EQU CYREG_PRT2_BIE
Trigger__BIT_MASK EQU CYREG_PRT2_BIT_MASK
Trigger__BYP EQU CYREG_PRT2_BYP
Trigger__CTL EQU CYREG_PRT2_CTL
Trigger__DM0 EQU CYREG_PRT2_DM0
Trigger__DM1 EQU CYREG_PRT2_DM1
Trigger__DM2 EQU CYREG_PRT2_DM2
Trigger__DR EQU CYREG_PRT2_DR
Trigger__INP_DIS EQU CYREG_PRT2_INP_DIS
Trigger__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU2_BASE
Trigger__LCD_COM_SEG EQU CYREG_PRT2_LCD_COM_SEG
Trigger__LCD_EN EQU CYREG_PRT2_LCD_EN
Trigger__MASK EQU 0x40
Trigger__PORT EQU 2
Trigger__PRT EQU CYREG_PRT2_PRT
Trigger__PRTDSI__CAPS_SEL EQU CYREG_PRT2_CAPS_SEL
Trigger__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT2_DBL_SYNC_IN
Trigger__PRTDSI__OE_SEL0 EQU CYREG_PRT2_OE_SEL0
Trigger__PRTDSI__OE_SEL1 EQU CYREG_PRT2_OE_SEL1
Trigger__PRTDSI__OUT_SEL0 EQU CYREG_PRT2_OUT_SEL0
Trigger__PRTDSI__OUT_SEL1 EQU CYREG_PRT2_OUT_SEL1
Trigger__PRTDSI__SYNC_OUT EQU CYREG_PRT2_SYNC_OUT
Trigger__PS EQU CYREG_PRT2_PS
Trigger__SHIFT EQU 6
Trigger__SLW EQU CYREG_PRT2_SLW

/* Miscellaneous */
BCLK__BUS_CLK__HZ EQU 24000000
BCLK__BUS_CLK__KHZ EQU 24000
BCLK__BUS_CLK__MHZ EQU 24
CYDEV_CHIP_DIE_LEOPARD EQU 1
CYDEV_CHIP_DIE_PSOC4A EQU 18
CYDEV_CHIP_DIE_PSOC5LP EQU 2
CYDEV_CHIP_DIE_PSOC5TM EQU 3
CYDEV_CHIP_DIE_TMA4 EQU 4
CYDEV_CHIP_DIE_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_FM0P EQU 5
CYDEV_CHIP_FAMILY_FM3 EQU 6
CYDEV_CHIP_FAMILY_FM4 EQU 7
CYDEV_CHIP_FAMILY_PSOC3 EQU 1
CYDEV_CHIP_FAMILY_PSOC4 EQU 2
CYDEV_CHIP_FAMILY_PSOC5 EQU 3
CYDEV_CHIP_FAMILY_PSOC6 EQU 4
CYDEV_CHIP_FAMILY_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_USED EQU CYDEV_CHIP_FAMILY_PSOC5
CYDEV_CHIP_JTAG_ID EQU 0x2E161069
CYDEV_CHIP_MEMBER_3A EQU 1
CYDEV_CHIP_MEMBER_4A EQU 18
CYDEV_CHIP_MEMBER_4D EQU 13
CYDEV_CHIP_MEMBER_4E EQU 6
CYDEV_CHIP_MEMBER_4F EQU 19
CYDEV_CHIP_MEMBER_4G EQU 4
CYDEV_CHIP_MEMBER_4H EQU 17
CYDEV_CHIP_MEMBER_4I EQU 23
CYDEV_CHIP_MEMBER_4J EQU 14
CYDEV_CHIP_MEMBER_4K EQU 15
CYDEV_CHIP_MEMBER_4L EQU 22
CYDEV_CHIP_MEMBER_4M EQU 21
CYDEV_CHIP_MEMBER_4N EQU 10
CYDEV_CHIP_MEMBER_4O EQU 7
CYDEV_CHIP_MEMBER_4P EQU 20
CYDEV_CHIP_MEMBER_4Q EQU 12
CYDEV_CHIP_MEMBER_4R EQU 8
CYDEV_CHIP_MEMBER_4S EQU 11
CYDEV_CHIP_MEMBER_4T EQU 9
CYDEV_CHIP_MEMBER_4U EQU 5
CYDEV_CHIP_MEMBER_4V EQU 16
CYDEV_CHIP_MEMBER_5A EQU 3
CYDEV_CHIP_MEMBER_5B EQU 2
CYDEV_CHIP_MEMBER_6A EQU 24
CYDEV_CHIP_MEMBER_FM3 EQU 28
CYDEV_CHIP_MEMBER_FM4 EQU 29
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 EQU 25
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 EQU 26
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 EQU 27
CYDEV_CHIP_MEMBER_UNKNOWN EQU 0
CYDEV_CHIP_MEMBER_USED EQU CYDEV_CHIP_MEMBER_5B
CYDEV_CHIP_DIE_EXPECT EQU CYDEV_CHIP_MEMBER_USED
CYDEV_CHIP_DIE_ACTUAL EQU CYDEV_CHIP_DIE_EXPECT
CYDEV_CHIP_REV_LEOPARD_ES1 EQU 0
CYDEV_CHIP_REV_LEOPARD_ES2 EQU 1
CYDEV_CHIP_REV_LEOPARD_ES3 EQU 3
CYDEV_CHIP_REV_LEOPARD_PRODUCTION EQU 3
CYDEV_CHIP_REV_PSOC4A_ES0 EQU 17
CYDEV_CHIP_REV_PSOC4A_PRODUCTION EQU 17
CYDEV_CHIP_REV_PSOC5LP_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5LP_PRODUCTION EQU 0
CYDEV_CHIP_REV_PSOC5TM_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5TM_ES1 EQU 1
CYDEV_CHIP_REV_PSOC5TM_PRODUCTION EQU 1
CYDEV_CHIP_REV_TMA4_ES EQU 17
CYDEV_CHIP_REV_TMA4_ES2 EQU 33
CYDEV_CHIP_REV_TMA4_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_3A_ES1 EQU 0
CYDEV_CHIP_REVISION_3A_ES2 EQU 1
CYDEV_CHIP_REVISION_3A_ES3 EQU 3
CYDEV_CHIP_REVISION_3A_PRODUCTION EQU 3
CYDEV_CHIP_REVISION_4A_ES0 EQU 17
CYDEV_CHIP_REVISION_4A_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4D_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4E_CCG2_NO_USBPD EQU 0
CYDEV_CHIP_REVISION_4E_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256K EQU 0
CYDEV_CHIP_REVISION_4G_ES EQU 17
CYDEV_CHIP_REVISION_4G_ES2 EQU 33
CYDEV_CHIP_REVISION_4G_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4H_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4I_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4J_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4K_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4L_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4M_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4N_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4O_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4P_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4Q_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4R_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4S_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4T_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4U_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4V_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_5A_ES0 EQU 0
CYDEV_CHIP_REVISION_5A_ES1 EQU 1
CYDEV_CHIP_REVISION_5A_PRODUCTION EQU 1
CYDEV_CHIP_REVISION_5B_ES0 EQU 0
CYDEV_CHIP_REVISION_5B_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_6A_ES EQU 17
CYDEV_CHIP_REVISION_6A_NO_UDB EQU 33
CYDEV_CHIP_REVISION_6A_PRODUCTION EQU 33
CYDEV_CHIP_REVISION_FM3_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_FM4_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_USED EQU CYDEV_CHIP_REVISION_5B_PRODUCTION
CYDEV_CHIP_REV_EXPECT EQU CYDEV_CHIP_REVISION_USED
CYDEV_CONFIG_FASTBOOT_ENABLED EQU 1
CYDEV_CONFIG_UNUSED_IO_AllowButWarn EQU 0
CYDEV_CONFIG_UNUSED_IO EQU CYDEV_CONFIG_UNUSED_IO_AllowButWarn
CYDEV_CONFIG_UNUSED_IO_AllowWithInfo EQU 1
CYDEV_CONFIG_UNUSED_IO_Disallowed EQU 2
CYDEV_CONFIGURATION_COMPRESSED EQU 1
CYDEV_CONFIGURATION_DMA EQU 0
CYDEV_CONFIGURATION_ECC EQU 1
CYDEV_CONFIGURATION_IMOENABLED EQU CYDEV_CONFIG_FASTBOOT_ENABLED
CYDEV_CONFIGURATION_MODE_COMPRESSED EQU 0
CYDEV_CONFIGURATION_MODE EQU CYDEV_CONFIGURATION_MODE_COMPRESSED
CYDEV_CONFIGURATION_MODE_DMA EQU 2
CYDEV_CONFIGURATION_MODE_UNCOMPRESSED EQU 1
CYDEV_DEBUG_ENABLE_MASK EQU 0x20
CYDEV_DEBUG_ENABLE_REGISTER EQU CYREG_MLOGIC_DEBUG
CYDEV_DEBUGGING_DPS_Disable EQU 3
CYDEV_DEBUGGING_DPS_JTAG_4 EQU 1
CYDEV_DEBUGGING_DPS_JTAG_5 EQU 0
CYDEV_DEBUGGING_DPS_SWD EQU 2
CYDEV_DEBUGGING_DPS_SWD_SWV EQU 6
CYDEV_DEBUGGING_DPS EQU CYDEV_DEBUGGING_DPS_SWD_SWV
CYDEV_DEBUGGING_ENABLE EQU 1
CYDEV_DEBUGGING_XRES EQU 0
CYDEV_DMA_CHANNELS_AVAILABLE EQU 24
CYDEV_ECC_ENABLE EQU 0
CYDEV_HEAP_SIZE EQU 0x80
CYDEV_INSTRUCT_CACHE_ENABLED EQU 1
CYDEV_INTR_RISING EQU 0x00000000
CYDEV_IS_EXPORTING_CODE EQU 0
CYDEV_IS_IMPORTING_CODE EQU 0
CYDEV_PROJ_TYPE EQU 0
CYDEV_PROJ_TYPE_BOOTLOADER EQU 1
CYDEV_PROJ_TYPE_LAUNCHER EQU 5
CYDEV_PROJ_TYPE_LOADABLE EQU 2
CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER EQU 4
CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER EQU 3
CYDEV_PROJ_TYPE_STANDARD EQU 0
CYDEV_PROTECTION_ENABLE EQU 0
CYDEV_STACK_SIZE EQU 0x0800
CYDEV_USE_BUNDLED_CMSIS EQU 1
CYDEV_VARIABLE_VDDA EQU 0
CYDEV_VDDA_MV EQU 5000
CYDEV_VDDD_MV EQU 5000
CYDEV_VDDIO0_MV EQU 5000
CYDEV_VDDIO1_MV EQU 5000
CYDEV_VDDIO2_MV EQU 5000
CYDEV_VDDIO3_MV EQU 5000
CYDEV_VIO0_MV EQU 5000
CYDEV_VIO1_MV EQU 5000
CYDEV_VIO2_MV EQU 5000
CYDEV_VIO3_MV EQU 5000
CYIPBLOCK_ARM_CM3_VERSION EQU 0
CYIPBLOCK_P3_ANAIF_VERSION EQU 0
CYIPBLOCK_P3_CAN_VERSION EQU 0
CYIPBLOCK_P3_CAPSENSE_VERSION EQU 0
CYIPBLOCK_P3_COMP_VERSION EQU 0
CYIPBLOCK_P3_DECIMATOR_VERSION EQU 0
CYIPBLOCK_P3_DFB_VERSION EQU 0
CYIPBLOCK_P3_DMA_VERSION EQU 0
CYIPBLOCK_P3_DRQ_VERSION EQU 0
CYIPBLOCK_P3_DSM_VERSION EQU 0
CYIPBLOCK_P3_EMIF_VERSION EQU 0
CYIPBLOCK_P3_I2C_VERSION EQU 0
CYIPBLOCK_P3_LCD_VERSION EQU 0
CYIPBLOCK_P3_LPF_VERSION EQU 0
CYIPBLOCK_P3_OPAMP_VERSION EQU 0
CYIPBLOCK_P3_PM_VERSION EQU 0
CYIPBLOCK_P3_SCCT_VERSION EQU 0
CYIPBLOCK_P3_TIMER_VERSION EQU 0
CYIPBLOCK_P3_USB_VERSION EQU 0
CYIPBLOCK_P3_VIDAC_VERSION EQU 0
CYIPBLOCK_P3_VREF_VERSION EQU 0
CYIPBLOCK_S8_GPIO_VERSION EQU 0
CYIPBLOCK_S8_IRQ_VERSION EQU 0
CYIPBLOCK_S8_SAR_VERSION EQU 0
CYIPBLOCK_S8_SIO_VERSION EQU 0
CYIPBLOCK_S8_UDB_VERSION EQU 0
DMA_CHANNELS_USED__MASK0 EQU 0x00000000
CYDEV_BOOTLOADER_ENABLE EQU 0

#endif /* INCLUDED_CYFITTERIAR_INC */
