/* Unidad 2. Ejercicio 2
   Autor: Isaias Moreno Luna
   Fecha: 26/09/2022
   Descripción: Ejercicio de Beneficios

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

#include <iostream>
using namespace std;

int main(){
    double calificacion;
    double bono = 2400;

    cout<<"Ingrese su calificación anual: \n0.0      0.4      0.6+\n";
    cin>>calificacion;

    if (calificacion == 0.0){
        cout<<"De acuerdo a tu calificación, tu bono es de 0";
        cout<<"\nRendimiento inaceptable.";
    }else{
        if (calificacion == 0.4){
            cout<<"De acuerdo a tu calificación, tu bono es de " <<bono*calificacion;
            cout<<"\nRendimiento aceptable.";
        }else{
            if (calificacion >= 0.6 && calificacion <= 1){
                cout<<"De acuerdo a tu calificación, tu bono es de : " <<bono*calificacion;
                cout<<"\nRendimiento meritorio.";
            }else{
                cout<<"Valor inválido";
            }
        }
    }


    return 0;
}