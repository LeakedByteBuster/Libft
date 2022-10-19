/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfouadi <mfouadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 02:33:45 by mfouadi           #+#    #+#             */
/*   Updated: 2022/10/19 06:09:21 by mfouadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    int i;
    if (!*s)
        return (NULL);
     i = ft_strlen(s) ; // hello i = 5 
    // s+=i;
    if (c == '\0') //
        return ((char *)s + i); // '\0'
    // i = ft_strlen(s);  
    while (i >= 0)
    {
        i--;
        if (s[i] == (unsigned char)(c)) //'\0'
            return ((char *)(s + i));
    }
    return (NULL);
}
