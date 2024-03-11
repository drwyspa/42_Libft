/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 21:00:20 by pjedrycz          #+#    #+#             */
/*   Updated: 2024/03/08 15:49:29 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stdlib.h>
#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    unsigned char   *temp;
    size_t          i;

    i = 0;
    temp = malloc(count * size);
    if (!temp)
    {
        return ('\0');
    }
    while (i < count * size)
    {
        temp[i] = 0;
        i++;
    }
    return (temp);
}