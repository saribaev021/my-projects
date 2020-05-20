/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndreadno <ndreadno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/20 19:30:27 by ndreadno          #+#    #+#             */
/*   Updated: 2020/05/21 00:09:49 by ndreadno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_nb(int n, char *str, int len)
{
    int i; 

    i = len;
    if (n < 0 && n > -2147483648)
    {
        str[0] = '-';
        n = n * (-1);
        len--;
    }
    else if (n == -2147483648)
    {
        str[0] = '-';
        str[1] = '2';
        n = 147483648;
        len = len - 2;
    }
    str[i] = '\0';
    while (len-- > 0)
    {
        i--;
        str[i] = n % 10 + 48;
        n = n / 10;
    }
}

char    *ft_itoa(int n)
{
    int     nn;
    int     i;
    char    *res;

    i = 0;
    nn = n;
    while (nn != 0)
    {
        nn = nn / 10;
        i++;
    }
    if (n <= 0)
        i++;
    res = (char*)malloc(sizeof(*res) * (i + 1));
    if(res== NULL)
        return (NULL);
    ft_nb(n, res, i);
    return (res);
}
