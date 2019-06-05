
#include <Servo.h>   //Biblioteca que ya viene con el ID de arduino. 

 Servo servo1;        //Se crea un objeto con las caracteristicas del servo 
  int llave = 1;      //Variable con el bit para cerrar o abrir

void setup() {

   servo1.attach(5, 600 , 1500);    //Conecta el servo1 al pin3, define el minimo y ancho del pulso para el rango de movimiento del servo 
                                   //El pulso es determinado por el fabricante 
}

void loop() {

  servo(); //Intancia para usar la funcion 
}

void servo(){
  
   if (llave == 1){                 
    servo1.write(0);             //Manda instrucciones de giro al servo de cero grados 
    delay(700);                  //Espera 0.7 segundos a que el servo llegue a su pisicion 
    
  }else if(llave == 0){
    servo1.write(75);            //Manda instrucciones de giro al servo de 75 grados    
    delay(700);                  //Espera 0.7 segundos a que el servo llegue a su posision 
  }  
  
}
