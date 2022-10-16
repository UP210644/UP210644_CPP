/* Unidad 2. Ejercicio 6
   Autor: Isaias Moreno Luna
   Fecha: 07/10/2022
   Descripción: Ejercicio que imprime la factura

Realizar un programa que lea indefinidamente cantidades de productos y su precio, y al final
indique el total de la factura. Para saber que se ha terminado con la compra, se deberá
ingresar un 0 en la cantidad.
*/

#include <iostream>
using namespace std;

int main()
{
    int numproducto = 1;
    float precio, cantidad, total = 0;
    cout << "Bienvenido, inserte la cantidad y el precio de sus productos. Para finalizar el programa toque la tecla 0\n\n";
    do
    {
        cout << "Producto " << numproducto << "\ncantidad: ";
        cin >> cantidad;
        if (cantidad <= 0)
        {
            cout << "\nCantidad no valida\n";
            break;
        }
        cout << "Precio: ";
        cin >> precio;
        if (precio < 0)
        {
            cout << "\nCantidad no valida\n";
            break;
        }
        numproducto++;
        total += (precio * cantidad);
    } while (precio != 0);
    cout << "\nInsertaste una cantidad de " << numproducto - 2 << " productos diferentes. ";
    cout << "\nTu total es " << total << "$ \n\n";
    return 0;
}