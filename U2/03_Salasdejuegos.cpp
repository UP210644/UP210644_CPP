/* Unidad 2. Ejercicio 3
   Autor: Isaias Moreno Luna
   Fecha: 26/09/2022
   Descripción: Ejercicio de Sala de videojuegos
   
Escribir un programa para una empresa que tiene salas de juegos para todas las edades y
quiere calcular de forma automática el precio que debe cobrar a sus clientes por entrar. El
programa debe preguntar al usuario la edad del cliente y mostrar el precio de la entrada. Si
el cliente es menor de 4 años puede entrar gratis, si tiene entre 4 y 18 años debe pagar $5 y
si es mayor de 18 años, $10.
*/

#include <iostream>
using namespace std;

int main(){
    int edad,precio;
    cout << "Cual es tu edad?: \n";
    cin >> edad;
    if (edad >= 0){
        if (edad >= 0 && edad <4){
            precio = 0;
        }
        else if (edad >= 4 && edad <= 18){
            precio = 5;
        }
        else if (edad > 18){
            precio = 10;
        }
        cout << "\nEdad: " << edad << "\nPrecio a pagar: $" << precio << endl;
    }
    else {
        cout << "\nLa edad que fue ingresada no es valida, intenta de nuevo.\n";
    }
    return 0;
}