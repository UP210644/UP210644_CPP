<div align="center">

# Tic tac toe Game

</div align="center">

# Index

<h3>

- [Instructions for execution and use](#exercise-1-program-that-asks-the-user-their-annual-income-and-shows-on-the-screen-the-tax-rate-that-corresponds-to-him)  
- [Flowchart](#exercise-2-program-that-reads-the-users-score-and-indicates-their-performance-level-as-well-as-the-amount-of-money-the-user-receives)  
- [Tests](#exercise-3-program-for-a-company-that-has-arcades-for-all-ages-and-wants-to-automatically-calculate-the-price-it-must-charge-its-customers-to-enter)  
- [Conclusion](#exercise-4-program-that-asks-the-user-if-he-wants-a-vegetarian-pizza-or-not-and-based-on-his-answer-shows-him-a-menu-with-the-ingredients-available-for-him-to-choose)  

<h3>

# Instructions for execution and use
## Instructions for Windows 

1. Download or clone my repo with the following command in the terminal:
   
~~~
"git clone https://github.com/UP210644/UP210644_CPP.git"
~~~

2. Download and install the compiler in this link https://sourceforge.net/projects/mingw/files/OldFiles/ 
3. Open the terminal at the direction of the file with the command:

~~~
cd C:\Documents\...
~~~

4. To compile use command:

~~~
gcc  04_Gato.cpp -o 04_Gato.exe
~~~

5. To run type this code:

~~~
04_Gato.exe
~~~

## Instructions for Linux 

1. Download or clone my repo with the following command in the terminal:
   
~~~
"git clone https://github.com/UP210644/UP210644_CPP.git"
~~~

2. Install GNU c/c++ compiler, open the terminal and type:

~~~
$ sudo apt-get update
$ sudo apt-get install build-essential manpages-dev
~~~

3. To compile this program, type:

~~~
gcc 04_Gato.c -o 04_Gato
~~~

4. To run this program, type:
   
~~~
./04_Gato
~~~

<div align="center">
<h2>

[Return to Index](#index)
</h2>
</div>

# Flowchart

<img src="../../UP210644_CPP/U3/imagenes/Diagrama.png" align="center">

<div align="center">
<h2>

[Return to Index](#index)
</h2>
</div>

# Test
</div align="center">

The first thing that appears on the screen is a menu to choose the game mode.  
<img src="../imagenes/gato1.png" align="center">  
Select 1 since we are going to play vs. the PC. The game board will appear with numbers from 1 to 9 to select the move.   
<img src="../imagenes/gato2.png" align="center">  
Now we will start playing against the PC, my first move is on cell 5. On the other hand, the PC's first move is always random.  
<img src="../imagenes/gato3.png" align="center">  
My second move is on cell 9. The computer now counters by placing its move on cell 1.   
<img src="../imagenes/gato4.png" align="center">  
My third move is on cell 7 to prevent the computer from winning. The PC counters by putting his move in cell 3 to prevent me from winning.
<img src="../imagenes/gato5.png" align="center">  
My fourth move is in cell 8. The CP counters by putting their move in cell 8 to prevent me from winning.  
<img src="../imagenes/gato6.png" align="center">  
As the cells ran out, the game ended in a draw.  
<img src="../imagenes/gato7.png" align="center">  

<div align="center">
<h2>

[Return to Index](#index)
</h2>
</div>

# Conclusion

This was a complex project, especially the development of the artificial intelligence for the PC, I was thinking for a long time about how to make it decide which move to play until I asked the teacher, hat's when we started to play in the notebook and he asked me why did you decide to put your move there, so I explained that it was so he wouldn't win, based on that he explained that before making a move we make an imaginary board where we put the moves in different places until we find a move that makes us win. From there I developed the artificial intelligence by first creating an imaginary board which is a copy of the real board and then checking if placing the move there wins, and if it doesn't win with any move it places it on a random number.  
Another problem I had was that my code is too wide and I repeat several structures in the main and some functions. But other than that it was fun to do the game because it allowed us to understand how to use the arrays and functions correctly, I also understood the importance of debug because it allows you to run the code in pauses and shows you the variables along with their value this allows you to easily find what is the error in our code.  

<div align="center">
<h2>

[Return to Index](#index)
</h2>
</div>