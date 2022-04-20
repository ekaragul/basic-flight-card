
#include "analogWrite.h"
#include "BluetoothSerial.h"
#include "lsm6dsm.h"
#define delayms 700
#define MotorA D0 
#define MotorA_Rev D1
#define MotorA_ENB D4
#define MotorB D15
#define MotorB_Rev D14
#define MotorB_ENB D13 
#define MotorC D5
#define MotorC_Rev D6
#define MotorC_ENB D7 
#define MotorD D12
#define MotorD_Rev D10
#define MotorD_ENB D9




BluetoothSerial BT;

LSM6DSM IMU;                                   

void setup(){
  
 
  BT.begin("MERGEN37");
  Serial.begin(115200);                        
  IMU.begin();
  
  pinMode(MotorA, OUTPUT); 
  pinMode(MotorA_Rev, OUTPUT);   
  pinMode(MotorA_ENB, OUTPUT);  

 pinMode(MotorB, OUTPUT); 
  pinMode(MotorB_Rev, OUTPUT);   
  pinMode(MotorB_ENB, OUTPUT); 

   pinMode(MotorC, OUTPUT); 
  pinMode(MotorC_Rev, OUTPUT);   
  pinMode(MotorC_ENB, OUTPUT); 

   pinMode(MotorD, OUTPUT); 
  pinMode(MotorD_Rev, OUTPUT);   
  pinMode(MotorD_ENB, OUTPUT); 
  analogWrite(MotorA_ENB,255);
  analogWrite(MotorB_ENB,255);  
  analogWrite(MotorC_ENB,255); 
  analogWrite(MotorD_ENB,255); 


}

void loop() {
  BT.print("X Ekseni Akselometre Degeri: ");
  BT.println(IMU.readFloatAccelX());
  BT.print("Y Ekseni Aksolemetro Degeri: ");
  BT.println(IMU.readFloatAccelX());
  BT.println(" ");
  BT.println(" ");
  BT.println(" ");
  BT.println(" ");
  BT.println(" ");
  BT.println(" ");
  BT.println(" ");
  BT.println(" ");
  BT.println(" ");
  BT.println(" ");
  BT.println(" ");
  BT.println(" ");
  BT.println(" ");
  BT.println(" ");
  BT.println(" ");
  BT.println(" ");
  BT.println(" ");
  BT.println(" ");
  BT.println(" ");
  BT.println(" ");
  BT.println(" ");
  BT.println(" ");
  BT.println(" ");
  BT.println(" ");
  


  

  

  
  
  if (IMU.readFloatAccelX()>0.3){


     while (IMU.readFloatAccelX()>0.3){


     digitalWrite(MotorB,HIGH);
     digitalWrite(MotorB_Rev,LOW);
     digitalWrite(MotorD,HIGH);
     digitalWrite(MotorD_Rev,LOW);
     
     }

     digitalWrite(MotorB,LOW);
     digitalWrite(MotorB_Rev,LOW);
     digitalWrite(MotorD,LOW);
     digitalWrite(MotorD_Rev,LOW);


     
      
      
    }


    

  if (IMU.readFloatAccelX()<-0.3){


     while (IMU.readFloatAccelX()<-0.3){


     digitalWrite(MotorA,HIGH);
     digitalWrite(MotorA_Rev,LOW);
     digitalWrite(MotorC,HIGH);
     digitalWrite(MotorC_Rev,LOW);
     
     }

     digitalWrite(MotorA,LOW);
     digitalWrite(MotorA_Rev,LOW);
     digitalWrite(MotorC,LOW);
     digitalWrite(MotorC_Rev,LOW);

    

    
    
    }

  if (IMU.readFloatAccelX()>-0.3&&IMU.readFloatAccelX()<0.3){

      //...x stable

    
}


  if (IMU.readFloatAccelY()>0.3){

     while (IMU.readFloatAccelY()>0.3){


     digitalWrite(MotorD,HIGH);
     digitalWrite(MotorD_Rev,LOW);
     digitalWrite(MotorA,HIGH);
     digitalWrite(MotorA_Rev,LOW);
     
     }

     digitalWrite(MotorD,LOW);
     digitalWrite(MotorD_Rev,LOW);
     digitalWrite(MotorA,LOW);
     digitalWrite(MotorA_Rev,LOW);
    
  
    }
    
  if (IMU.readFloatAccelY()<-0.3){

     while (IMU.readFloatAccelY()<-0.3){


     digitalWrite(MotorC,HIGH);
     digitalWrite(MotorC_Rev,LOW);
     digitalWrite(MotorB,HIGH);
     digitalWrite(MotorB_Rev,LOW);
     
     }

     digitalWrite(MotorC,LOW);
     digitalWrite(MotorC_Rev,LOW);
     digitalWrite(MotorB,LOW);
     digitalWrite(MotorB_Rev,LOW);
     }


    if (IMU.readFloatAccelY()>-0.3&&IMU.readFloatAccelY()<0.3){


   
    

    
    
    }
}










    


     
