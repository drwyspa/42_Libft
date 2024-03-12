/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 17:47:37 by pjedrycz          #+#    #+#             */
/*   Updated: 2024/03/12 17:57:19 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stdlib.h>
#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*res;

	i = 0;
	res = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!res)
	{
		return ('\0');
	}
	while (i < ft_strlen(s))
	{
		res[i] = (*f)(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}