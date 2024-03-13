/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 21:55:03 by pjedrycz          #+#    #+#             */
/*   Updated: 2024/03/13 18:54:00 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *subs;
    size_t  i;

    i = 0;
    if (!s)
    {
        return ('\0');
    }
    if (start > ft_strlen(s))
    {
        return (ft_strdup(""));
    }
    if (len > ft_strlen(s + start))
    {
        len = ft_strlen(s + start):
    }
    subs = ft_calloc(len + 1, sizeof(char));
    if (!subs)
    {
        return ('\0');
    }
    while (i < len)
    {
        subs[i] = s[i + start];
        i++;
    }
    return (subs);
}