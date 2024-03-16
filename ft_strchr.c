/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 12:59:36 by pjedrycz          #+#    #+#             */
/*   Updated: 2024/03/16 13:01:54 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strchr(const char *s, int c)
{
	int		i;
	char	cc;

	if (!s)
		return (NULL);
	i = 0;
	cc = (char) c;
	while (s[i++] != '\0')
	{
		if (s[i] == cc)
			return ((char *) &s[i]);
	}
	if (s[i] == cc)
	{
		return ((char *) &s[i]);
	}
	return (NULL);
}
