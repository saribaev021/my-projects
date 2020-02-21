/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 14:10:38 by exam              #+#    #+#             */
/*   Updated: 2020/02/21 15:17:12 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putsymbol(c)
{
	write(1, &c, 1);
}
void	ft_putnbr(int nb)
{
	int i = 0;
	char array[12];

	if(nb >= 0 && nb <= 9)
	{
		ft_putsymbol(nb + '0');
		return ;
	}
	while(nb != 0)
	{
		array[i] = nb % 10 + '0';
		nb = nb / 10;
		i++;
	}
	while(i >= 0)
	{
		ft_putsymbol(array[i]);
		i--;
	}
}
int ft_atoi(char *str)
{
	int i = 0;
	int minus = 0;
	int res = 0;
	while(str[i] == ' ' || str[i] == '\t')
		i++;
	if(str[i] == '-')
	{
		minus++;
		i++;
	}
	if(str[i] == '+' && minus == 0)
		i++;
	while(str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}
	if(minus > 0)
		res = res * - 1;
	return(res);
}
void	ft_tab_mult(int nb)
{
	int i;
	
	i = 1;
	while(i <= 9)
	{
		ft_putsymbol(i + 48);
		write(1, " x ", 3);
		ft_putnbr(nb);
		write(1, " = ", 3);
		ft_putnbr(i * nb);
		write(1, "\n", 1);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int nb;

	if(argc == 2)
	{
		nb = ft_atoi(argv[1]);
		if(nb < 0)
		{
			return (0);
		}
		else
			ft_tab_mult(nb);
	}
	else
		write(1, "\n", 1);
	return (0);
}
