/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void    print_bits(unsigned char octet)
{
    int bit_array[8] = {0};
    unsigned int n = octet - 48;
    unsigned int c;
    int i = 7;
    while(i >= 0 && n >0)
    {
        c = n % 2;
        n = n / 2;
        if(c == 0)
        {
            bit_array[i] = 0;
        }
        else
            bit_array[i] = 1;
        i--;
    }
    i = 0;
    while(i <= 7)
    {
        printf("%d",bit_array[i]);
        i++;
    }
}
int main()
{
    print_bits("255");
    

    return 0;
}
