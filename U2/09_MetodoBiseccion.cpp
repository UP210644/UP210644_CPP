/* Unidad 2. Ejercicio 9
   Autor: Isaias Moreno Luna
   Fecha: 16/10/2022
   Descripción: Método matemático para obtener raíces con la ecuacion y=x²+x-12
*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

float bisection(float num){
    return pow(num,2)+num-12;
}

int main(){
    int counter=1;
    float a,b,c,ya,yb,yc;
    cout << "This graph is using the formula x²+x-12 \n";
    cout << "Give me the value of (a)";
    cin >> a;
    cout << "Give me the value of (b)";
    cin >> b;
    c = (a+b)/2;
    ya = bisection(a);
    yb = bisection(b);
    yc = bisection(c);
    if ((yb > 0 && ya < 0) || (ya > 0 && yb < 0)){
    cout << "| Exercise \t|\t A \t\t|\t B\t\t|\t C \t\t|\t f(A) \t\t\t|\t f(B) \t\t\t|\t f(C) \t\t\t| \n";
    for (int i = 0; i < 185; i++)
    {
        cout << "-";
    }
    cout << "\n";
    cout << "| \t" << counter << "\t|\t" << fixed << setprecision(3) << a << "\t\t|\t" << b << "\t\t|\t" << c << "\t\t|\t" << ya << "\t\t\t|\t" << yb << "\t\t\t|\t" << yc << "\t\t\t|\n";
    for (int i = 0; i < 185; i++)
    {
        cout << "-";
    }
    cout << "\n";

        while (yc >= 0.01 || yc <= -0.01)
        {
            if ((yc > 0 && ya < 0) || (ya > 0 && yc < 0))
            {
                b = c;
            }
            else
            {
                a = c;
            }
            if (a == b)
            {
                break;
            }
            
            c = (a+b)/2;
            ya = bisection(a);
            yb = bisection(b);
            yc = bisection(c);
            counter++;
            cout << "| \t" << counter << "\t|\t" << fixed << setprecision(3) << a << "\t\t|\t" << b << "\t\t|\t" << c << "\t\t|\t" << ya << "\t\t\t|\t" << yb << "\t\t\t|\t" << yc << "\t\t\t|\n";
            for (int i = 0; i < 185; i++)
            {
                cout << "-";
            }
            cout << "\n";
        }
    cout << "The root is approximately " << setprecision(1) <<  c;
    }
    else
    {
        cout << "There's no root between the numbers";
    }
    return 0;
}