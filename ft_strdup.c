/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 13:01:59 by pjedrycz          #+#    #+#             */
/*   Updated: 2024/03/21 21:21:31 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*sdup;
	size_t	i;

	sdup = (char *) malloc(ft_strlen(s) + 1);
	if (!sdup)
		return (NULL);
	i = 0;
	while (s[i])
	{
		sdup[i] = s[i];
		i++;
	}
	sdup[i] = '\0';
	return (sdup);
}

// int	main()
// {
// 	char		*str;
// 	char		*strdup;

// 	str = "test";
// 	strdup = ft_strdup(str);
// 	printf("Duplicated string: %s\n", ft_strdup(str));
// 	printf("Duplicated string len: %ld\n", ft_strlen(strdup));
// 	return (0);
// }