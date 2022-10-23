/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfouadi <mfouadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 20:43:44 by mfouadi           #+#    #+#             */
/*   Updated: 2022/10/23 21:03:22 by mfouadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *newStr;
	size_t len_s1;
	size_t len_s2;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	
	newStr = (char *)malloc(len_s1 + len_s2 + NULL_CHAR);
	if (!newStr)
		return (newStr);
	while (s1++)
		*newStr++ = *(char *)s1++;
	newStr += len_s1;
	while (s2++)
		*newStr++ = *(char *)s2++;
	*newStr = '\0';
	return (newStr);
}