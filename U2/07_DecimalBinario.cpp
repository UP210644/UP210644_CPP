/* Unidad 2. Ejercicio 7
   Autor: Isaias Moreno Luna
   Fecha: 07/10/2022
   Descripción: Ejercicio que cambia un numero decimal a binario

Realice un programa que realice la conversión de decimal a binario, solo para números
enteros mayores a 0. El resultado puede ser mostrado mediante una variable entera o en un
conjunto de caracteres.
*/

#include <iostream>
using namespace std;

int main()
{
    int decimal, num;
    string binary;
    do
    {
        cout << "Input a decimal number \n";
        cin >> num;
        if (num > 0)
        {
            while (num > 0)
            {
                if (num % 2 == 0)
                {
                    binary = '0' + binary;
                }
                else
                {
                    binary = '1' + binary;
                }
                num /= 2;
            }
            cout << "The number you've inputted is " << binary;
            cout << endl;
        }
        else if (num == 0)
        {
            cout << "You've inputted a 0\n";
        }
        else
        {
            cout << "The number must be greater than 0\n";
        }
    } while (num < 0);
    return 0;
}