/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfouadi <mfouadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 23:41:20 by mfouadi           #+#    #+#             */
/*   Updated: 2022/10/23 00:27:19 by mfouadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// write zeroes to a byte string

void ft_bzero(void *s, size_t n)
{
//Filling Bytes
    while (n-- > 0 && *(char*)s != '\0')
        *(char*)s++ = 0;
    return;
}