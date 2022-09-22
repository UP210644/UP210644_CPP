/* Unidad 2. Uso del if 
   Autor: Isaias Moreno Luna
   Fecha: 22/09/2022
   Descripción: Muestra el uso del if simple
*/

#include <iostream>

using namespace std;
int main()
{
   int numero;
   int dato = 1;

   cout << "Ingresa un numero entero: ";
   cin >> numero;
   if (numero == dato){
    cout << "El número es igual a dato" << endl;
   }   
   
    return 0;
}