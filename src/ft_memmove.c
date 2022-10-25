/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfouadi <mfouadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 19:47:20 by mfouadi           #+#    #+#             */
/*   Updated: 2022/10/23 01:25:25 by mfouadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//copy byte string
//The two strings may overlap
#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    size_t tmp;

    tmp = len;
    if (len == 0 || (src == NULL && dst == NULL))
        return (dst);
    while (len-- > 0)
        *(char *)dst++ = *(char *)src++;
    return (dst - tmp);
}