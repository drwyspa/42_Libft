/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 18:06:51 by pjedrycz          #+#    #+#             */
/*   Updated: 2024/03/05 18:20:34 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
	unsigned char	*i;

	i = (unsigned char *) s;
	while (n > 0)
	{
		*(i) = (unsigned char) c;
		n--;
	}
	return (s);
}