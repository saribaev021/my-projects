#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb > 0)
	{
		int		i;
	    char	s[11];

	    i = 0;
	    while (nb > 0)
	    {
		    s[i] = nb % 10 + 48;
		    nb = nb / 10;
		    i++;
	    }
	    while (i-- >= 1)
	    {
		    ft_putchar(s[i]);
	    }
	}
	else
	{
		ft_putchar(nb % 10 + 48);
	}
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
    }
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

int ft_prime(int nb)
{
    int i = 2;
    while(i <= nb)  
    {
        if (nb % i == 0)
        {
            if (i == nb)
            {
                return (1);
            }
            return (0);
        }
        i++;
    }
    return (0);
}
int ft_prime_summ(int nb)
{
    int i = 0;
    int summ = 0;
    while(i <= nb)
    {
        if(ft_prime(i))
        {
            summ = summ + i;
        }
        i++;
    }
    return(summ);
}
int main(int argc, char **argv)
{
    if(argc == 2)
    {
        int nb = ft_atoi(argv[1]);
        if(nb >= 0)
        {
            ft_putnbr(ft_prime_summ(nb));
        }        
    }
    ft_putchar('\n');
    return 0;
}