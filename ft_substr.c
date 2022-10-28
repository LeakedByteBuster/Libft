/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfouadi <mfouadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 03:19:34 by mfouadi           #+#    #+#             */
/*   Updated: 2022/10/27 01:13:35 by mfouadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Allocates (with malloc(3)) and returns a substring from the string ’s’.
// The substring begins at index ’start’ and is of maximum size ’len’.
#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *ptr;
	size_t len_s;
	unsigned int i;

	len_s = ft_strlen(s);
	if (len_s >= len + start)
		ptr = (char *)malloc(len + NULL_CHAR);
	// else if (start < len_s && start + len > len_s)
	// 	ptr = (char *) malloc (1 * (len_s - start + NULL_CHAR));
	else
		return (ft_strdup(""));
	//No space available to be allocated
	if (!ptr)
		return (ptr);
	s += start;
	i = 0;
	while (len-- && s)
	{
		*ptr++ = *s++;
		i++;
	}
	*ptr = '\0';
	return (ptr - i);
}
