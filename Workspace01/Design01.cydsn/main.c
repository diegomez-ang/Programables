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
    PWM_2_Start();
    Clock_1_Start();
    
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */

    for(;;)
    {       
      
   //MOTORES A LA DERECHA
        
        // MOTOR1
        
         for(i=0; i<510; i++)
        {
            PWM_WriteCompare1(i);    
            CyDelay(10); 
            
            //MOTOR 2
           
            for(i=0; i<310; i++){
                PWM_2_WriteCompare1(i);
                CyDelay(10);                   
            }
                PWM_2_WriteCompare1(510);
                CyDelay(4000);
        }
        for(i=510; i>0; i--){
            PWM_WriteCompare2(i);
            CyDelay(10);
            
            //MOTOR 2
            
            
         
      
    }
}

/* [] END OF FILE */
