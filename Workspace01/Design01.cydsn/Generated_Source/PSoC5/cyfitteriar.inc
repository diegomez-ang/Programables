;
; File Name: cyfitteriar.inc
; 
; PSoC Creator  4.4
;
; Description:
; 
;
;-------------------------------------------------------------------------------
; Copyright (c) 2007-2020 Cypress Semiconductor.  All rights reserved.
; You may use this file only in accordance with the license, terms, conditions, 
; disclaimers, and limitations in the end user license agreement accompanying 
; the software package with which this file was provided.
;-------------------------------------------------------------------------------

#ifndef INCLUDED_CYFITTERIAR_INC
#define INCLUDED_CYFITTERIAR_INC
    INCLUDE cydeviceiar.inc
    INCLUDE cydeviceiar_trm.inc

/* LED */
LED__0__INTTYPE EQU CYREG_PICU2_INTTYPE1
LED__0__MASK EQU 0x02
LED__0__PC EQU CYREG_PRT2_PC1
LED__0__PORT EQU 2
LED__0__SHIFT EQU 1
LED__AG EQU CYREG_PRT2_AG
LED__AMUX EQU CYREG_PRT2_AMUX
LED__BIE EQU CYREG_PRT2_BIE
LED__BIT_MASK EQU CYREG_PRT2_BIT_MASK
LED__BYP EQU CYREG_PRT2_BYP
LED__CTL EQU CYREG_PRT2_CTL
LED__DM0 EQU CYREG_PRT2_DM0
LED__DM1 EQU CYREG_PRT2_DM1
LED__DM2 EQU CYREG_PRT2_DM2
LED__DR EQU CYREG_PRT2_DR
LED__INP_DIS EQU CYREG_PRT2_INP_DIS
LED__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU2_BASE
LED__LCD_COM_SEG EQU CYREG_PRT2_LCD_COM_SEG
LED__LCD_EN EQU CYREG_PRT2_LCD_EN
LED__MASK EQU 0x02
LED__PORT EQU 2
LED__PRT EQU CYREG_PRT2_PRT
LED__PRTDSI__CAPS_SEL EQU CYREG_PRT2_CAPS_SEL
LED__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT2_DBL_SYNC_IN
LED__PRTDSI__OE_SEL0 EQU CYREG_PRT2_OE_SEL0
LED__PRTDSI__OE_SEL1 EQU CYREG_PRT2_OE_SEL1
LED__PRTDSI__OUT_SEL0 EQU CYREG_PRT2_OUT_SEL0
LED__PRTDSI__OUT_SEL1 EQU CYREG_PRT2_OUT_SEL1
LED__PRTDSI__SYNC_OUT EQU CYREG_PRT2_SYNC_OUT
LED__PS EQU CYREG_PRT2_PS
LED__SHIFT EQU 1
LED__SLW EQU CYREG_PRT2_SLW

