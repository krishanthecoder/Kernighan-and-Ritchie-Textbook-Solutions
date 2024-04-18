/*
 * Exercise 1-1. Run the "hello, world" program on your system. 
 *     Experiment with leaving:
 *          main function
 *
 * by Kulwinder Krishan 
 * (https://krishanthecoder.io/kr-second-edition-exercise-1-1/)
 */
#include <stdio.h>
printf("Hello, World!\n");

/*
 * Warnings and Errors
 * -----------------------------------------------------------------------
 * ➜  chapter-1 git:(main) ✗ make exercise1-1v2
 * cc     exercise1-1v2.c   -o exercise1-1v2
 * exercise1-1v2.c:10:8: error: expected parameter declarator
 * printf("Hello, World!\n");
 *      ^
 * exercise1-1v2.c:10:8: error: expected ')'
 * exercise1-1v2.c:10:7: note: to match this '('
 * printf("Hello, World!\n");
 *     ^
 * exercise1-1v2.c:10:1: warning: type specifier missing, defaults to 'int'
 *     [-Wimplicit-int]
 * printf("Hello, World!\n");
 * ^
 * exercise1-1v2.c:10:1: error: conflicting types for 'printf'
 * /Library/Developer/CommandLineTools/SDKs/MacOSX.sdk/usr/include/stdio.h:170:6: note: 
 *     previous declaration is here
 * int      printf(const char * __restrict, ...) __printflike(1, 2);
 *        ^
 * 1 warning and 3 errors generated.
 * make: *** [exercise1-1v2] Error 1
 *
*/
