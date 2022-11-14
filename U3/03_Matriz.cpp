/* Unidad 3. Ejercicio 3
   Autor: Isaias Moreno Luna
   Fecha: 14/11/2022
*/

#include <iostream>
using namespace std;

int main()
{
    int conjunto[5][5];
    for (int row = 0; row < 5; row++)
    {
        for (int col = 0; col < 5; col++)
        {
            cout << "Valor en [" << row << "][" << col << "]";
            cin >> conjunto[row][col];
        }
    }
    for (int row = 0; row < 5; row++)
    {
        for (int col = 0; col < 5; col++)
        {
            cout << conjunto[row][col]<< "\t";
        }
        cout << endl;
    }

    return 0;
}