/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndreadno <ndreadno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 11:57:34 by ndreadno          #+#    #+#             */
/*   Updated: 2020/05/20 18:59:13 by ndreadno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_checksp(const char *str)
{
	size_t i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\v' ||
	str[i] == '\f' || str[i] == '\r' || str[i] == '\n')
		i++;
	return (i);
}

static	int		ft_conv(const char *str, size_t i)
{
	int res;

	res = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res);
}

int				ft_atoi(const char *str)
{
	size_t	i;
	int		res;
	size_t	minus;

	minus = 0;
	i = ft_checksp(str);
	if (str[i] == '-')
	{
		minus++;
		i++;
	}
	if (str[i] == '+')
		i++;
	res = ft_conv(str, i);
	if (minus > 0)
		res = res * -1;
	return (res);
}
