/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndreadno <ndreadno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 10:22:34 by ndreadno          #+#    #+#             */
/*   Updated: 2020/05/13 23:53:08 by ndreadno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

char	*ft_strdup(const char *src)
{
	int		i;
	char	*str;

	i = ft_strlen(src);
	str = (char*)malloc(sizeof(*str) * (i + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	ft_strlcpy(str, src, i + 1);
	return (str);
}
