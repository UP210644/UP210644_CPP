/* Unidad 2. Ejercicio 5
   Autor: Isaias Moreno Luna
   Fecha: 03/10/2022
   Descripción: Ejercicio sobre la temperatura corporal

Hacer un programa en el que se ingresen 6 temperaturas y determine el promedio, la mas
baja y la mas alta.

*/

#include <iostream>
using namespace std;

int main()
{
    float temperatura, promedio, sumadetemperatura= 0, min = 99999, max = -9999;
    int contador = 1;
    do
    {
        cout << "Insert the temperature: ";
        cin >> temperatura;
        if (temperatura >= max)
        {
            max = temperatura;
        }
        if (temperatura <= min)
        {
            min = temperatura;
        }
        sumadetemperatura += temperatura;
        contador++;
    } while (contador <= 6);
    promedio = sumadetemperatura / 6;
    cout << "The average is " << promedio << " C° \nThe lowest temperature is " << min << " C° \nThe highest temperature is " << max << " C° \n";
    return 0;
}