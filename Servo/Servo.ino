

  #include <Servo.h>   //Biblioteca que ya viene con el ID de arduino. 

  Servo servo1;        //Se crea un objeto con las caracteristicas del servo 
  int llave = 0;       //Variable con el bit para cerrar o abrir 

void setup() {

 

}

void loop() {

  if (llave == 1){                 
    servo1.write(0);             //Manda instrucciones de giro al servo de cero grados 
    delay(700);                  //Espera 0.7 segundos a que el servo llegue a su pisicion 
    
  }else if(llave == 0){
    servo1.write(75);            //Manda instrucciones de giro al servo de cero grados         
    delay(700);  
  }  

}
