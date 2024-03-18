/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 12:33:32 by pjedrycz          #+#    #+#             */
/*   Updated: 2024/03/18 21:21:12 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

// #include <stdio.h>
#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (c);
	return (0);
}

// int main()
// {
// 	char	*d;
// 	int		n;
	
// 	d = "D";
// 	n = ft_isalpha(*d);
// 	printf("Wynik zadania: ");
// 	printf("%d", n);
// 	return (0);
// }