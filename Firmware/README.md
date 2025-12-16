# Getting Started

El codigo deberia de poder ser compilado con Arduino IDE de acuerdo al ESP32-Core de Arduino. Revisar [Arduino-ESP32](https://github.com/espressif/arduino-esp32)

Siendo ese el caso, la compilacion y subida del programa en la placa ESP32 seria como el estandar para el entorno de Arduino. Un desarrollo posterior de este proyecto contempla migrar a otro framework en busca de mayor enficiencia y funcionalidades suponiendo en consecuencia un metodo de building y setup distintos. 

Puedes confirmar el metodo de subida leyendo el tutorial referente al tema en la pagina de Espressif: (https://docs.espressif.com/projects/arduino-esp32/en/latest/tutorials/basic.html) 

Si se tienen dudas sobre la coleccion de herramientas que permite la programacion del ESP32 usando la IDE de arduino puedes revisar el siguiente enlace: (https://docs.espressif.com/projects/arduino-esp32/en/latest/)

# Code Structure

El codigo implementa dos funciones principales: uno que define la interfaz de comunicacion serial con la PC y otro que permite el control de los motores paso a paso.

# Code Reference

**Seria bueno proveer de una referencia completa sobre las funciones del codigo en esta parte una vez se tenga completo el mismo**

# Libraries

Como se explica en el README de inicio, las liberias que debes tener instalados en tu IDE son:

 * [AccelStepper] (https://github.com/swissbyte/AccelStepper)
 * [Serial UART] (https://github.com/espressif/arduino-esp32/tree/2b15254d0b28329dc7af3fd8f9757e125e682660)

Se han barajeado algunas opciones sobre la libreria para el control de motores paso a paso, pero hasta ahora el unico que parece marcar un standar es la libreria AccelStepper. 

# Lib Docs

Deberias encontrar documentacion de las librierias usadas aqui:

[AccelStepper] (https://www.airspayce.com/mikem/arduino/AccelStepper/)

[Serial (UART)] (https://github.com/espressif/arduino-esp32/blob/2b15254d0b28329dc7af3fd8f9757e125e682660/docs/en/api/serial.rst)

