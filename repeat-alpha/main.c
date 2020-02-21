/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void    ft_repeat_alpha(char *str)
{
    int i = 0;
    int j = 0;
    while(str[i])
    {
        if(str[i] >= 97 && str[i] <=122)
        {
            while(str[i] - 97 >= j)
            {
                write(1, &str[i], 1);
                j++;
            }
            j = 0;
            i++;
        }
        if(str[i] >= 65 &&  str[i] <= 90)
        {
          while(str[i] - 65 >= j)
            {
                write(1, &str[i], 1);
                j++;
            }
            j = 0;
            i++;
        }
    }
}

int main(int argc, char **argv)
{
    ft_repeat_alpha(argv[1]);
    return 0;
}
