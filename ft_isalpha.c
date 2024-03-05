/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 17:40:46 by pjedrycz          #+#    #+#             */
/*   Updated: 2024/03/04 18:37:32 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/


int ft_isalpha(int c)
{
    return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}