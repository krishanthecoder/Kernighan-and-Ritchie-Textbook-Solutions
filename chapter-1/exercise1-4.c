/*
 * Exercise 1-4. Write a program to print the corresponding Celsius to 
 * Fahrenheit table.
 *
 * Formula for converting temperature in Celsius to Fahrenheit
 * fahrenheit = (9.0 / 5.0) * celsius + 32.0
 *  
 * by Kulwinder Krishan 
 * (https://krishanthecoder.io/kr-second-edition-exercise-1-4/)
 */

#include <stdio.h>

int main(void)
{
    /* 
      Values of lower, upper and step are taken from
      the output of exercise 1-3. We are going to 
      use float data type as they are in decimal form.
    */
    float lower = -17.8;
    float upper = 148.9;
    float step  = 11.11;

    float celsius = lower; /* set value of celsius to lower */
    
    /* fahrenheit value will be set inside while loop */
    float fahrenheit;

    /* print the heading outside the while loop */
    printf("Celsius   Fahrenheit\n");

    while (celsius <= upper)
    {
      fahrenheit = (9.0 / 5.0) * celsius + 32;
      printf("%6.2f\t%11.0f\n", celsius, fahrenheit);
      celsius += step;
    }
}

/*
 * Terminal Output
 * -----------------------------------------------------------------------
 * ➜  chapter-1 git:(main) ✗ make exercise1-4
 * cc     exercise1-4.c   -o exercise1-4
 * ➜  chapter-1 git:(main) ✗ ./exercise1-4 
 * Celsius   Fahrenheit
 * -17.80           -0
 * -6.69           20
 * 4.42           40
 * 15.53           60
 * 26.64           80
 * 37.75          100
 * 48.86          120
 * 59.97          140
 * 71.08          160
 * 82.19          180
 * 93.30          200
 *104.41          220
 *115.52          240
 *126.63          260
 *137.74          280
 *148.85          300
*/
