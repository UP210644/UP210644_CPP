/* Unidad 3. Ejercicio 1
   Autor: Isaias Moreno Luna
   Fecha: 26/10/2022
   Descripción: Programa que da a conocer el cambio en los valores del dinero
*/

#include <iostream>
using namespace std;

void obtenerCambio(int, string);
void imprimirCambio(string);

int quinientos = 0, docientos = 0, cien = 0, cincuenta = 0, veinte = 0, diez = 0, cinco = 0, dos = 0, uno = 0;

int main()
{
    int dinero;
    string tipo;

    cout << "Enter the money: ";
    cin >> dinero;
    cout << "Enter type change whit coin or total:";
    cin >> tipo;

    obtenerCambio(dinero, tipo);
    imprimirCambio(tipo);
    return 0;
}

void obtenerCambio(int dinero, string tipo)
{
    do
    {
        
        if (tipo=="total" || tipo == "TOTAL" || tipo == "Total") 
        {
            ((dinero - 500) >= 0) ? quinientos++, dinero -= 500 
                : ((dinero - 200) >= 0) ? docientos++, dinero -= 200 
                    : ((dinero - 100) >= 0) ? cien++, dinero -= 100 
                        : ((dinero - 50) >= 0) ? cincuenta++, dinero -= 50 
                            : ((dinero - 20) >= 0) ? veinte++, dinero -= 20 
                                : ((dinero - 10) >= 0) ? diez++, dinero -= 10 
                                    : ((dinero - 5) >= 0) ? cinco++, dinero -= 5 
                                        : ((dinero - 2) >= 0) ? dos++, dinero -= 2 
                                            : ((dinero - 1) >= 0) ? uno++, dinero -= 1 
                                                : uno;
        }else if (tipo == "coin" || tipo == "COIN" || tipo == "Coin") 
        {
            ((dinero - 10) >= 0) ? diez++, dinero -= 10 
                : ((dinero - 5) >= 0) ? cinco++, dinero -= 5 
                    : ((dinero - 2) >= 0) ? dos++, dinero -= 2 
                        : ((dinero - 1) >= 0) ? uno++, dinero -= 1 
                            : uno;
        }
        
    } while (dinero > 0);
}

void imprimirCambio(string tipo)
{
    cout << "The exchange is : \n";
    if (tipo == "total" || tipo == "TOTAL" || tipo == "Total")
    {
        cout << "Bill of $500: " << quinientos << endl;
        cout << "Bill of $200: " << docientos << endl;
        cout << "Bill of $100: " << cien << endl;
        cout << "Bill of $50: " << cincuenta << endl;
        cout << "Bill of $20: " << veinte << endl;
        cout << "Coin of $10: " << diez << endl;
        cout << "Coin of $5: " << cinco << endl;
        cout << "Coin of $2: " << dos << endl;
        cout << "Coin of $1: " << uno << endl;
    }else if (tipo == "coin" || tipo == "COIN" || tipo == "Coin") 
    {
        cout << "Coin of $10: " << diez << endl;
        cout << "Coin of $5: " << cinco << endl;
        cout << "Coin of $2: " << dos << endl;
        cout << "Coin of $1: " << uno << endl;
    }
    
}