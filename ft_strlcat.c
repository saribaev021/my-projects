/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndreadno <ndreadno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 11:18:48 by ndreadno          #+#    #+#             */
/*   Updated: 2020/05/12 13:46:18 by ndreadno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t lend;
	size_t lens;

	i = 0;
	lend = ft_strlen(dst);
	lens = ft_strlen(src);
	if (size < lend)
	{
		return (lens + size);
	}
	else
	{
		lens += lend;
		while (src[i] != '\0' && lend < size - 1)
		{
			dst[lend] = src[i];
			i++;
			lend++;
		}
		dst[lend] = '\0';
	}
	return (lens);
}
