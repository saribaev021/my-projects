/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int *ffrrng(int start, int end)
{
    int *qwerty;
    int i = 0;
    int l = end;
    while(start <= l)
    {
        i++;
        l--;
    }
    qwerty = (int*)malloc(sizeof(int) * (i));
    i = 0;
    while(start <= end)
    {
        qwerty[i] = end;
        i++;
        end--;
    }
    return(qwerty);
}
int main()
{
    int i = 0;
    int *s = ffrrng(-9, 10);
    int length = 19;
    while(length >= 0)
    {    
        printf("%d", s[i]);
        length--;
        i++;
    }
    return 0;
}
