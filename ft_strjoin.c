/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 15:30:18 by pjedrycz          #+#    #+#             */
/*   Updated: 2024/03/08 15:49:35 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stdlib.h>
#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char    *sum;
    int     i;
    int     j;

    i = 0;
    j = 0;
    sum = (char *) malloc ((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
    if (!sum)
    {
        return ('\0');
    }
    while (s1[i])
    {
        sum[j] = s1[i];
        i++;
        j++;
    }
    i = 0;
    while (s2[i])
    {
        sum[j] = s2[i];
        i++;
        j++;
    }
    sum[j] = '\0';
    return (sum);
}