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

uint8  contador_M1;
uint8 contador_M1_1 = 255;
uint8 contador_M2;
uint8 contador_M2_1 = 255;
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
        
        // Derecha
        
         for(i=0; i<255; i++)
        {
            contador_M1++;
            PWM_WriteCompare1(i);
            CyDelay(20);
            /*if(i>=85){
                PWM_2_WriteCompare1(255);
                LED_Write(1);
            }
            else{
                PWM_2_WriteCompare1(contador_M2);
                LED_Write(0);
            }*/
                
        }   
        ResetPWM_Write(1);
        ResetPWM_Write(0);
        
        for(i=255;i>0;i--){
            PWM_WriteCompare2(i);
            CyDelay(20);   
        }
       
        /*for(i=0;i<255;i++)
        {
            contador_M1++;
            PWM_WriteCompare2(contador_M1);
        }
        CyDelay(100);*/
        
       
        
       /* for(i=255;i>0;i++)
        {
            contador_M1--; 
            contador_M2--;
            PWM_WriteCompare1(contador_M1); 
            CyDelay(20);                 
        }*/
        
        
        
        
        /*for(j=0;j<125;j++){
            contador_M2=0;
            contador_M2 = contador_M2 + j;
            PWM_2_WriteCompare2(contador_M2); 
        }*/
            //MOTOR 2
            
            
         
      
    }
}

/* [] END OF FILE */
