#include <ESP32Servo.h>
#include "BluetoothSerial.h"

#if !defined(CONFIG_BT_ENABLED) || !defined(CONFIG_BLUEDROID_ENABLED)
#error Bluetooth is not enabled! Please run `make menuconfig` to and enable it
#endif

BluetoothSerial SerialBT;


Servo miservo_9;


Servo miservo_7;
Servo miservo_8;

Servo miservo_13;
Servo miservo_14;

Servo miservo_1;
Servo miservo_2;


Servo miservo_16;
Servo miservo_17;

Servo miservo_4;
Servo miservo_5;


Servo miservo_10;
Servo miservo_11;
char instruccion;
unsigned int velocidad = 10;
unsigned int retardo = 200;

void setup() {


 miservo_9.attach(23);



  miservo_7.attach(33);
  miservo_8.attach(32);

  miservo_13.attach(25);
  miservo_14.attach(27);

  miservo_1.attach(22);
  miservo_2.attach(21);
  
  miservo_16.attach(13);
  miservo_17.attach(12);

  miservo_4.attach(4);
  miservo_5.attach(15);
  

  miservo_10.attach(18);
  miservo_11.attach(2);
  
  Serial.begin(115200);
  SerialBT.begin("ARAÑA PATUDONA_00");

}

void loop() {
  if (SerialBT.available()){
    instruccion = SerialBT.read();
  }
 
  switch(instruccion) {
    case 'Z':
      avanzar();
     
      break;
    case 'W':
      atras();
   
      break;
    case 'S':
      izquierda();
    
      break;
    case 'A':
      derecha();
    
      break;
    
      /*case 'B':
      acomodar();
  
      break;*/
      
       case 'M':
      saludar();
     
      break;
  }
  delay(1);
}
  // put your main code here, to run repeatedly:
