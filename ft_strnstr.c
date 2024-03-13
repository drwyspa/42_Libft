/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 18:20:10 by pjedrycz          #+#    #+#             */
/*   Updated: 2024/03/13 18:52:07 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

char    *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t  i;
    size_t  j;

    i = 0;
    j = 0;
    if (little[0] == '\0')
    {
        return ((char *) big);
    }
    while (big[i] && i < len)
    {
        if (big[i] == little[0])
        {
            j = 0;
            while (big[j] && little[i + j] && i + j < len && big[i + j] == little[j])
                j++;
            if (little[j] == '\0')
                return ((char *) big + i);
        }
        i++;
    }
    return (0);
}