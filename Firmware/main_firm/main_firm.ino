#include<Arduino.h>
#include<AccelStepper.h>

//Character definitions
//Consult main.py

constexpr char MOVE_JOINT1_UP = 'q'
constexpr char MOVE_JOINT1_DOWN = 'w'
constexpr char MOVE_JOINT2_UP = 'e'
constexpr char MOVE_JOINT2_DOWN = 'r'
constexpr char MOVE_JOINT3_RIGHT = 's'
constexpr char MOVE_JOINT3_LEFT = 't'


//Input del usuario

  char userInput;

//Los Steppers seran llamados como articulaciones (joints) y seran enumerados como lo dice el esquematico en Hardware/ 

  AccelStepper joint1(AccelStepper::FULL2WIRE, 33, 31); // Hay que terminar de confirmar el nombre de los pines en ESP32 Arduino-Core
  AccelStepper joint2(AccelStepper::FULL2WIRE, 30, 29);
  AccelStepper joint3(AccelStepper::FULL2WIRE, 28, 27);

  void setup() {
      Serial.begin(9600);

}

void loop() {
  
  if(Serial.available() > 0){ //Habilita la lectura de userInput solo cuando hay bits disponibles en el buffer de Rx
                              
          userInput = Serial.read();
          
          //En funcion del caracter recibido ejecutar la accion correspondiente (una cadena de if else me parece mas apropiado que switch case)

          if (userInput == MOVE_JOINT1_UP){

	    while(userInput == MOVE_JOINT1_UP);
              joint1.foo(); //Especifica la accion que se quiera hacer.
                            //Lo que se quiere: Que un motor rote siempre que el boton
                            //en la GUI este pulsado pero solo hasta cierto limite.
                                
          } else if(userInput == MOVE_JOINT1_DOWN){

	    while(userInput == MOVE_JOINT1_DOWN)              
              joint1.run(); // Statement para movimiento hacia abajo del joint1
              
          } else if(userInput == MOVE_JOINT2_UP){

	    while(userInput == MOVE_JOINT2_UP);
              
              // Statement para movimiento hacia arriba del joint2
              
          } else if(userInput == MOVE_JOINT2_DOWN){

	    while(userInput == MOVE_JOINT2_DOWN);
	    
              // Statement para movimiento hacia abajo del joint2
              
          } else if(userInput == MOVE_JOINT3_RIGHT){

	    while(userInput == MOVE_JOINT3_RIGHT);
	    
              // Statement para movimiento hacia la derecha del joint3
              
          } else if(userInpur == MOVE_JOINT3_LEFT){

	    while(userInput == MOVE_JOINT3_LEFT);
	    
              // Statement para movimiento hacia la izquierda del joint3
              
          }
  }
}


