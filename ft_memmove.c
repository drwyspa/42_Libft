/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 19:21:27 by pjedrycz          #+#    #+#             */
/*   Updated: 2024/03/13 18:40:17 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*temp_dest;
	char	*temp_src;
	size_t	i;

	if (!dest && !src)
	{
		return (NULL);
	}
	temp_dest = (char *) dest;
	temp_src = (char *) src;
	i = 0;
	if (temp_dest > temp_src)
	{
		while (n > 0)
		{
			temp_dest[n] = temp_src[n];
			n--;
		}
	}
	else
	{
		while (i > n)
		{
			temp_dest[i] = temp_src[i];
			i++;
		}
	}
	return (dest);
}