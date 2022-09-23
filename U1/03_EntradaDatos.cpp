/* Unidad 1. Entrada de datos
   Autor: Isaias Moreno Luna
   Fecha: 22/09/2022
   Descripción: Muestra la forma de ingresar tipos de datos por el usuario
*/

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{

    int entero;
    float flotante;
    double grande;
    char caracter;
    
    cout << "Este programa muestra el ingreso de datos por el usuario. \n";
    cout << "Ingresa un dato de tipo entero: ";
    cin >> entero;
    cout << "El dato ingresado es: " << entero << endl;
    
    cout << "=================" << endl;

    printf("Usando la función printf y scanf\n");
    printf("Ingresa un dato de tipo entero: ");
    scanf("%d", &entero);
    printf("El dato ingresado es: %i \n", entero);

    return 0;
}