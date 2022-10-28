/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfouadi <mfouadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 00:46:21 by mfouadi           #+#    #+#             */
/*   Updated: 2022/10/22 21:16:41 by mfouadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    char* d;
    char* s;
    size_t i;
    
    d = (char*)dst;
    s = (char*)src;
 
    if (!dst && !src)
        return(NULL);   
    i = -1;
    while (++i < n)
        d[i] = s[i];
    return((void*)(dst));
}
