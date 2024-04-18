/*
 * Exercise 1-1. Run the "hello, world" program on your system. 
 *     Experiment with leaving:
 *			#include <stdio.h>
 *
 * by Kulwinder Krishan 
 * (https://krishanthecoder.io/kr-second-edition-exercise-1-1/)
 */

int main(void)
{
	printf("Hello, World!\n");
	return 0;
}


/*
 * Warnings and Errors
 * -----------------------------------------------------------------------
 * ➜  chapter-1 git:(main) ✗ make exercise1-1v3
 * cc     exercise1-1v3.c   -o exercise1-1v3
 * exercise1-1v3.c:12:2: warning: implicitly declaring library function 'printf'
 *     with type 'int (const char *, ...)' [-Wimplicit-function-declaration]
 *       printf("Hello, World!\n");
 *       ^
 * exercise1-1v3.c:12:2: note: include the header <stdio.h> or explicitly provide a
 *     declaration for 'printf'
 * 1 warning generated.
 *
*/
