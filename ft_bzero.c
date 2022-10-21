/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfouadi <mfouadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 23:41:20 by mfouadi           #+#    #+#             */
/*   Updated: 2022/10/21 00:39:26 by mfouadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// write zeroes to a byte string

void ft_bzero(void *s, size_t n)
{
//casting to char* since 0 and '\0' are characters
    while (n > 0 && *(char*)s != '\0')
    {
        *(char*)s = 0;
        s++;
        n--;
    }
    return;
}