/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 21:04:21 by pjedrycz          #+#    #+#             */
/*   Updated: 2024/03/13 18:52:39 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    int     i;
    char    *r;
    char    cc;

    cc = (char) c;
    i = 0;
    r = '\0';
    while (s[i] != '\0')
    {
        if (s[i] == cc)
        {
            r = (char *) &s[i];
        }
        i++;
    }
    if (s[i] == cc)
    {
        r = (char *) &s[i];
    }
    return (r);
}