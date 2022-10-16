# Index
<h3>

- [Exercise 1](#exercise-1-program-that-asks-the-user-their-annual-income-and-shows-on-the-screen-the-tax-rate-that-corresponds-to-him)  
- [Exercise 2](#exercise-2-a-program-that-asks-the-user-for-his-score-and-displays-the-corresponding-typo-of-benefit-and-money)  
- [Exercise 3](#exercise-3-a-program-that-asks-for-your-age-and-print-the-cost-of-ticked)  
- [Exercise 4](#exercise-4-menu-of-a-bella-napoli-pizzeria-showing-your-type-of-pizza-and-ingredients)  
- [Exercise 5](#exercise-5-ask-the-user-6-temperature-and-print-the-mean-highest-and-lowest-temperature)  
- [Exercise 6](#exercise-6-ask-the-user-indefinitely-the-amount-and-price-of-the-products-finally-print-the-total-price)  
- [Exercise 7](#exercise-7-decimal-to-binary)    
- [Exercise 8](#exercise-8-multiplication-tables)    

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