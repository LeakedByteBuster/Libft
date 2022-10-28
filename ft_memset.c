/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfouadi <mfouadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 23:14:52 by mfouadi           #+#    #+#             */
/*   Updated: 2022/10/20 23:39:51 by mfouadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//fill a byte string with a byte value

#include "libft.h"
#include <stdio.h>

void    *ft_memset(void *b, int c, size_t len)
{
    size_t i;
    size_t  tmp;
    unsigned char cast_c;
    
    cast_c = (unsigned char)(c);
    tmp = len;
    i = 0;
    while (len > 0)
    {
        *(unsigned char *)(b) = cast_c;
        b++;
        len--;
    }

    return ((unsigned char*)b - tmp);
}