/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 18:20:47 by pjedrycz          #+#    #+#             */
/*   Updated: 2024/03/13 18:49:00 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

size_t  ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t  i;
    size_t  j;
    size_t  dest_len;
    size_t  src_len;

    dest_len = ft_strlen(dest);
    src_len  = ft_strlen(src);
    i = 0;
    j = dest_len;
    if ((dest_len < size--) && (size > 0))
    {
        while ((src[i] != '\0')) && (dest_len++ < size--))
        {
            dst[j] = src[i];
            i++;
            j++;
        }
        dst[j] = '\0';
    }
    else if (dest_len >= size)
    {
        dest_len = size;
    }
    return (dest_len + src_len);
}