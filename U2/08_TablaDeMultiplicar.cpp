/* Unidad 2. Ejercicio 8
   Autor: Isaias Moreno Luna
   Fecha: 12/10/2022
   Descripción: Programa que imprime una tabla de multiplicar hasta donde el usuario la quiere
*/

#include <iostream>
using namespace std;

int main()
{
    int counter, numberinput;
    do
    {
        cout << "Write a number to multiply by ";
        cin >> numberinput;
        cout << "How many times do you want it multiplied ";
        cin >> counter;
        if (counter <= 0)
        {
            cout << "\nInvalid written number, try again please\n\n";
        }
        else
        {
            for (int i = 0; i < 65; i++)
            {
                cout << "-";
            }
            cout << "\n";
            for (int i = 1; i <= counter; i++)
            {
                cout << "|\t" << i << "\tX\t" << numberinput << "\t\t=\t" << (numberinput * i) << "\t\t|\n|";
                for (int i = 0; i < 63; i++)
                {
                    cout << "-";
                }
                cout << "|\n";
            }
        }
    } while (counter <= 0);

    return 0;
}