/* PWM_2 */
PWM_2_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_AUX_CTL_REG EQU CYREG_B1_UDB07_08_ACTL
PWM_2_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_CONTROL_REG EQU CYREG_B1_UDB07_08_CTL
PWM_2_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_COUNT_REG EQU CYREG_B1_UDB07_08_CTL
PWM_2_PWMUDB_genblk1_ctrlreg__16BIT_COUNT_CONTROL_REG EQU CYREG_B1_UDB07_08_CTL
PWM_2_PWMUDB_genblk1_ctrlreg__16BIT_COUNT_COUNT_REG EQU CYREG_B1_UDB07_08_CTL
PWM_2_PWMUDB_genblk1_ctrlreg__16BIT_MASK_MASK_REG EQU CYREG_B1_UDB07_08_MSK
PWM_2_PWMUDB_genblk1_ctrlreg__16BIT_MASK_PERIOD_REG EQU CYREG_B1_UDB07_08_MSK
PWM_2_PWMUDB_genblk1_ctrlreg__16BIT_PERIOD_MASK_REG EQU CYREG_B1_UDB07_08_MSK
PWM_2_PWMUDB_genblk1_ctrlreg__16BIT_PERIOD_PERIOD_REG EQU CYREG_B1_UDB07_08_MSK
PWM_2_PWMUDB_genblk1_ctrlreg__7__MASK EQU 0x80
PWM_2_PWMUDB_genblk1_ctrlreg__7__POS EQU 7
PWM_2_PWMUDB_genblk1_ctrlreg__CONTROL_AUX_CTL_REG EQU CYREG_B1_UDB07_ACTL
PWM_2_PWMUDB_genblk1_ctrlreg__CONTROL_REG EQU CYREG_B1_UDB07_CTL
PWM_2_PWMUDB_genblk1_ctrlreg__CONTROL_ST_REG EQU CYREG_B1_UDB07_ST_CTL
PWM_2_PWMUDB_genblk1_ctrlreg__COUNT_REG EQU CYREG_B1_UDB07_CTL
PWM_2_PWMUDB_genblk1_ctrlreg__COUNT_ST_REG EQU CYREG_B1_UDB07_ST_CTL
PWM_2_PWMUDB_genblk1_ctrlreg__MASK EQU 0x80
PWM_2_PWMUDB_genblk1_ctrlreg__MASK_CTL_AUX_CTL_REG EQU CYREG_B1_UDB07_MSK_ACTL
PWM_2_PWMUDB_genblk1_ctrlreg__PER_CTL_AUX_CTL_REG EQU CYREG_B1_UDB07_MSK_ACTL
PWM_2_PWMUDB_genblk1_ctrlreg__PERIOD_REG EQU CYREG_B1_UDB07_MSK
PWM_2_PWMUDB_sP8_pwmdp_u0__16BIT_A0_REG EQU CYREG_B1_UDB07_08_A0
PWM_2_PWMUDB_sP8_pwmdp_u0__16BIT_A1_REG EQU CYREG_B1_UDB07_08_A1
PWM_2_PWMUDB_sP8_pwmdp_u0__16BIT_D0_REG EQU CYREG_B1_UDB07_08_D0
PWM_2_PWMUDB_sP8_pwmdp_u0__16BIT_D1_REG EQU CYREG_B1_UDB07_08_D1
PWM_2_PWMUDB_sP8_pwmdp_u0__16BIT_DP_AUX_CTL_REG EQU CYREG_B1_UDB07_08_ACTL
PWM_2_PWMUDB_sP8_pwmdp_u0__16BIT_F0_REG EQU CYREG_B1_UDB07_08_F0
PWM_2_PWMUDB_sP8_pwmdp_u0__16BIT_F1_REG EQU CYREG_B1_UDB07_08_F1
PWM_2_PWMUDB_sP8_pwmdp_u0__A0_A1_REG EQU CYREG_B1_UDB07_A0_A1
PWM_2_PWMUDB_sP8_pwmdp_u0__A0_REG EQU CYREG_B1_UDB07_A0
PWM_2_PWMUDB_sP8_pwmdp_u0__A1_REG EQU CYREG_B1_UDB07_A1
PWM_2_PWMUDB_sP8_pwmdp_u0__D0_D1_REG EQU CYREG_B1_UDB07_D0_D1
PWM_2_PWMUDB_sP8_pwmdp_u0__D0_REG EQU CYREG_B1_UDB07_D0
PWM_2_PWMUDB_sP8_pwmdp_u0__D1_REG EQU CYREG_B1_UDB07_D1
PWM_2_PWMUDB_sP8_pwmdp_u0__DP_AUX_CTL_REG EQU CYREG_B1_UDB07_ACTL
PWM_2_PWMUDB_sP8_pwmdp_u0__F0_F1_REG EQU CYREG_B1_UDB07_F0_F1
PWM_2_PWMUDB_sP8_pwmdp_u0__F0_REG EQU CYREG_B1_UDB07_F0
PWM_2_PWMUDB_sP8_pwmdp_u0__F1_REG EQU CYREG_B1_UDB07_F1
PWM_2_PWMUDB_sP8_pwmdp_u0__MSK_DP_AUX_CTL_REG EQU CYREG_B1_UDB07_MSK_ACTL
PWM_2_PWMUDB_sP8_pwmdp_u0__PER_DP_AUX_CTL_REG EQU CYREG_B1_UDB07_MSK_ACTL

