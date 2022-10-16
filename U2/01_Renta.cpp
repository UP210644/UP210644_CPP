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
pantalla el tipo impuesto que le corresponde.
*/

#include <iostream>
using namespace std;

int main(){
    float Renta; 
    float Impuesto;
    cout << "Ingrese su renta anual: ";
    cin >> Renta;
    if (Renta > 0 )//Is the input a valid number?
    {
        if (Renta >= 60000)
        {
            Impuesto = Renta*.45;
        }
        else if (Renta >= 35000)
        {
            Impuesto = Renta*.30;
        }
        else if (Renta >= 20000)
        {
            Impuesto = Renta*.20;
        }
        else if (Renta >= 10000)
        {
            Impuesto = Renta*.15;
        }
        else if (Renta >= 0)
        {
            Impuesto = Renta*.05;
        }
        //Print out everything
        cout << endl << "Su renta es de: $" << Renta << endl;//Rent value inputted
        cout << "Con un impuesto del " << (Impuesto/Renta)*100 << "%: $" << Impuesto << endl; //Print out tax percentage followed by money value
        cout << "Usted tiene que pagar un total de: $" << Renta + Impuesto << endl << "\nVisualización en tabla:\n"; //Table visualization (Alternative view)
        cout << "RENTA      IMPUESTO(%)     IMPUESTO($)     TOTAL($)"<< endl;
        cout << "$ " << Renta << "      " << (Impuesto/Renta)*100 << "%             $ " << Impuesto << "         $ " << Renta + Impuesto << endl;
    }
    else 
    {
        cout << "El dato que usted ingreso es incorrecto :( ; porfavor, intentelo de nuevo" << endl;//In case the value is not valid; ask the user to try again.
    }
    return 0;
}