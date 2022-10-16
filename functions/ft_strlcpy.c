/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfouadi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 17:07:47 by mfouadi           #+#    #+#             */
/*   Updated: 2022/10/11 17:11:33 by mfouadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Note that room for the NUL should be included in dstsize.
// strlcpy() copies up to dstsize - 1 characters from the string src to dst
// If the return value is >= dstsize, the output string has been truncated.  It is the caller's responsibility to handle this
// Restrict : no other pointer will be used to access the object to which it points
// For strlcpy() that means the length of src.

#include <stdio.h>
#include <string.h>
#include "libft.h"

/*
unsigned int ft_strlen(const	char *s)
{	
	unsigned	int	i;
	i = 0;

	while(*s != '\0')
	{
		s++;
		i++;
	}
	return i;
}
*/
size_t	ft_strlcpy(char *dst, const char *src, size_t	dstsize)
{	
	size_t	i;
	size_t	srclen;	
	
	srclen = ft_strlen(src);
	if (dstsize == 0)
		return srclen;

	i = 0;

	while ((*src != '\0') && ( i < dstsize - 1))
	{
		*dst = *src;
		dst++;
		src++;
		i++;
	}
	*dst = '\0';
	return srclen; //Length of src
}
/*
int	main()
{
	size_t	size;
	
	size = 30;
	char	dst[size];
	char	dstr[size];
	printf("MINE : %zu\n", ft_strlcpy(dst, "helldofekiddwdwb9=3hbhjec", sizeof(dst)));
	printf("REAL : %lu\n\n", strlcpy(dstr, "helloejckfhdwdw1dcjchbcsd", sizeof(dstr)));
	printf("MINE : %s\n", dst);	
	printf("REAL : %s\n\n", dstr);
	return 0;
}
*/