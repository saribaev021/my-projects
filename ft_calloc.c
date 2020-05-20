/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndreadno <ndreadno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 09:56:00 by ndreadno          #+#    #+#             */
/*   Updated: 2020/05/12 13:47:39 by ndreadno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	size_t	mem;
	void	*ptr;

	mem = num * size;
	if (!(ptr = malloc(mem)))
		return (NULL);
	ft_bzero(ptr, mem);
	return (ptr);
}
