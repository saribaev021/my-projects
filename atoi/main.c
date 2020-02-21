#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}
int ft_atoi(char *str)
{
    int i = 0;
    int minus = 0;
    int res = 0;
    while(str[i] == ' ' || str[i] == '\t' || str[i] == '\v' || str[i] == '\f')
    {
        i++;
    }
    if(str[i] == '-')
    {
        minus++;
        i++;
    }
    if(str[i] == '+')
        i++;
    while(str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + (str[i] - '0');
        i++;
    }
    if(minus > 0)
    {
        res = res * -1;
    }
    return (res);
}
int main(int argc, char **argv)
{
    
    int s = ft_atoi(argv[1]);
    printf("%d", s);
    return 0;
}
