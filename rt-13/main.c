/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <unistd.h>
void    ft_putchar(char c)
{
    write(1, &c, 1);
}
void    rt(char *str)
{
    int i = 0;
    while(str[i])
    {
        if(str[i] >= 97 && str[i] <= 109)
            ft_putchar(str[i] + 13);
        else if(str[i] >= 110 && str[i] <= 122)
            ft_putchar(str[i] - 13);
        else if(str[i] >= 65 && str[i] <= 77)
            ft_putchar(str[i] + 13);
        else if(str[i] >= 78 && str[i] <= 90)
            ft_putchar(str[i] - 13);
        else
            ft_putchar(str[i]);
        i++;
    }
}

int main(int argc, char **argv)
{
    rt(argv[1]);
    ft_putchar('\n');
    return 0;
}
