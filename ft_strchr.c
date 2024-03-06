/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 20:40:09 by pjedrycz          #+#    #+#             */
/*   Updated: 2024/03/06 21:01:48 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

char *strchr(const char *s, int c)
{
    int     i;
    char    cc;

    if (!s)
    {
        return ('\0');
    }
    i = 0;
    cc = (char) c;
    while (s[i] != '\0')
    {
        if (s[i] == cc)
        {
            return ((char *) &s[i]);
        }
        i++;
    }
    if (s[i] == cc)
    {
        return ((char *) &s[i]);
    }
    return ('\0');
}