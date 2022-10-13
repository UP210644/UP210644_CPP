/* Unidad 2. Ejercicio 8
   Autor: Isaias Moreno Luna
   Fecha: 12/10/2022
   Descripción: Programa que imprime una tabla de multiplicar hasta donde el usuario la quiere
*/

#include <iostream>
using namespace std;

int main(){
    int num;
    int multi;
    cout << "Inserte el numero al cual quiere multiplicar: \n";
    cin >> num;

    cout << "Cuantas veces quiere multiplicar al numero? \n";
    cin >> multi;

for (int i = 0; i <= num; i++)
{
    cout << "|";

    for (int j = 0; j <= 31; j++)
    {
        cout << "-";
    }

    cout << "|";
    cout << "\n";
    cout << "|\t"<<i<<"   x   "<<multi<<"   =   "<<multi*i<<"\t|"<<endl;
}
}