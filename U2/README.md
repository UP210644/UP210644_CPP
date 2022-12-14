# Index
<h3>

- [Exercise 1](#exercise-1-program-that-asks-the-user-their-annual-income-and-shows-on-the-screen-the-tax-rate-that-corresponds-to-him)  
- [Exercise 2](#exercise-2-program-that-reads-the-users-score-and-indicates-their-performance-level-as-well-as-the-amount-of-money-the-user-receives)  
- [Exercise 3](#exercise-3-program-for-a-company-that-has-arcades-for-all-ages-and-wants-to-automatically-calculate-the-price-it-must-charge-its-customers-to-enter)  
- [Exercise 4](#exercise-4-program-that-asks-the-user-if-he-wants-a-vegetarian-pizza-or-not-and-based-on-his-answer-shows-him-a-menu-with-the-ingredients-available-for-him-to-choose)  
- [Exercise 5](#exercise-5-program-in-which-6-temperatures-are-entered-and-determines-the-average-the-lowest-and-the-highest)  
- [Exercise 6](#exercise-6-program-that-indefinitely-reads-quantities-of-products-and-their-price-and-at-the-end-indicates-the-total-of-the-invoice)  
- [Exercise 7](#exercise-7-program-that-changes-a-decimal-number-to-binary-only-for-integers-greater-than-0)    
- [Exercise 8](#exercise-8-program-that-prints-a-multiplication-table-as-far-as-the-user-wants-it) 
- [Exercise 9](#exercise-9-mathematical-method-for-obtaining-roots) 

<h3>

# Exercise 1: Program that asks the user their annual income and shows on the screen the tax rate that corresponds to him.
## Input
```c++
    cout << "Enter your annual rent: ";
    cin >> Rent;
```
## Process
```c++
    if (Rent>=0){
        if (Rent<10000){
            Tax = .05;
        }
        if (Rent>=10000 and Rent<20000){
            Tax = .15;
        } 
        if (Rent>=20000 and Rent<35000){
            Tax = .20;
        }
     Output   cout << "The tax rate is" << (Tax*100) << "% \n";
        Tax= Rent * Tax;
        cout << "Which is the equivalent $" << Tax << endl;
    }
    else {
        cout << "The rent you entered is ncorrect. \n";  
    }
```
## Output
```c++
    cout << "The tax rate is" << (Tax*100) << "% \n";
    Tax= Rent * Tax;
    cout << "Which is the equivalent $" << Tax << endl;
```
## Explanation
1. Ask the user for his annual rent.
2. Check that the user entered a valid rent.   
3. Check by several if's which tax rate.  
4. Multiply the rent by the tax rate.
5. Print the tax rate and its equivalent in dollars. 
## Tests
### A) Rent < $10,000
<img src="U2/../imagenes/renta1.PNG" height="90"/>

### B) Rent >= $10,000 and Rent < $20,000
<img src="U2/../imagenes/renta2.PNG" height="92"/>

### C) Rent >= $20,000 and Rent < $35,000 
<img src="U2/../imagenes/renta3.PNG" height="87"/>

### D) Rent >= $60,000
<img src="U2/../imagenes/renta4.PNG" height="87"/>

<div align="center">
<h2>

[Return to Index](#index)
</h2>
</div>


# Exercise 2: Program that reads the user's score and indicates their performance level, as well as the amount of money the user receives.
## Input
```c++
    cout << "What is your score: ";
    cin >> puntuacion;
```
## Process
```c++
    if( (puntuacion <= 1 ) && ((puntuacion >= 0.6) || (puntuacion == 0.4 ))){
        dinero = puntuacion* 2400;
        if (puntuacion >= 0.6) {
            cout << "Your score is Meritorious \n";
        }else{
            cout << "Your score is Acceptable \n";
        }

    } else{
        cout << "Your score is unacceptable \n";
    }
```
## Output
```c++
    cout << "Your amount of money is $" << dinero << endl;
```
## Explanation
1. Ask the user for his score.
2. Check that the user entered a score greater than or equal to 0.6 or equal to 0.
3. Multiply your score by 2400 and store the cash value.
4. Check what kind of score you obtained  
## Tests
### A) Score >= 0.6
<img src="U2/../imagenes/beneficios1.PNG" height="82"/>

### B) Score == 0.4
<img src="U2/../imagenes/beneficios2.PNG" height="89"/>

### C) Score == 0
<img src="U2/../imagenes/beneficios3.PNG" height="85"/>

<div align="center">
<h2>

[Return to Index](#index)
</h2>
</div>


# Exercise 3: Program for a company that has arcades for all ages and wants to automatically calculate the price it must charge its customers to enter.
## Input
```c++
    cout << "How old are you?  ";
    cin >> edad;
```
## Process
```c++
    if (edad > 18)
    {
        precio = 10;
    }
    else if (edad >= 4 && edad < 18)
    {
        precio = 5;
    }
    else if (edad >= 0)
    {
        precio = 0;
    }
    else
    {
        cout << "Your age is invalid \n";
        precio = 0;
    }

    cout << "The cost of your ticked is $" << precio << endl;
```
## Output
```c++
    cout << "The cost of your ticked is $" << precio << endl;
```
## Explanation
1. Ask the user for your age.
2. Check that the user enters an age within the following range.  
3. Print ticket cost.   
## Tests
### A) Age > 18
<img src="U2/../imagenes/saladejuegos1.PNG" height="70"/>

### B) Age >= 4 and Age <=18
<img src="U2/../imagenes/saladejuegos2.PNG" height="71"/>

### C) Age < 4 and Age > 0
<img src="U2/../imagenes/saladejuegos3.PNG" height="67"/>

### D) Age < 0
<img src="U2/../imagenes/saladejuegos4.PNG" height="100"/>

<div align="center">
<h2>

[Return to Index](#index)
</h2>
</div>


# Exercise 4: Program that asks the user if he wants a vegetarian pizza or not, and based on his answer shows him a menu with the ingredients available for him to choose.
## Input
```c++
    cout << "Welcome to Bella Napoli. \n";
    cout << "What type of pizza do you prefer ? \n";
    cout << "1.-Vegetarian pizza. \n";
    cout << "2.-No vegetarian pizza. \n";
    cin >> tipo;
```
## Process
### (Select your pizza type and ingredients)
```c++
    if (tipo == 1)
    {
        tipo_1 = "vegetarian";
        cout << "The ingredients are: \n";
        cout << "1.-Pepper. \n";
        cout << "2.-Tofu. \n";
        cout << "All include mozarella and tomato.";
        cin >> ingrediente_vegetariano;

        if (ingrediente_vegetariano == 1)
        {
            ingre = "Pepper";
        }
        else if (ingrediente_vegetariano == 2)
        {
            ingre = "Tofu";
        }
        else
        {
            cout << "Your ingredient does not exit";
        }
    }
    else if (tipo == 2)
    {
        tipo_1 = "no vegetarian";
        cout << "The ingredients are: \n";
        cout << "1.-Pepperoni. \n";
        cout << "2.-Ham \n";
        cout << "3.-Salmon \n";
        cout << "All include mozarella and tomato \n";
        cin >> ingrediente_no_vegetariano;

        if (ingrediente_no_vegetariano == 1)
        {
            ingre = "Pepperoni";
        }
        else if (ingrediente_no_vegetariano == 2)
        {
            ingre = "Ham";
        }
        else if (ingrediente_no_vegetariano == 3)
        {
            ingre = "Salmon";
        }
    }
    else
    {
        cout << "That type of pizza doesn't exit \n";
    } 

    if (tipo==1 || tipo==2){   
        cout << "Your type of pizza is " << tipo_1 << endl;
        cout << "Your ingredients of pizza are " << ingre << ", mozarella and tomato. \n";
    }
```
## Output
```c++
    if (tipo==1 || tipo==2){   
        cout << "Your type of pizza is " << tipo_1 << endl;
        cout << "Your ingredients of pizza are " << ingre << ", mozarella and tomato. \n";
    }
```
## Explanation
1. Ask the user what type of pizza he/she prefers:  
2. Display the menu depending on your type of pizza.
3. Ask what ingredients you want on your pizza.
4. Save the ingredients in a string.
5. Show your type of pizza (vegetarian or non-vegetarian) and the ingredients.
## Tests
### A) Vegetarian Pizza with Pepper as ingredient
<img src="U2/../imagenes/pizzeria1.PNG" height="240"/>

### B) Vegetarian Pizza with Tofu as ingredient
<img src="U2/../imagenes/pizzeria2.PNG" height="240"/>

### C) Vegetarian Pizza with Pepperoni as ingredient
<img src="U2/../imagenes/pizzeria3.PNG" height="260"/>

### D) Non Vegetarian Pizza with Ham as ingredient
<img src="U2/../imagenes/pizzeria4.PNG" height="260"/>

### E) Non Vegetarian Pizza with Salmon as ingredient
<img src="U2/../imagenes/pizzeria5.PNG" height="260"/>

<div align="center">
<h2>

[Return to Index](#index)
</h2>
</div>


# Exercise 5: Program in which 6 temperatures are entered and determines the average, the lowest and the highest.
## Input
```c++
    cout << "Insert the temperature: ";
    cin >> temperatura;
```
 ## Process
 ```c++
     do
    {
        cout << "Insert the temperature: ";
        cin >> temperatura;
        if (temperatura >= max)
        {
            max = temperatura;
        }
        if (temperatura <= min)
        {
            min = temperatura;
        }
        sumadetemperatura += temperatura;
        contador++;
    } while (contador <= 6);
```
 ## Output
```c++
cout << "The average is " << promedio << " C?? \nThe lowest temperature is " << min << " C?? \nThe highest temperature is " << max << " C?? \n";
```
## Explanation
1. Ask the user 6 temperature.
2. If temparures is higher than the previous one, it save it.
3. If temparures is lower than the previous one, it save it.
4. Print the mean, highest and lower temperature.
## Test
<img src="U2/../imagenes/temperatura1.PNG" height="220"/>

<div align="center">
<h2>

[Return to Index](#index)
</h2>
</div>


# Exercise 6: Program that indefinitely reads quantities of products and their price, and at the end indicates the total of the invoice.
## Input
```c++
    int numproducto = 1;
    float price, amount, total = 0;
    cout << "Please input the amount and price of your products. To end type 0\n\n";
```
 ## Process
```c++
    do
    {
        cout << "Product " << numproducto << "\nAmount: ";
        cin >> amount;
        if (amount <= 0)
        {
            cout << "\nInvalid amount, exiting program\n";
            numproducto++;
            break;
        }
        cout << "Price: ";
        cin >> price;
        if (price < 0)
        {
            cout << "\nInvalid amount, exiting program\n";
            numproducto++;
            break;
        }
        numproducto++;
        total += (price * amount);
    } while (price != 0);
```
 ## Output
```c++
    cout << "\nYou've inputted a total of " << numproducto - 2 << " different products. ";
    cout << "\nYour total is: " << total << "$ \n\n";
```
## Explanation
1. Ask the user the amount. 
2. Ask the user the price.
3. If the user enter 0 in amount, exit the cycle.
4. Print the total price of all products.
## Test
<img src="U2/../imagenes/factura1.PNG" height="410"/>

<div align="center">
<h2>

[Return to Index](#index)
</h2>
</div>


# Exercise 7: Program that changes a decimal number to binary, only for integers greater than 0.
## Input
```c++
    do
    {
        cout << "Input a decimal number \n";
        cin >> num;
```
## Process
```c++
        if (num > 0)
        {
            while (num > 0)
            {
                if (num % 2 == 0)
                {
                    binary = '0' + binary;
                }
                else
                {
                    binary = '1' + binary;
                }
                num /= 2;
            }
```
## Output
```c++
            cout << "The number you've inputted is " << binary;
            cout << endl;
        }
        else if (num == 0)
        {
            cout << "You've inputted a 0\n";
        }
        else
        {
            cout << "The number must be greater than 0\n";
        }
    } while (num < 0);
```
## Explanation
1. Ask the user to input a value
2. In case the user writes a 0, exit the program
3. In case the user writes a negative number, loop the program
4. If the number written is valid, keep dividing the number by two and keep writing the residue of the division until the number is equal to 0.
5. Print out the string of values done by the formula.
6. Return 0 to check that the program ran correctly
## Tests
### A) Number >= 0
<img src="U2/../imagenes/decimalbinario1.PNG" height="90"/>

### B) Number < 0
<img src="U2/../imagenes/decimalbinario2.PNG" height="90"/>

<div align="center">
<h2>

[Return to Index](#index)
</h2>
</div>


# Exercise 8: Program that prints a multiplication table as far as the user wants it.
## Input
```c++
    do
    {
    cout << "Write a number to multiply by ";
    cin >> numberinput;
    cout << "How many times do you want it multiplied ";
    cin >> counter;
```
### Process
```c++
        if (counter <= 0)
        {
            cout << "\nInvalid written number, try again please\n\n";
        }
        else
        {
            for (int i = 0; i < 65; i++)
            {
                cout << "=";
            }
            cout << "\n";
            for (int i = 1; i <= counter; i++)
            {
```
### Output
```c++
                cout << "|\t" << i << "\tX\t" << numberinput << "\t\t=\t" << (numberinput * i) << "\t\t|\n|";
                for (int i = 0; i < 63; i++)
                {
                    cout << "-";
                }
                cout << "|\n";
            }
        }
    } while (counter <= 0);
```
## Explanation
1. Ask the user for the number. 
2. Ask the user for the limit
3. Print the  multiplication table up to the limit number entered.
## Test
### A) Number >= 0
<img src="U2/../imagenes/tablademultiplicar1.PNG" height="250"/>

### B) Number < 0
<img src="U2/../imagenes/tablademultiplicar2.PNG" height="249"/>

<div align="center">
<h2>

[Return to Index](#index)
</h2>
</div>


# Exercise 9: Mathematical method for obtaining roots.
## Input
```c++
    cout << "This graph is using the formula x??+x-12 \n";
    cout << "Give me the value of (a)";
    cin >> a;
    cout << "Give me the value of (b)";
    cin >> b;
```
## Process
```c++
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
```
## Output
```c++
    cout << "The root is " << setprecision(1) <<  c;
    }
    else
    {
        cout << "There's no root between the numbers";
    }
```
## Explanation
1. Ask the user for the range (a and b).
2. Obtain the point c.
3. Get the y-values when its value is a, b and c.
4. If the Y(c) value is greater than or equal to 0.01 or less than or equal to -0.01  
5. Print the root if there is
## Tests
### A) When the root is within the established range
<img src="U2/../imagenes/metodobiseccion1.PNG" height="600"/>

### B) When the root is not within the established range.
<img src="U2/../imagenes/metodobiseccion2.PNG" height="110"/>

<div align="center">
<h2>

[Return to Index](#index)
</h2>
</div>


