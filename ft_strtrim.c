/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 16:09:31 by pjedrycz          #+#    #+#             */
/*   Updated: 2024/03/13 18:53:21 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stdlib.h>
#include "libft.h"

static int  ft_isinset(const char *set, char c)
{
    int i;

    i = 0;
    while (set[i])
    {
        if (c == set[i])
        {
            return (1);
        }
        i++;
    }
    return (0);
}

static char *ft_trimmed(const char *s1, size_t start, size_t len)
{
    char    *str;
    size_t  i;

    i = 0;
    if (len <= 0 || start >= ft_strlen(s1))
    {
        return ft_strdup("");
    }
    str = ft_calloc(len + 1, sizeof(char));
    if (!str)
    {
        return ('\0');
    }
    while (i < len)
    {
        str[i] = s1[start + 1];
    }
    return (str);
}



char    *ft_strtrim(char const *s1, char const *set)
{
    int i;
    int j;

    i = 0;
    j = ft_strlen(s1) - 1;
    if (ft_strlen(s1) == 0)
    {
        return (ft_strdup(""));
    }
    while (ft_isinset(set, s1[i]))
    {
        i++;
    }
    while (ft_isinset(set, s1[j]))
    {
        j--;
    }
    return (ft_trimmed(s1, i, j - (i - 1)));
}