/* PWM_PWMUDB */
PWM_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_AUX_CTL_REG EQU CYREG_B1_UDB06_07_ACTL
PWM_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_CONTROL_REG EQU CYREG_B1_UDB06_07_CTL
PWM_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_COUNT_REG EQU CYREG_B1_UDB06_07_CTL
PWM_PWMUDB_genblk1_ctrlreg__16BIT_COUNT_CONTROL_REG EQU CYREG_B1_UDB06_07_CTL
PWM_PWMUDB_genblk1_ctrlreg__16BIT_COUNT_COUNT_REG EQU CYREG_B1_UDB06_07_CTL
PWM_PWMUDB_genblk1_ctrlreg__16BIT_MASK_MASK_REG EQU CYREG_B1_UDB06_07_MSK
PWM_PWMUDB_genblk1_ctrlreg__16BIT_MASK_PERIOD_REG EQU CYREG_B1_UDB06_07_MSK
PWM_PWMUDB_genblk1_ctrlreg__16BIT_PERIOD_MASK_REG EQU CYREG_B1_UDB06_07_MSK
PWM_PWMUDB_genblk1_ctrlreg__16BIT_PERIOD_PERIOD_REG EQU CYREG_B1_UDB06_07_MSK
PWM_PWMUDB_genblk1_ctrlreg__7__MASK EQU 0x80
PWM_PWMUDB_genblk1_ctrlreg__7__POS EQU 7
PWM_PWMUDB_genblk1_ctrlreg__CONTROL_AUX_CTL_REG EQU CYREG_B1_UDB06_ACTL
PWM_PWMUDB_genblk1_ctrlreg__CONTROL_REG EQU CYREG_B1_UDB06_CTL
PWM_PWMUDB_genblk1_ctrlreg__CONTROL_ST_REG EQU CYREG_B1_UDB06_ST_CTL
PWM_PWMUDB_genblk1_ctrlreg__COUNT_REG EQU CYREG_B1_UDB06_CTL
PWM_PWMUDB_genblk1_ctrlreg__COUNT_ST_REG EQU CYREG_B1_UDB06_ST_CTL
PWM_PWMUDB_genblk1_ctrlreg__MASK EQU 0x80
PWM_PWMUDB_genblk1_ctrlreg__MASK_CTL_AUX_CTL_REG EQU CYREG_B1_UDB06_MSK_ACTL
PWM_PWMUDB_genblk1_ctrlreg__PER_CTL_AUX_CTL_REG EQU CYREG_B1_UDB06_MSK_ACTL
PWM_PWMUDB_genblk1_ctrlreg__PERIOD_REG EQU CYREG_B1_UDB06_MSK
PWM_PWMUDB_sP8_pwmdp_u0__16BIT_A0_REG EQU CYREG_B1_UDB06_07_A0
PWM_PWMUDB_sP8_pwmdp_u0__16BIT_A1_REG EQU CYREG_B1_UDB06_07_A1
PWM_PWMUDB_sP8_pwmdp_u0__16BIT_D0_REG EQU CYREG_B1_UDB06_07_D0
PWM_PWMUDB_sP8_pwmdp_u0__16BIT_D1_REG EQU CYREG_B1_UDB06_07_D1
PWM_PWMUDB_sP8_pwmdp_u0__16BIT_DP_AUX_CTL_REG EQU CYREG_B1_UDB06_07_ACTL
PWM_PWMUDB_sP8_pwmdp_u0__16BIT_F0_REG EQU CYREG_B1_UDB06_07_F0
PWM_PWMUDB_sP8_pwmdp_u0__16BIT_F1_REG EQU CYREG_B1_UDB06_07_F1
PWM_PWMUDB_sP8_pwmdp_u0__A0_A1_REG EQU CYREG_B1_UDB06_A0_A1
PWM_PWMUDB_sP8_pwmdp_u0__A0_REG EQU CYREG_B1_UDB06_A0
PWM_PWMUDB_sP8_pwmdp_u0__A1_REG EQU CYREG_B1_UDB06_A1
PWM_PWMUDB_sP8_pwmdp_u0__D0_D1_REG EQU CYREG_B1_UDB06_D0_D1
PWM_PWMUDB_sP8_pwmdp_u0__D0_REG EQU CYREG_B1_UDB06_D0
PWM_PWMUDB_sP8_pwmdp_u0__D1_REG EQU CYREG_B1_UDB06_D1
PWM_PWMUDB_sP8_pwmdp_u0__DP_AUX_CTL_REG EQU CYREG_B1_UDB06_ACTL
PWM_PWMUDB_sP8_pwmdp_u0__F0_F1_REG EQU CYREG_B1_UDB06_F0_F1
PWM_PWMUDB_sP8_pwmdp_u0__F0_REG EQU CYREG_B1_UDB06_F0
PWM_PWMUDB_sP8_pwmdp_u0__F1_REG EQU CYREG_B1_UDB06_F1
PWM_PWMUDB_sP8_pwmdp_u0__MSK_DP_AUX_CTL_REG EQU CYREG_B1_UDB06_MSK_ACTL
PWM_PWMUDB_sP8_pwmdp_u0__PER_DP_AUX_CTL_REG EQU CYREG_B1_UDB06_MSK_ACTL

