/* Unidad 2. Ejercicio 5
   Autor: Isaias Moreno Luna
   Fecha: 03/10/2022
   Descripción: Ejercicio sobre la temperatura corporal

Hacer un programa en el que se ingresen 6 temperaturas y determine el promedio, la mas
baja y la mas alta.

*/

#include <iostream>
using namespace std;

int main(){
    int contador=0;
    int minimo, maximo;
    float temperatura;
    float tempAcum=0;
    do
    {
        cout << "Ingresa la temperatura: ";
        cin >> temperatura;
        tempAcum += temperatura;
        contador++;
    } while (contador < 6);

    cout << "El promedio es: " << tempAcum/6 << endl;

    return 0;
    
}