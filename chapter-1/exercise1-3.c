/*
 * Exercise 1-3. Modify the temperature conversion program to print a heading
 * above the table.
 *
 * Formula for converting temperature in Fahrenheit to Celsius
 * celsius = (5.0/9.0) * (fahrenheit - 32)
 *
 * by Kulwinder Krishan 
 * (https://krishanthecoder.io/kr-second-edition-exercise-1-3/)
 */

#include <stdio.h>

int main(void)
{
    /* Define integer variables instead of using magic numbers in program */
    int lower = 0;
    int upper = 300;
    int step  = 20;

    float fahrenheit = lower; /* Set fahrenheit to lower */
    float celsius;

    /* Simply print heading outside the while loop */
    printf("Fahrenheit   Celsius\n");

    while(fahrenheit <= upper)
    {
      celsius = (5.0 / 9.0) * (fahrenheit - 32);
      printf("%6.0f\t%10.1f\n",fahrenheit, celsius);
      fahrenheit += step;
    }
}

/*
 * Terminal Output
 * -----------------------------------------------------------------------
 *  chapter-1 git:(main) ✗ make exercise1-3
 * cc     exercise1-3.c   -o exercise1-3
 * ➜  chapter-1 git:(main) ✗ ./exercise1-3   
 * Fahrenheit   Celsius
 *      0       -17.8
 *     20        -6.7
 *     40         4.4
 *     60        15.6
 *     80        26.7
 *    100        37.8
 *    120        48.9
 *    140        60.0
 *    160        71.1
 *    180        82.2
 *    200        93.3
 *    220       104.4
 *    240       115.6
 *    260       126.7
 *    280       137.8
 *    300       148.9
*/
