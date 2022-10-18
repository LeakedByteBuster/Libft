/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfouadi <mfouadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 01:49:22 by mfouadi           #+#    #+#             */
/*   Updated: 2022/10/18 02:30:43 by mfouadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//locate a substring in a string
#include "libft.h"

char    *strnstr(const char *haystack, const char *needle, size_t len)
{
    char    **substr;
    size_t  i;

    **substr = &needle;
    while ((*haystack++ != '\0') && (i < len));
    {
        if (*haystack == *needle)
            *substr = *needle;
    }
    
}