/* Miscellaneous */
Clock_1__CFG0 EQU CYREG_CLKDIST_DCFG0_CFG0
Clock_1__CFG1 EQU CYREG_CLKDIST_DCFG0_CFG1
Clock_1__CFG2 EQU CYREG_CLKDIST_DCFG0_CFG2
Clock_1__CFG2_SRC_SEL_MASK EQU 0x07
Clock_1__INDEX EQU 0x00
Clock_1__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
Clock_1__PM_ACT_MSK EQU 0x01
Clock_1__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
Clock_1__PM_STBY_MSK EQU 0x01
ResetPWM__0__INTTYPE EQU CYREG_PICU3_INTTYPE5
ResetPWM__0__MASK EQU 0x20
ResetPWM__0__PC EQU CYREG_PRT3_PC5
ResetPWM__0__PORT EQU 3
ResetPWM__0__SHIFT EQU 5
ResetPWM__AG EQU CYREG_PRT3_AG
ResetPWM__AMUX EQU CYREG_PRT3_AMUX
ResetPWM__BIE EQU CYREG_PRT3_BIE
ResetPWM__BIT_MASK EQU CYREG_PRT3_BIT_MASK
ResetPWM__BYP EQU CYREG_PRT3_BYP
ResetPWM__CTL EQU CYREG_PRT3_CTL
ResetPWM__DM0 EQU CYREG_PRT3_DM0
ResetPWM__DM1 EQU CYREG_PRT3_DM1
ResetPWM__DM2 EQU CYREG_PRT3_DM2
ResetPWM__DR EQU CYREG_PRT3_DR
ResetPWM__INP_DIS EQU CYREG_PRT3_INP_DIS
ResetPWM__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU3_BASE
ResetPWM__LCD_COM_SEG EQU CYREG_PRT3_LCD_COM_SEG
ResetPWM__LCD_EN EQU CYREG_PRT3_LCD_EN
ResetPWM__MASK EQU 0x20
ResetPWM__PORT EQU 3
ResetPWM__PRT EQU CYREG_PRT3_PRT
ResetPWM__PRTDSI__CAPS_SEL EQU CYREG_PRT3_CAPS_SEL
ResetPWM__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT3_DBL_SYNC_IN
ResetPWM__PRTDSI__OE_SEL0 EQU CYREG_PRT3_OE_SEL0
ResetPWM__PRTDSI__OE_SEL1 EQU CYREG_PRT3_OE_SEL1
ResetPWM__PRTDSI__OUT_SEL0 EQU CYREG_PRT3_OUT_SEL0
ResetPWM__PRTDSI__OUT_SEL1 EQU CYREG_PRT3_OUT_SEL1
ResetPWM__PRTDSI__SYNC_OUT EQU CYREG_PRT3_SYNC_OUT
ResetPWM__PS EQU CYREG_PRT3_PS
ResetPWM__SHIFT EQU 5
ResetPWM__SLW EQU CYREG_PRT3_SLW
ResetPin__0__INTTYPE EQU CYREG_PICU3_INTTYPE4
ResetPin__0__MASK EQU 0x10
ResetPin__0__PC EQU CYREG_PRT3_PC4
ResetPin__0__PORT EQU 3
ResetPin__0__SHIFT EQU 4
ResetPin__AG EQU CYREG_PRT3_AG
ResetPin__AMUX EQU CYREG_PRT3_AMUX
ResetPin__BIE EQU CYREG_PRT3_BIE
ResetPin__BIT_MASK EQU CYREG_PRT3_BIT_MASK
ResetPin__BYP EQU CYREG_PRT3_BYP
ResetPin__CTL EQU CYREG_PRT3_CTL
ResetPin__DM0 EQU CYREG_PRT3_DM0
ResetPin__DM1 EQU CYREG_PRT3_DM1
ResetPin__DM2 EQU CYREG_PRT3_DM2
ResetPin__DR EQU CYREG_PRT3_DR
ResetPin__INP_DIS EQU CYREG_PRT3_INP_DIS
ResetPin__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU3_BASE
ResetPin__LCD_COM_SEG EQU CYREG_PRT3_LCD_COM_SEG
ResetPin__LCD_EN EQU CYREG_PRT3_LCD_EN
ResetPin__MASK EQU 0x10
ResetPin__PORT EQU 3
ResetPin__PRT EQU CYREG_PRT3_PRT
ResetPin__PRTDSI__CAPS_SEL EQU CYREG_PRT3_CAPS_SEL
ResetPin__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT3_DBL_SYNC_IN
ResetPin__PRTDSI__OE_SEL0 EQU CYREG_PRT3_OE_SEL0
ResetPin__PRTDSI__OE_SEL1 EQU CYREG_PRT3_OE_SEL1
ResetPin__PRTDSI__OUT_SEL0 EQU CYREG_PRT3_OUT_SEL0
ResetPin__PRTDSI__OUT_SEL1 EQU CYREG_PRT3_OUT_SEL1
ResetPin__PRTDSI__SYNC_OUT EQU CYREG_PRT3_SYNC_OUT
ResetPin__PS EQU CYREG_PRT3_PS
ResetPin__SHIFT EQU 4
ResetPin__SLW EQU CYREG_PRT3_SLW
MOTOR_1_left__0__INTTYPE EQU CYREG_PICU0_INTTYPE0
MOTOR_1_left__0__MASK EQU 0x01
MOTOR_1_left__0__PC EQU CYREG_PRT0_PC0
MOTOR_1_left__0__PORT EQU 0
MOTOR_1_left__0__SHIFT EQU 0
MOTOR_1_left__AG EQU CYREG_PRT0_AG
MOTOR_1_left__AMUX EQU CYREG_PRT0_AMUX
MOTOR_1_left__BIE EQU CYREG_PRT0_BIE
MOTOR_1_left__BIT_MASK EQU CYREG_PRT0_BIT_MASK
MOTOR_1_left__BYP EQU CYREG_PRT0_BYP
MOTOR_1_left__CTL EQU CYREG_PRT0_CTL
MOTOR_1_left__DM0 EQU CYREG_PRT0_DM0
MOTOR_1_left__DM1 EQU CYREG_PRT0_DM1
MOTOR_1_left__DM2 EQU CYREG_PRT0_DM2
MOTOR_1_left__DR EQU CYREG_PRT0_DR
MOTOR_1_left__INP_DIS EQU CYREG_PRT0_INP_DIS
MOTOR_1_left__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU0_BASE
MOTOR_1_left__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
MOTOR_1_left__LCD_EN EQU CYREG_PRT0_LCD_EN
MOTOR_1_left__MASK EQU 0x01
MOTOR_1_left__PORT EQU 0
MOTOR_1_left__PRT EQU CYREG_PRT0_PRT
MOTOR_1_left__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
MOTOR_1_left__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
MOTOR_1_left__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
MOTOR_1_left__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
MOTOR_1_left__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
MOTOR_1_left__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
MOTOR_1_left__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
MOTOR_1_left__PS EQU CYREG_PRT0_PS
MOTOR_1_left__SHIFT EQU 0
MOTOR_1_left__SLW EQU CYREG_PRT0_SLW
MOTOR_1_right__0__INTTYPE EQU CYREG_PICU0_INTTYPE1
MOTOR_1_right__0__MASK EQU 0x02
MOTOR_1_right__0__PC EQU CYREG_PRT0_PC1
MOTOR_1_right__0__PORT EQU 0
MOTOR_1_right__0__SHIFT EQU 1
MOTOR_1_right__AG EQU CYREG_PRT0_AG
MOTOR_1_right__AMUX EQU CYREG_PRT0_AMUX
MOTOR_1_right__BIE EQU CYREG_PRT0_BIE
MOTOR_1_right__BIT_MASK EQU CYREG_PRT0_BIT_MASK
MOTOR_1_right__BYP EQU CYREG_PRT0_BYP
MOTOR_1_right__CTL EQU CYREG_PRT0_CTL
MOTOR_1_right__DM0 EQU CYREG_PRT0_DM0
MOTOR_1_right__DM1 EQU CYREG_PRT0_DM1
MOTOR_1_right__DM2 EQU CYREG_PRT0_DM2
MOTOR_1_right__DR EQU CYREG_PRT0_DR
MOTOR_1_right__INP_DIS EQU CYREG_PRT0_INP_DIS
MOTOR_1_right__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU0_BASE
MOTOR_1_right__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
MOTOR_1_right__LCD_EN EQU CYREG_PRT0_LCD_EN
MOTOR_1_right__MASK EQU 0x02
MOTOR_1_right__PORT EQU 0
MOTOR_1_right__PRT EQU CYREG_PRT0_PRT
MOTOR_1_right__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
MOTOR_1_right__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
MOTOR_1_right__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
MOTOR_1_right__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
MOTOR_1_right__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
MOTOR_1_right__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
MOTOR_1_right__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
MOTOR_1_right__PS EQU CYREG_PRT0_PS
MOTOR_1_right__SHIFT EQU 1
MOTOR_1_right__SLW EQU CYREG_PRT0_SLW
MOTOR_2_left_1__0__INTTYPE EQU CYREG_PICU0_INTTYPE2
MOTOR_2_left_1__0__MASK EQU 0x04
MOTOR_2_left_1__0__PC EQU CYREG_PRT0_PC2
MOTOR_2_left_1__0__PORT EQU 0
MOTOR_2_left_1__0__SHIFT EQU 2
MOTOR_2_left_1__AG EQU CYREG_PRT0_AG
MOTOR_2_left_1__AMUX EQU CYREG_PRT0_AMUX
MOTOR_2_left_1__BIE EQU CYREG_PRT0_BIE
MOTOR_2_left_1__BIT_MASK EQU CYREG_PRT0_BIT_MASK
MOTOR_2_left_1__BYP EQU CYREG_PRT0_BYP
MOTOR_2_left_1__CTL EQU CYREG_PRT0_CTL
MOTOR_2_left_1__DM0 EQU CYREG_PRT0_DM0
MOTOR_2_left_1__DM1 EQU CYREG_PRT0_DM1
MOTOR_2_left_1__DM2 EQU CYREG_PRT0_DM2
MOTOR_2_left_1__DR EQU CYREG_PRT0_DR
MOTOR_2_left_1__INP_DIS EQU CYREG_PRT0_INP_DIS
MOTOR_2_left_1__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU0_BASE
MOTOR_2_left_1__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
MOTOR_2_left_1__LCD_EN EQU CYREG_PRT0_LCD_EN
MOTOR_2_left_1__MASK EQU 0x04
MOTOR_2_left_1__PORT EQU 0
MOTOR_2_left_1__PRT EQU CYREG_PRT0_PRT
MOTOR_2_left_1__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
MOTOR_2_left_1__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
MOTOR_2_left_1__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
MOTOR_2_left_1__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
MOTOR_2_left_1__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
MOTOR_2_left_1__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
MOTOR_2_left_1__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
MOTOR_2_left_1__PS EQU CYREG_PRT0_PS
MOTOR_2_left_1__SHIFT EQU 2
MOTOR_2_left_1__SLW EQU CYREG_PRT0_SLW
MOTOR_2_right_1__0__INTTYPE EQU CYREG_PICU0_INTTYPE3
MOTOR_2_right_1__0__MASK EQU 0x08
MOTOR_2_right_1__0__PC EQU CYREG_PRT0_PC3
MOTOR_2_right_1__0__PORT EQU 0
MOTOR_2_right_1__0__SHIFT EQU 3
MOTOR_2_right_1__AG EQU CYREG_PRT0_AG
MOTOR_2_right_1__AMUX EQU CYREG_PRT0_AMUX
MOTOR_2_right_1__BIE EQU CYREG_PRT0_BIE
MOTOR_2_right_1__BIT_MASK EQU CYREG_PRT0_BIT_MASK
MOTOR_2_right_1__BYP EQU CYREG_PRT0_BYP
MOTOR_2_right_1__CTL EQU CYREG_PRT0_CTL
MOTOR_2_right_1__DM0 EQU CYREG_PRT0_DM0
MOTOR_2_right_1__DM1 EQU CYREG_PRT0_DM1
MOTOR_2_right_1__DM2 EQU CYREG_PRT0_DM2
MOTOR_2_right_1__DR EQU CYREG_PRT0_DR
MOTOR_2_right_1__INP_DIS EQU CYREG_PRT0_INP_DIS
MOTOR_2_right_1__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU0_BASE
MOTOR_2_right_1__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
MOTOR_2_right_1__LCD_EN EQU CYREG_PRT0_LCD_EN
MOTOR_2_right_1__MASK EQU 0x08
MOTOR_2_right_1__PORT EQU 0
MOTOR_2_right_1__PRT EQU CYREG_PRT0_PRT
MOTOR_2_right_1__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
MOTOR_2_right_1__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
MOTOR_2_right_1__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
MOTOR_2_right_1__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
MOTOR_2_right_1__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
MOTOR_2_right_1__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
MOTOR_2_right_1__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
MOTOR_2_right_1__PS EQU CYREG_PRT0_PS
MOTOR_2_right_1__SHIFT EQU 3
MOTOR_2_right_1__SLW EQU CYREG_PRT0_SLW
BCLK__BUS_CLK__HZ EQU 24000000
BCLK__BUS_CLK__KHZ EQU 24000
BCLK__BUS_CLK__MHZ EQU 24
CYDEV_CHIP_DIE_LEOPARD EQU 1
CYDEV_CHIP_DIE_PSOC4A EQU 26
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
CYDEV_CHIP_MEMBER_4A EQU 26
CYDEV_CHIP_MEMBER_4AA EQU 25
CYDEV_CHIP_MEMBER_4AB EQU 30
CYDEV_CHIP_MEMBER_4AC EQU 14
CYDEV_CHIP_MEMBER_4AD EQU 15
CYDEV_CHIP_MEMBER_4AE EQU 16
CYDEV_CHIP_MEMBER_4D EQU 20
CYDEV_CHIP_MEMBER_4E EQU 6
CYDEV_CHIP_MEMBER_4F EQU 27
CYDEV_CHIP_MEMBER_4G EQU 4
CYDEV_CHIP_MEMBER_4H EQU 24
CYDEV_CHIP_MEMBER_4I EQU 32
CYDEV_CHIP_MEMBER_4J EQU 21
CYDEV_CHIP_MEMBER_4K EQU 22
CYDEV_CHIP_MEMBER_4L EQU 31
CYDEV_CHIP_MEMBER_4M EQU 29
CYDEV_CHIP_MEMBER_4N EQU 11
CYDEV_CHIP_MEMBER_4O EQU 8
CYDEV_CHIP_MEMBER_4P EQU 28
CYDEV_CHIP_MEMBER_4Q EQU 17
CYDEV_CHIP_MEMBER_4R EQU 9
CYDEV_CHIP_MEMBER_4S EQU 12
CYDEV_CHIP_MEMBER_4T EQU 10
CYDEV_CHIP_MEMBER_4U EQU 5
CYDEV_CHIP_MEMBER_4V EQU 23
CYDEV_CHIP_MEMBER_4W EQU 13
CYDEV_CHIP_MEMBER_4X EQU 7
CYDEV_CHIP_MEMBER_4Y EQU 18
CYDEV_CHIP_MEMBER_4Z EQU 19
CYDEV_CHIP_MEMBER_5A EQU 3
CYDEV_CHIP_MEMBER_5B EQU 2
CYDEV_CHIP_MEMBER_6A EQU 33
CYDEV_CHIP_MEMBER_FM3 EQU 37
CYDEV_CHIP_MEMBER_FM4 EQU 38
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 EQU 34
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 EQU 35
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 EQU 36
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
CYDEV_CHIP_REVISION_4AA_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4AB_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4AC_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4AD_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4AE_PRODUCTION EQU 0
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
CYDEV_CHIP_REVISION_4W_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4X_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4Y_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4Z_PRODUCTION EQU 0
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
