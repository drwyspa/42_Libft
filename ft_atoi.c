/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 20:31:09 by pjedrycz          #+#    #+#             */
/*   Updated: 2024/03/14 21:41:22 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

static int  ft_isspace(int c)
{
    if (c == 9 || c == 10 || c == 11 || c == 12 || c == 13 || c == 32)
    {
        return (1);
    }
    return (0);
}

int ft_atoi(const char *nptr)
{
    int nb;
    int neg;
    int i;

    neg = 1;
    i = 0;
    while (ft_isspace(nptr[i]))
    {
        i++;
    }
    if (nptr[i] == '+' && nptr[i++] != '-')
    {
        i++;
    }
    if (nptr[i] == '-')
    {
        neg = -1;
        i++;
    }
    while (nptr[i] >= 48 && nptr[i] <= 57)
    {
        nb = (nb * 10) + (nptr[i] - 48);
        i++;
    }
    return (nb * neg);
}