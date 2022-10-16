/* Unidad 2. Ejercicio 4
   Autor: Isaias Moreno Luna
   Fecha: 28/09/2022
   Descripción: Ejercicio de Pizzeria

La pizzería Bella Napoli ofrece pizzas vegetarianas y no vegetarianas a sus clientes. 
Los ingredientes para cada tipo de pizza aparecen a continuación. 

Ingredientes vegetarianos: Pimiento y tofu.
Ingredientes no vegetarianos: Peperoni, Jamón y Salmón.

Escribir un programa que pregunte al usuario si quiere una pizza vegetariana o no, y en 
función de su respuesta le muestre un menú con los ingredientes disponibles para que elija. 
Solo se puede eligir un ingrediente además de la mozzarella y el tomate que están en todas lapizzas.
Al final se debe mostrar por pantalla si la pizza elegida es vegetariana o no y todos los
ingredientes que lleva
*/

#include <iostream>
using namespace std;

int main(){
    char pizza[20], ingrediente[20];

    cout<<"¿Qué pizza desea?\nVegetariana         No vegetariana\n";
    cin>>pizza;

    if(pizza[0] == 'v' || pizza[0] == 'V'){
        cout<<"Estos son los ingredientes de la pizza veegetariana:\n Pimiento        Tofu\n ¿Cuál quiere?\n";
        cin>>ingrediente;
        if (ingrediente[0] == 'p' || ingrediente[0] == 'P'){
            cout<<"Su pizza es vegetariana con los siguientes ingredientes:\n Mozzarella\n Tomate\n Pimiento\n";
        }else if (ingrediente[0] == 't' || ingrediente[0] == 'T'){
            cout<<"Su pizza es vegetariana con los siguientes ingredientes:\n Mozzarella\n Tomate\n Tofu\n";
        }else{
            cout<<"No entiendo";
        }
    }else if (pizza[0] == 'n' || pizza[0] == 'N'){
        cout<<"Estos son los ingredientes de la pizza no vegetariana:\n Peperoni        Jamón       Salmón\n ¿Cuál quiere?\n";
        cin>>ingrediente;
        if (ingrediente[0] == 'p' || ingrediente[0] == 'P'){
            cout<<"Su pizza no es vegetariana con los siguientes ingredientes:\n Mozzarella\n Tomate\n Peperoni\n";
        }else if (ingrediente[0] == 'j' || ingrediente[0] == 'J'){
            cout<<"Su pizza no es vegetariana con los siguientes ingredientes:\n Mozzarella\n Tomate\n Jamón\n";
        }else if (ingrediente[0] == 's' || ingrediente[0] == 'S'){
            cout<<"Su pizza no es vegetariana con los siguientes ingredientes:\n Mozzarella\n Tomate\n Salmón\n";
        }else{
            cout<<"No entiendo";
        }
    }else{
        cout<<"No entiendo.";
    }

    return 0;
}