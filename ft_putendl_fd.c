/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 18:31:01 by pjedrycz          #+#    #+#             */
/*   Updated: 2024/03/16 12:49:16 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}
