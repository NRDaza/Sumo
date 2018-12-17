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

int Contador=0;
int time=0;
int time1=0;
float Distancia=100.0;

//------------------FUNCIONES -----------------------------

void Avanzar(){
     STBY_Write(1);
     PWM1_WriteCompare2(0);
     PWM2_WriteCompare2(0);
    
    
     PWM1_WriteCompare1(90);
     PWM2_WriteCompare1(90);

}
void Retroceder (){
    
     STBY_Write(1);
     PWM1_WriteCompare1(0);
     PWM2_WriteCompare1(0);
    
     PWM1_WriteCompare2(90);
     PWM2_WriteCompare2(90);

}

void GirarD(){
    
     STBY_Write(1);   
     PWM1_WriteCompare1(60);
     PWM2_WriteCompare2(0);
    
     PWM1_WriteCompare2(0);
     PWM2_WriteCompare1(0);


}


void GirarI (){
     
    STBY_Write(1);
     PWM1_WriteCompare1(0);
     PWM2_WriteCompare2(0);
    
     PWM1_WriteCompare2(0);
     PWM2_WriteCompare1(60);

}
void Stop(){
    
    STBY_Write(0);
}

//---------------------------------------------------------
//--------------INTERRUPCIONES PISO-----------------------

CY_ISR(Sensor_1){
    
   Retroceder();
   CyDelay(200);
   S1_ClearInterrupt();
}
CY_ISR(Sensor_2){
    
   Retroceder();
   CyDelay(200);
   S2_ClearInterrupt();
}
//-----------------------------------------------------

int main(void)
{
    PWM1_Start();
    PWM2_Start();
    Timer_Start();
    
    CyGlobalIntEnable; /* Enable global interrupts. */

   /* INFR1_StartEx(Sensor_1);
    INFR1_StartEx(Sensor_2);  */
   
    CyDelay(5000);
    for(;;)
    {
      
        
        //---------------------LECTURA ULTRA SONIDO-------------------  
       
        do{  
        LED2_Write(1);
        Avanzar();
        while(Ekko_Read()==0){      //Generacion de pulso en trigger
            Control_Write(1);
            CyDelay(10u);
            Control_Write(0);
            CyDelay(1);             //Espera pulsos generados por el sensor
         }
        
        while(Ekko_Read()==1){};
        Contador=65535-Timer_ReadCounter(); // timer cuenta descendentemente;
        Distancia = Contador/58.0;          // Formula datasheet para pasar a "cm"
        }
        while(Distancia<25.0);
        LED2_Write(0);
       //-------------------------------------------------------------------------
       // --------------------------SENSOR PISO-----------------------------------
        time=0;
        Slinea_SetDriveMode(Slinea_DM_STRONG);
        Slinea_Write(1);
        CyDelay(12u);
        Slinea_SetDriveMode(Slinea_DM_DIG_HIZ);
        while(Slinea_Read()){
           time=time+1;
        }
            LED_Write(0);
        if(time<2500){
            LED_Write(1);
            Retroceder(); // BLANCO
            CyDelay(700);
            GirarD();   
            CyDelay(2000);
        }
        else{
          LED_Write(0);
          GirarD();
        }
        //--------------------------------------------------  
        time1=0;
        Slinea1_SetDriveMode(Slinea1_DM_STRONG);
        Slinea1_Write(1);
        CyDelay(12u);
        Slinea1_SetDriveMode(Slinea1_DM_DIG_HIZ);
        while(Slinea1_Read()){
           time1=time1+1;
        }
            LED1_Write(0);
        if(time1<2500){
            LED1_Write(1);
            Retroceder(); // BLANCO
            CyDelay(700);
            GirarI();   
            CyDelay(2000);
        }
        else{
          LED1_Write(0);
          GirarD(); 
        }
        //------------------------------------------------------------------------
        
        
      
    }
        
       
  
}

/* [] END OF FILE */
