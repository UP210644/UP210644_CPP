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
    float price, amount, total = 0;
    cout << "Please input the amount and price of your products. To end type 0\n\n";
    do
    {
        cout << "Product " << numproducto << "\nAmount: ";
        cin >> amount;
        if (amount <= 0)
        {
            cout << "\nInvalid amount, exiting program\n";
            numproducto++;
            break;
        }
        cout << "Price: ";
        cin >> price;
        if (price < 0)
        {
            cout << "\nInvalid amount, exiting program\n";
            numproducto++;
            break;
        }
        numproducto++;
        total += (price * amount);
    } while (price != 0);
    cout << "\nYou've inputted a total of " << numproducto - 2 << " different products. ";
    cout << "\nYour total is: " << total << "$ \n\n";
    return 0;
}