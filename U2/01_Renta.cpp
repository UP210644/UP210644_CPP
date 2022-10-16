/* Unidad 2. Ejercicio 1
   Autor: Isaias Moreno Luna
   Fecha: 26/09/2022
   Descripción: Ejercicio de Renta

Los tramos impositivos para la declaración de la renta en un determinado país son los siguientes:
Renta	Tipo impositivo
Menos de $10,000	5%
Entre $10,000 y $20,000	15%
Entre $20,000 y $35,000	20%
Entre $35,000 y $60,000	30%
Más de $60,000	45%
Escribir un programa que pregunte al usuario su renta anual y muestre por 
pantalla el tipo impositivo que le corresponde.
*/

#include <iostream>
using namespace std;

int main()
{
    float Rent;
    float Tax;
    
    cout << "Enter your annual rent: ";
    cin >> Rent;
    
    if (Rent>=0){
        if (Rent<10000){
            Tax = .05;
        }
        else if (Rent>=10000 and Rent<20000){
            Tax = .15;
        } 
        else if (Rent>=20000 and Rent<35000){
            Tax = .20;
        }
        else if (Rent>=35000 and Rent<60000){
            Tax = .30;
        }
        else if (Rent>=60000){
            Tax = .45;
        }
        
        cout << "The tax rate is " << (Tax*100) << "% \n";
        Tax= Rent * Tax;
        cout << "Which is the equivalent $" << Tax << endl;
    }
    else {
        cout << "The rent you entered is ncorrect. \n";  
    }
   return 0;
   
}