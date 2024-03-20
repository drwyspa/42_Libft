/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 13:05:56 by pjedrycz          #+#    #+#             */
/*   Updated: 2024/03/20 19:34:10 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	src_len;

	src_len = ft_strlen(src);
	if (src_len + 1 < size)
		ft_memcpy(dest, src, src_len++);
	else if (size != 0)
	{
		ft_memcpy(dest, src, size--);
		dest[size - 1] = '\0';
	}
	return (src_len);
}

// int	main()
// {
// 	char	*src = "dupa";
// 	char	*dest = "test";
// 	size_t	fin;

// 	printf ("src before: %s\n", src);
// 	printf ("dest before: %s\n", dest);
// 	fin = ft_strlcpy(dest, src, 3);
// 	printf ("string after: %ld", fin);
// 	return (0);
// }