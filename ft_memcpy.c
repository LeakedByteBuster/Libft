/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfouadi <mfouadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 00:46:21 by mfouadi           #+#    #+#             */
/*   Updated: 2022/11/07 08:41:43 by mfouadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// copy n bytes from memory area
// If dst and src overlap, behavior is undefined
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*d;
	char	*s;
	size_t	i;

	d = (char *)dst;
	s = (char *)src;
	if (!dst && !src)
		return (NULL);
	i = -1;
	while (++i < n)
		d[i] = s[i];
	return ((void *)(dst));
}
