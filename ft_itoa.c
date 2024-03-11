/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 22:14:37 by pjedrycz          #+#    #+#             */
/*   Updated: 2024/03/11 22:46:42 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stdlib.h>
#include "libft.h"

static int ft_intlen(long nbr)
{
    int count;

    count = 0;
    if (nbr < 0)
    {
        count++;
        nbr = -nbr;
    }
    if (nbr == 0)
    {
        count++;
    }
    while (nbr != 0)
    {
        nbr /= 10;
        count++;
    }
    return (count);
}

static char *ft_preconv(int len)
{
    char    *tmp;

    tmp = malloc((len + 1) * sizeof(char));
    if (!tmp)
    {
        return ('\0');
    }
    tmp[0] = '0';
    return (tmp);
}

char *ft_itoa(int n)
{
    int     len;
    int     i;
    char    *result;
    long    nbr;

    nbr = n;
    len = ft_intlen(nbr);
    result = ft_preconv(len);
    if (!result)
    {
        return ('\0');
    }
    if (nbr < 0)
    {
        nbr = -nbr;
    }
    i = len - 1;
    while (nbr != 0)
    {
        result[i] = ((nbr % 10) + 48);
        nbr = nbr / 10;
        i--;
    }
    if (n < 0)
    {
        result[0] = '-';
    }
    result[len] = 0;
    return (result);
}