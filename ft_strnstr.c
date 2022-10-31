/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfouadi <mfouadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 01:49:22 by mfouadi           #+#    #+#             */
/*   Updated: 2022/10/31 01:51:44 by mfouadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//locate a substring in a string
#include "libft.h"

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t  hs;
    size_t  nl;

    char    *hay = (char *)(haystack);
    char    *need = (char *)(needle);

    if (*need == '\0')
        return (hay);
    hs = 0;
    while (hs < len)
    {
        nl = 0;
         while (haystack[hs] == needle[nl])
         {
            if (needle[nl+1] == '\0')
                return (hay + hs);
            nl++;
         }
         hs++;
    }
    return (NULL);
}

