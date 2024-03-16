/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 12:31:33 by pjedrycz          #+#    #+#             */
/*   Updated: 2024/03/16 12:41:16 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*temp;
	size_t			i;

	i = 0;
	temp = malloc(count * size);
	if (!temp)
	{
		return (NULL);
	}
	while (i < count * size)
	{
		temp[i] = 0;
		i++;
	}
	return (temp);
}