void avanzar() {
 int fps=0;
  int incremento=0;
  int incrementoPat=0;
  int hombritos[4]={90,90,90,90};
  int rodillas[4]={90,90,90,90};
  int patitas[4]={90,90,90,90};
  //adelante
  while(++fps<=90) {
    if(fps>=50){
      incremento++; 
      if(++incrementoPat>40){ 
        incrementoPat=40;
      }
      miservo_8.write(hombritos[0]-incremento);
      miservo_14.write(patitas[0]+incrementoPat);
      miservo_2.write(hombritos[0]-incremento);
      miservo_17.write(patitas[0]+incrementoPat);
      miservo_5.write(hombritos[0]-incremento);
      miservo_11.write(patitas[0]+incrementoPat);
      delay(velocidad);
    }
  }
  miservo_8.write(90);
  miservo_14.write(90);
  miservo_7.write(130);
  miservo_13.write(50);
  delay(retardo);
  miservo_7.write(90);
  miservo_13.write(90);
  delay(retardo);
  miservo_2.write(90);
  miservo_17.write(90);
  miservo_1.write(130);
  miservo_16.write(50);
  delay(retardo);
  miservo_1.write(90);
  miservo_16.write(90);
  delay(retardo);
  miservo_5.write(90);
  miservo_11.write(90);
  miservo_4.write(130);
  miservo_10.write(50);
  delay(retardo);
  miservo_4.write(90);
  miservo_10.write(90);
  delay(retardo);
}
void atras() {
  int fps1=0;
  int incremen=0;
  int incrementoPat1=0;
  int hombritos1[4]={90,90,90,90};
  int rodillas1[4]={90,90,90,90};
  int patitas1[4]={90,90,90,90};

  while (++fps1<=90) {
    if(fps1>=50) {
      incremen++; 
      if(++incrementoPat1>40) { 
        incrementoPat1=40;
      }
      miservo_8.write(hombritos1[0]+incremen);
      miservo_14.write(patitas1[0]-incrementoPat1);
      miservo_2.write(hombritos1[0]+incremen);
      miservo_17.write(patitas1[0]-incrementoPat1);
      miservo_5.write(hombritos1[0]+incremen);
      miservo_11.write(patitas1[0]-incrementoPat1);
      delay(velocidad);
      }
    }
    miservo_8.write(90);
    miservo_14.write(90);
    miservo_7.write(130);
    miservo_13.write(50);
    delay(retardo);
    miservo_7.write(90);
    miservo_13.write(90);
    delay(retardo);
    miservo_2.write(90);
    miservo_17.write(90);
    miservo_1.write(130);
    miservo_16.write(50);
    delay(retardo);
    miservo_1.write(90);
    miservo_16.write(90);
    delay(retardo);
    miservo_5.write(90);
    miservo_11.write(90);
    miservo_4.write(130);
    miservo_10.write(50);
    delay(retardo);
    miservo_4.write(90);
    miservo_10.write(90);
    delay(retardo);
  
}
void izquierda() {
    int fps2=0;
  int increment=0;
  int incrementoPat2=0;
  int hombritos2[4]={90,90,90,90};
  int rodillas2[4]={90,90,90,90};
  int patitas2[4]={90,90,90,90};
  while(++fps2<=90) {
    if(fps2>=50) {
      increment++; 
      if(++incrementoPat2>40) { 
        incrementoPat2=40;
      }
      miservo_8.write(hombritos2[0]-increment);
      miservo_14.write(patitas2[0]-incrementoPat2);
      miservo_2.write(hombritos2[0]-increment);
      miservo_17.write(patitas2[0]-incrementoPat2);
      miservo_5.write(hombritos2[0]-increment);
      miservo_11.write(patitas2[0]-incrementoPat2);
      delay(velocidad);
    } 
  }
  miservo_5.write(90);
  miservo_14.write(90);
  miservo_13.write(50);
  miservo_4.write(130);
  delay(retardo);
  miservo_13.write(90);
  miservo_4.write(90);
  delay(retardo);
  miservo_2.write(90);
  miservo_17.write(90);
  miservo_16.write(50);
  miservo_1.write(130);
  delay(retardo);
  miservo_16.write(90);
  miservo_1.write(90);
  delay(retardo);
  miservo_8.write(90);
  miservo_11.write(90);
  miservo_10.write(50);
  miservo_7.write(130);
  delay(retardo);
  miservo_10.write(90);
  miservo_7.write(90);
  delay(retardo);
}
void derecha() {
  int fps3=0;
  int incre=0;
  int incrementoPat3=0;
  int hombritos3[4]={90,90,90,90};
  int rodillas3[4]={90,90,90,90};
  int patitas3[4]={90,90,90,90};

  while (++fps3<=90) {
    if(fps3>=50) {
      incre++; 
      if (++incrementoPat3>40) { 
        incrementoPat3=40;
      }
      miservo_8.write(hombritos3[0]+incre);
      miservo_14.write(patitas3[0]+incrementoPat3);
      miservo_2.write(hombritos3[0]+incre);
      miservo_17.write(patitas3[0]+incrementoPat3);
      miservo_5.write(hombritos3[0]+incre);
      miservo_11.write(patitas3[0]+incrementoPat3);
      delay(velocidad);
    }
  }
  miservo_5.write(90);
  miservo_14.write(90);
  miservo_13.write(50);
  miservo_4.write(130);
  delay(retardo);
  miservo_13.write(90);
  miservo_4.write(90);
  delay(retardo);
  miservo_2.write(90);
  miservo_17.write(90);
  miservo_16.write(50);
  miservo_1.write(130);
  delay(retardo);
  miservo_16.write(90);
  miservo_1.write(90);
  delay(retardo);
  miservo_8.write(90);
  miservo_11.write(90);
  miservo_10.write(50);
  miservo_7.write(130);
  delay(retardo);
  miservo_10.write(90);
  miservo_7.write(90);
  delay(retardo);
}

  /*void acomodar() {

  miservo.write(90);
  miservo_3.write(90);
  miservo_6.write(90);
  
  
  miservo_9.write(90);
  miservo_12.write(90);
  miservo_15.write(90);
  
}*/


void saludar() {
  miservo_9.write(15);
   miservo_10.write(50);
     
    for(int x=40; x<=130; x++){
       miservo_11.write(x);
       delay(20);
      }
       miservo_11.write(90);
       miservo_9.write(90);
       miservo_10.write(90);
}
