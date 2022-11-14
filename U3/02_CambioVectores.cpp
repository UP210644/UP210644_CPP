/* Unidad 3. Ejercicio 2
   Autor: Isaias Moreno Luna
   Fecha: 14/11/2022
*/

#include <iostream>
using namespace std;

void obtenerCambio(int, string);
void imprimirCambio(string);

int denominaciones[9] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
int cantidadbilletes[9] = {0};

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

        if (tipo == "total" || tipo == "TOTAL" || tipo == "Total") 
        {
            for (int denominacion = 0; denominacion < 9; denominacion++)
            {
                if ((dinero - denominaciones[denominacion]) >= 0)
                {
                    cantidadbilletes[denominacion]++;
                    dinero -= denominaciones[denominacion];
                    break;
                }
            }
        }
        else if (tipo == "coin" || tipo == "COIN" || tipo == "Coin")
        {
            for (int denominacion = 5; denominacion < 9; denominacion++)
            {
                if ((dinero - denominaciones[denominacion]) >= 0)
                {
                    cantidadbilletes[denominacion]++;
                    dinero -= denominaciones[denominacion];
                    break;
                }
            }
        }

    } while (dinero > 0);
}

void imprimirCambio(string tipo)
{
    cout << "The exchange is : \n";
    if (tipo == "total" || tipo == "TOTAL" || tipo == "Total")
    {
        for (int denominacion = 0; denominacion < 5; denominacion++)
        {
            cout << "Bill of $" << denominaciones[denominacion] << ": " << cantidadbilletes[denominacion] << endl;
        }
        for (int denominacion = 5; denominacion < 9; denominacion++)
        {
            cout << "Coin of $" << denominaciones[denominacion] << ": " << cantidadbilletes[denominacion] << endl;
        }
    }
    else if (tipo == "coin" || tipo == "COIN" || tipo == "Coin")
    {
        for (int denominacion = 5; denominacion < 9; denominacion++)
        {
            cout << "Coin of $" << denominaciones[denominacion] << ": " << cantidadbilletes[denominacion] << endl;
        }
    }
}