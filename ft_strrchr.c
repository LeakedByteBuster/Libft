/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfouadi <mfouadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 02:33:45 by mfouadi           #+#    #+#             */
/*   Updated: 2022/10/27 00:16:54 by mfouadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    int i;
   
    if (!*s)
        return (NULL);
     i = ft_strlen(s) ;

    if (c == '\0')
        return ((char *)s + i);
// Unicode (unsigned char)
    while (i >= 0)
    {
        i--;
        if (s[i] == (unsigned char)(c))
            return ((char *)(s + i));
    }
    return (NULL);
}