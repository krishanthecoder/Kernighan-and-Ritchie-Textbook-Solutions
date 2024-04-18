/*
 * Exercise 1-2. Experiment to find out what happens when printf's argument
 * string contains \c, where c is some character not listed above.
 *
 * by Kulwinder Krishan 
 * (https://krishanthecoder.io/kr-second-edition-exercise-1-2/)
 */

#include <stdio.h>

int main(void)
{
	printf("This is definitely going to give error.\c");
	return 0;
}


/*
 * Terminal Output
 * -----------------------------------------------------------------------
 * ➜  chapter-1 git:(main) ✗ make exercise1-2
 * cc     exercise1-2.c   -o exercise1-2
 * exercise1-2.c:13:49: warning: unknown escape sequence '\c'
 *     [-Wunknown-escape-sequence]
 *       printf("This is definitely going to give error.\c");
 *                                                      ^~
 * 1 warning generated.
*/
