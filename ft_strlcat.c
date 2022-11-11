/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfouadi <mfouadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 22:36:36 by mfouadi           #+#    #+#             */
/*   Updated: 2022/11/07 09:29:44 by mfouadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//concatenate
// the initial length of dst plus the length of src
// the return value is >= dstsize, the output string has been truncated.
//  It is the caller's responsibility to handle this.		
// #include <stdio.h>
// #include <string.h>
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len_src;
	size_t	len_dst;

	len_src = ft_strlen(src);
	i = 0;
	if (dst == NULL && dstsize == 0)
		return (len_src);
	len_dst = ft_strlen(dst);
	if (dstsize < len_dst)
		return (dstsize + len_src);
	while ((*src != '\0') && i < dstsize - len_dst - 1)
	{
		*(dst++ + len_dst) = *src++;
		i++;
	}
	return (*(dst + len_dst) = '\0', len_dst + len_src);
}
// rrrrrr^@^@^@^@a^@^@^@^@
// lorem ipsum dolor sit ametrrrrrr^@^@^@^@a^@^@^@^@
// lorem ipsum dolor sit amet
// #include <string.h>
// #include <stdio.h>

// int main()
// {
// 	// char dest[11];

// 	// dest[10] = 'a';
// 	// int y = 4;

// 	// printf("%lu\n", ft_strlcat(dest, "lorem ipsum dolor sit amet", 11));
// 	// printf("%s\n", dest);
// }