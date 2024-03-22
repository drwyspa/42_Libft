/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 13:04:28 by pjedrycz          #+#    #+#             */
/*   Updated: 2024/03/22 20:10:50 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dest_len;
	size_t	src_len;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	i = 0;
	j = dest_len;
	if ((dest_len < size - 1) && (size > 0))
	{
		while (src[i] != '\0' && dest_len + 1 < size - 1)
		{
			dest[j] = src[i];
			i++;
			j++;
		}
		dest[j] = '\0';
	}
	else if (dest_len >= size)
		dest_len = size;
	return (dest_len + src_len);
}

int	main()
{
	char *c1 = "source";
	char d2[100] = "destination";
	char d3[100] = "destination";
	char d4[100] = "destination";
	char d5[100] = "dest";
	char d6[100] = "dest";
	char d7[100] = "dest";
	printf("11, destination : %lu, %s\n", ft_strlcat(d2, c1, 5), d2);
	printf("14, destination : %lu, %s\n", ft_strlcat(d3, c1, 8), d3);
	printf("17, destinations : %lu, %s\n", ft_strlcat(d4, c1, 13), d4);
	printf("10, dest : %lu, %s\n", ft_strlcat(d5, c1, 5), d5);
	printf("10, destsou: %lu, %s\n", ft_strlcat(d6, c1, 8), d6);
	printf("10, destsource : %lu, %s\n", ft_strlcat(d7, c1, 13), d7);
	return (0);
}