/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
void    calc(int fv, char op, int tv)
{
    int res = 0;
    if(op == '+')
        res = fv + tv;
    else if(op == '-')
        res = fv - tv;
    else if(op == '*')
        res = fv * tv;
    else if(op == '%')
        res = fv % tv;
    else if(op == '/')
        res = fv / tv;
    printf("%d", res);
}
int main(int argc, char **argv)
{
    int fv = atoi(argv[1]);
    int tv = atoi(argv[3]);
    if(argc == 4)
    {
        calc(fv, *argv[2], tv);
    }
    printf("\n");
    return 0;
}
