/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 18:04:44 by pjedrycz          #+#    #+#             */
/*   Updated: 2024/03/13 18:39:09 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t          i;
    unsigned char   *str1;
    unsigned char   *str2;

    str1 = (unsigned char *) s1;
    str2 = (unsigned char *) s2;
    i = 0;
    while (i < n)
    {
        if ((unsigned char) str1[i] != (unsigned char) str2[i])
        {
            return ((unsigned char) str1[i] - (unsigned char) str2[i]);
        }
    }
    return (0);
}