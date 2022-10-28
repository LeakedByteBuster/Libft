/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfouadi <mfouadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 04:14:11 by mfouadi           #+#    #+#             */
/*   Updated: 2022/10/21 04:42:42 by mfouadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//locate byte in byte string
#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char cast_c;
    unsigned char *cast_s;
    size_t  i;
    
    cast_c = (unsigned char)c;
    cast_s = (unsigned char*)s;
    i = -1;
    
    while (++i < n)
    {
        if (cast_c == cast_s[i])
            return ((void*)s +i);
    }
    return (NULL);
}