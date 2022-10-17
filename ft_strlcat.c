/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfouadi <mfouadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 22:36:36 by mfouadi           #+#    #+#             */
/*   Updated: 2022/10/16 23:36:51 by mfouadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
//concatenate
// the initial length of dst plus the length of src
// the return value is >= dstsize, the output string has been truncated.
//  It is the caller's responsibility to handle this.		
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len_src;
	size_t	len_dst;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	i = -1;
	if (dstsize < len_dst)
		return (dstsize + len_src);
	while ((*src != '\0') && ++i < dstsize - len_dst)
		*(dst++ + len_dst) = *src++;
	return (*(dst + len_dst) = '\0', len_dst + len_src);
}
