/*
 * Exercise 1-1. Run the "hello, world" program on your system. 
 *     Experiment with leaving:
 *          #include <stdio.h>
 *          main function
 *
 * by Kulwinder Krishan 
 * (https://krishanthecoder.io/kr-second-edition-exercise-1-1/)
 */

printf("Hello, World!\n");

/*
 * Warnings and Errors
 * -----------------------------------------------------------------------
 * ➜  chapter-1 git:(main) make exercise1-1v1   
 * cc     exercise1-1v1.c   -o exercise1-1v1
 * exercise1-1v1.c:11:8: error: expected parameter declarator
 * printf("Hello, World!\n");
 *      ^
 * exercise1-1v1.c:11:8: error: expected ')'
 * exercise1-1v1.c:11:7: note: to match this '('
 * printf("Hello, World!\n");
 *     ^
 * exercise1-1v1.c:11:1: warning: type specifier missing, defaults to 'int'
 *     [-Wimplicit-int]
 * printf("Hello, World!\n");
 * ^
 * exercise1-1v1.c:11:1: warning: incompatible redeclaration of library function
 *     'printf' [-Wincompatible-library-redeclaration]
 * exercise1-1v1.c:11:1: note: 'printf' is a builtin with type
 *     'int (const char *, ...)'
 * 2 warnings and 2 errors generated.
 * make: *** [exercise1-1v1] Error 1 
 *
*/
