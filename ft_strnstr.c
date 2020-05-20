/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndreadno <ndreadno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/07 15:32:24 by ndreadno          #+#    #+#             */
/*   Updated: 2020/05/20 19:01:18 by ndreadno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

static	int		ft_sstrncmp(const char *str1, const char *str2, size_t n)
{
	size_t len;
	size_t i;

	len = 0;
	i = 0;
	while (str2[len] != '\0')
	{
		len++;
	}
	while (n > 0 && len > 0)
	{
		if (str1[i] > str2[i])
			return (1);
		if (str1[i] < str2[i])
			return (-1);
		n--;
		len--;
		i++;
	}
	return (len + 0);
}

char			*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;

	i = 0;
	if (big[0] != '\0')
	{
		if (little[0] == '\0')
			return ((char *)big);
		while (len > 0)
		{
			if (big[i] == little[0])
				if (ft_sstrncmp((char *)&big[i], little, len) == 0)
				{
					return ((char *)&big[i]);
				}
			len--;
			i++;
		}
	}
	return (NULL);
}
