/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 13:01:59 by pjedrycz          #+#    #+#             */
/*   Updated: 2024/03/16 13:03:10 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_strdup(const char *s)
{
	char	*sdup;
	size_t	i;

	i = 0;
	sdup = (char *) malloc (ft_strlen(s) + 1);
	if (!sdup)
		return (NULL);
	while (s[i++])
		sdup[i] = s[i];
	sdup[i] = '\0';
	return (sdup);
}
