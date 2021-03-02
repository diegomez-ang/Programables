/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"

uint8  contador;
int i=0;
int j=0;

int main(void)
{
    PWM_Start();
    Clock_1_Start();
    
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */

    for(;;)
    {
        for(i=0; i<255; i++){
            PWM_WriteCompare1(i);
            CyDelay(10);
        }
        for(i=255; i>0; i--){
            PWM_WriteCompare1(i);
            CyDelay(10);
        }
            CyDelay(500);
            LED_Write(1);
            CyDelay(500);
            LED_Write(0);
            CyDelay(500);
            LED_Write(1);
            CyDelay(500);
            LED_Write(0);
        for(j=0; j<255; j++){
            PWM_WriteCompare2(i);
            CyDelay(10);
        }
        for(j=255; j>0; j--){
            PWM_WriteCompare2(i);
            CyDelay(10);
        }
            CyDelay(500);
            LED_Write(1);
            CyDelay(500);
            LED_Write(0);
            CyDelay(500);
            LED_Write(1);
            CyDelay(500);
            LED_Write(0);
        
          
         
        /*for(i=0; i<255; i++){
            PWM_WriteCompare2(i);
            CyDelay(10);
            for(i=255;1>0;i--){                
                PWM_WriteCompare2(i);
                CyDelay(10);
            }
            
        }*/
        
        /*for(i=255;1>0;i--){
            contador = contador-50;
            PWM_WriteCompare(contador);
            CyDelay(100);
        }
         */   
    }
}

/* [] END OF FILE */
