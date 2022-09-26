/* Unidad 2. Ejercicio sobre el uso del if 
   Autor: Isaias Moreno Luna
   Fecha: 24/09/2022
   Descripción: Programa con el uso del if
*/

#include <iostream>
using namespace std;

//------------------ MAIN FUNCTION ---------------------

int main(){
    int num;
    int data = 1;//Establish data value as integer 1

    cout << "Ingresa un numero entero" << endl;
    cin >> num;
//EQUAL CHECK
    if (num == data){//Boolean check
        cout << "El numero es igual al dato" << endl;//Print sentence
    }
    else//if previous condition is not TRUE, do this
    {
        cout << "El numero no es igual al dato" << endl;
    }
//BIG CHECK
    if (num > data){//Boolean check
        cout << "El numero es mayor al dato" << endl;//Print sentence
    }
    else//if previous condition is not TRUE, do this
    {
        cout << "El numero no es mayor al dato" << endl;
    }
 //BIGEQUAL CHECK   
   if (num >= data){//Boolean check
        cout << "El numero es mayor o igual al dato" << endl;//Print sentence
    }
    else//if previous condition is not TRUE, do this
    {
        cout << "El numero no es mayor ni igual al dato" << endl;
    }
//LIL CHECK
   if (num < data){//Boolean check
        cout << "El numero es menor al dato" << endl;//Print sentence
    }
    else//if previous condition is not TRUE, do this
    {
        cout << "El numero no es menor al dato" << endl;
    }
//LILEQUAL CHECK
   if (num <= data){//Boolean check
        cout << "El numero es menor o igual al dato" << endl;//Print sentence
    }
    else//if previous condition is not TRUE, do this
    {
        cout << "El numero no es menor ni igual al dato" << endl;
    }  
//DIF CHECK
   if (num != data){//Boolean check
        cout << "El numero es diferente al dato" << endl;//Print sentence
    }
    else//if previous condition is not TRUE, do this
    {
        cout << "El numero no es diferente al dato" << endl;
    }  

    return 0;
}