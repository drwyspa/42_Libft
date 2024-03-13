/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 21:17:10 by pjedrycz          #+#    #+#             */
/*   Updated: 2024/03/13 18:45:48 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

char    ft_strdup(const char *s)
{
    char    *sdup;
    size_t  i;

    i = 0;
    sdup = (char *) malloc (ft_strlen(s) + 1);
    if (!sdup)
    {
        return ('\0');
    }
    while (s[i])
    {
        sdup[i] = s[i];
        i++;
    }
    sdup[i] = '\0';
    return (sdup);
}