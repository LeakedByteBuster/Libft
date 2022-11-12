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
//concatenate two strings
// the initial length of dst plus the length of src
// the return value is >= dstsize, the output string has been truncated.
//  It is the caller's responsibility to handle this.
// If NULL is sent whether in dst or src, strlcat segfault
// if dstsize = -1, original doesn't produce any executable

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len_src;
	size_t	len_dst;

	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	if ((long long)dstsize < 0)
		return (0);
	if (dstsize == 0)
		return (len_src);
	if (dstsize < len_dst)
		return (dstsize + len_src);
	i = len_dst;
	while ((*src != '\0') && i++ < dstsize - 1)
		*(dst++ + len_dst) = *src++;
	*(dst + len_dst) = '\0';
	return (len_dst + len_src);
}

#include <string.h>
#include <stdio.h>

int main()
{
	// char dest[30]; memset(dest, 0, 30);
	// char * src = (char *)"AAAAAAAAA";
	// dest[0] = 'B';
	// printf("\nMINe : %lu\n", ft_strlcat(dest, src, -1));
	// printf("%s\n", dest);

	char destr[30]; 
	memset(destr, 0, 30);
	char * srcr = (char *)"AAAAAAAAAAAAA";
	destr[0] = 'B';
	printf("ORIGINAL : %lu\n", strlcat(destr, srcr, -1));
	printf("%s\n", destr);

}