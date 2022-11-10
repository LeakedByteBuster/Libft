/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfouadi <mfouadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 01:49:22 by mfouadi           #+#    #+#             */
/*   Updated: 2022/11/07 09:35:59 by mfouadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//locate a substring in a string
#include "libft.h"

#include <stdio.h>
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	hs;
	size_t	nl;
	char *begin;
	char	*hay;
	char	*need;

	hay = (char *)(haystack);
	need = (char *)(needle);
	
	if (*needle == '\0')
		return (hay);
	if (len <= 0 || *haystack == '\0')
		return (NULL);
	while (len > 0 && *hay != '\0')
	{
		hs = 0;
		nl = 0;
		begin = hay;
			// printf("%s\n", hay);
		while (hay[hs] == need[nl] && len > 0 && *hay != '\0')
		{
			if (need[nl + 1] == '\0')
			{
				return (begin);
			}
			hs++;
			nl++;
			len--;
		}
		len--;
		hay++;
	}
	return (NULL);
	// unsigned int i;
	// unsigned int j;

	// if (!needle[0])
	// 	return ((char *)haystack);
	// if (len <= 0 && !haystack[0])
	// 	return (0);
	// i = -1;
	// while (((char *)haystack)[++i] && len--)
	// {
	// 	j = 0;
	// 	while (((char *)haystack)[i] == needle[j] && len--)
	// 	{
	// 		if (needle[j+1] == '\0')
	// 			return (&((char *)haystack)[i - j]);
	// 		i++;
	// 		j++;
	// 	}
	// }
	// return (NULL);
}

// #include <string.h>
// #include <stdio.h>
// int main()
// {
// 	printf("\n\n%s\n\n", strnstr("aaabcabcd", "abcd", 9));
// 	printf("\n%s\n\n", ft_strnstr("aaabcabcd", "abcd", 9));
// }