/* Unidad 2. Practica 2
   Autor: Isaias Moreno Luna
   Fecha: 26/09/2022
   Descripción: Ejercicio de Beneficios
*/

#include <iostream>
using namespace std;

/*
En una determinada empresa, sus empleados son evaluados al final de cada año. 
Los puntos que pueden obtener en la evaluación comienzan en 0.0 y pueden ir aumentando, 
traduciéndose en mejores beneficios. Los puntos que pueden conseguir 
los empleados pueden ser 0.0, 0.4, 0.6 o más, pero no valores intermedios 
entre las cifras mencionadas. A continuación se muestra una tabla con los 
niveles correspondientes a cada puntuación. La cantidad de dinero conseguida
en cada nivel es de $2,400 multiplicada por la puntuación del nivel.

Nivel	Puntuación
Inaceptable	0.0
Aceptable	0.4
Meritorio	0.6 o más
Escribir un programa que lea la puntuación del usuario e indique su nivel de rendimiento, 
así como la cantidad de dinero que recibirá el usuario.
*/


int main(){

    float inaceptable;
    float aceptable;
    float  meritorio;
    float bonificacion;
    float nivel; 
    float nivelderendimiento; 
    float puntuacion;

    cout<< "Ingrese su puntuacion: " << endl;
    cin >> inaceptable;
    cin >> aceptable;
    cin >> meritorio;
    if (inaceptable == 0.0;
    {
        puntuacion = inaceptable*bonificacion;
    }
    if (puntuacion == aceptable);
    {
        puntuacion = aceptable*bonificacion;
    }
    if (puntuacion == meritorio);
    {
        puntuacion = meritorio*bonificacion;
    }
    cout << "su nivel de rendimiento es: " << endl;
    
}