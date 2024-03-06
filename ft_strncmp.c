/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 21:21:09 by pjedrycz          #+#    #+#             */
/*   Updated: 2024/03/06 21:37:45 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t  i;

    i = 0;
    if (n == 0)
    {
        return (0);
    }
    while ((s1[i] || s2[i]) && i < n)
    {
        if ((unsigned char) s1[i] != (unsigned char) s2[i])
        {
            return ((unsigned char) s1[i] - (unsigned char) s2[i]);
        }
        i++;
    }
    return (0);
}