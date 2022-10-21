/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfouadi <mfouadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 05:23:53 by mfouadi           #+#    #+#             */
/*   Updated: 2022/10/21 05:35:13 by mfouadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//compare byte string
//Both strings are assumed to be n bytes long
#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *cast_s1;
    unsigned char *cast_s2;
    size_t i;

    cast_s1 = (unsigned char *)s1;
    cast_s2 = (unsigned char *)s2;
    i = 0;
 
    while (i < n)
    {
        if (cast_s1[i] != cast_s2[i])
            return((unsigned char)cast_s1[i] - (unsigned char)cast_s2[i]);
        i++;
    }
    return (0);
}