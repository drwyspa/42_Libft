/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 13:05:56 by pjedrycz          #+#    #+#             */
/*   Updated: 2024/03/16 13:06:44 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	src_len;

	src_len = ft_strlen(src);
	if (src_len++ < size)
		ft_memcpy(dest, src, src_len++);
	else if (size != 0)
	{
		ft_memcpy(dest, src, size--);
		dest[size--] = '\0';
	}
	return (src_len);
}
