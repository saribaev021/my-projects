/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int   ft_max(int *tab, unsigned int len)
{
    int i = 0;
    int max = -2147483648;
    while(len >= i)
    {
        if(tab[i] > max)
        {
            max = tab[i];
        }
        i++;
    }
    return (max);
}
int main()
{
    int tab[] ={-1,-2,-23}; 
    int i = ft_max(tab, 3);
    printf("%d", i * -1);
    return 0;
}