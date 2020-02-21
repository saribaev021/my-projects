#include <unistd.h>
#include <stdio.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}
int ft_check_space(char *str, int i)
{
    while(str[i] != '\0')
    {
        if(str[i] != ' ' && str[i] != '\t' && str[i] != '\v' && str[i] != '\f')
        {
            return(1);
        }
        i++;
    }
    return(0);
}
void    epur_str(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        while(str[i] == ' ' || str[i] == '\t' || str[i] == '\v' || str[i] == '\f')
        {
            i++;
        }
        while(str[i] != ' ' && str[i] != '\t' && str[i] != '\v' && str[i] != '\f' && str[i] != '\0')
        {
            ft_putchar(str[i]);
            i++;
        }
        if(ft_check_space(str, i))
        {
            ft_putchar(str[i]);
        }
    }
}
int main(int argc, char **argv)
{
    
    if(argc == 2)
    {
        epur_str(argv[1]);
    }
    ft_putchar('\n');
    return 0;
}

