/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjedrycz <p.jedryczkowski@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 19:02:04 by pjedrycz          #+#    #+#             */
/*   Updated: 2024/03/13 18:44:32 by pjedrycz         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stdlib.h>
#include "libft.h"

static int  ft_words(const char *str, char c)
{
    int number;
    int flag;

    number = 0;
    flag = 0;
    while (*str)
    {
        if (*str != c && flag == 0)
        {
            number++;
            flag = 1;
        }
        else if (*str == c)
        {
            flag = 0;
        }
        str++;
    }
    return (number);
}

static char *ft_wordcpy(const char *str, int start, int end)
{
    char    *word;
    int     i;

    i = 0;
    word = malloc((end - start +1) * sizeof(char));
    if (!word)
    {
        return ('\0');
    }
    while (start < end)
    {
        word[i] = str[start];
        i++;
        start++;
    }
    word[i] = '\0';
    return (word);
}

static void *ft_free(char **strs, int count)
{
    int i;

    i = 0;
    while (i < count)
    {
        free(strs[i]);
        i++;
    }
    free(strs);
    return ('\0');
}

char    **ft_split(char const *s, char c)
{
    char    **res;
    size_t  i;
    int     j;
    int     s_word;

    i = 0;
    j = 0;
    s_word = -1;
    res = ft_calloc((ft_words(s, c) + 1), sizeof(char *));
    if(!res)
    {
        return ('\0');
    }
    while (i <= ft_strlen(s))
    {
        if (s[i] != c && s_word < 0)
        {
            s_word = i;
        }
        else if ((s[i] == c || i == ft_strlen(s)) && s_word >= 0)
        {
            res[j] = ft_wordcpy(s, s_word, i);
            if (!(res[j]))
            {
                return (ft_free(res, j));
            }
            s_word = -1;
            j++;
        }
        i++;
    }
    return (res);
}