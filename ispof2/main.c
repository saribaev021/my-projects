/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int ispof2(unsigned  int n)
{
    if(n == 0)
        return(0);
    while(n % 2 == 0)
    {
        n = n / 2;
    }
    //n = n * 2;
     if(n * 2 == 2)
            return (1);
    return(0);
}

int ispof12(unsigned int n)
{
   int pof = n;
   int tw = 1;
   int i = 0;
   while(pof / 2 != 0)
   {
       pof = pof / 2;
       i++;
   }
   while(i)
   {
       tw = tw * 2;
       i--;
   }
   if(tw == n)
   {
       return(1);
   }
   return(0);
}

int main()
{
    int s = ispof12(1048576);
    printf("%d", s);

    return 0;
}

