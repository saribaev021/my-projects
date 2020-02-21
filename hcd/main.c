/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
void     hcd(int a, int b)
{
    while(a != 0 && b != 0)
    {
        if(a > b)
            a = a % b;
        else
            b = b % a;
    }
    printf("%d", a + b);
}
int main(int argc, char **argv)
{
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    if(argc == 3)
        hcd(a, b);
    printf("\n");

    return 0;
}

