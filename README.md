# Overview

 Robot Angular con 3 GDL controlado por medio de una interfaz grafica en Python/Tkinter y un microcontrolador ESP32 mediante motores paso a paso.
 
 <img src="preview.png"/>
 
---

## Project Structure

 * **Embedded** - Codigo embedido en C/C++ usando el framework de Arduino y su IDE

 * **Tkinter Code** - Codigo de alto nivel para la interfaz grafica y representacion visual del robot que implementa la libreria Pillow para el manejo de imagenes

 * **Pyserial Code** - Codigo que define la interfaz de comunicacion serial entre la PC y el microcontrolador implementando la libreria PySerial

 * **Schematics** - Documentacion referente a las conexiones y montaje general del hardware implementado
 
 * **CAD Models** - Referencia de modelos 3D usados para el robot.
 
---

## Features

 El proyecto integra control directo de los motores paso a paso mediante una GUI simple ademas de una serie de funciones presentadas como botones extra para ejecutar patrones de movimiento especificos. 
 El robot tambien posee elementos terminales intercambeables destinados a demostrar la utilidad de los patrones de movimiento integrados en la GUI. 
 Funciones como Control de Velocidad por sensores y mecanismo complejos de transmision aun estan en contemplacion. 
 
---

## Prerequisites 

 * **Hardware**: 
   1. Placa Espressif ESP32
   2. Motores Paso a Paso
   3. Cable Mini-USB
   
 * **Software**:
   1. Arduino IDE
   1. Python 3.x
   
 * **Pip Packages**:
   1. Pillow 
   2. PySerial
	
---

## Installation/Setup

[Bajo desarrollo]
