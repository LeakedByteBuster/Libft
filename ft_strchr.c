/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfouadi <mfouadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 01:25:36 by mfouadi           #+#    #+#             */
/*   Updated: 2022/10/22 21:22:54 by mfouadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// locate character in string
#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    if (c == '\0')
    {
        while (!(*s == '\0'))
            s++;
        return ((char *)(s));
    }
    while (*s != '\0')
    {
        if (*s == c)
           return ((char *)(s));
        s++;
    }
    return (NULL);
}
