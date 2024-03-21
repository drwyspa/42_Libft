/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 13:20:12 by pjedrycz          #+#    #+#             */
/*   Updated: 2024/03/21 18:34:04 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*r;
	char	cc;

	cc = (char) c;
	i = 0;
	r = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == cc)
			r = (char *) &s[i];
		i++;
	}
	if (s[i] == cc)
		r = (char *) &s[i];
	return (r);
}
