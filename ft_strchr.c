/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfouadi <mfouadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 01:25:36 by mfouadi           #+#    #+#             */
/*   Updated: 2022/11/07 09:26:59 by mfouadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// locate character in string
#include "libft.h"
// #include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int i = 0;
	while (*s != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)(s));
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}
// #include <string.h>

// int main(){
	
// 	char s[] = "tripouille";
// 	printf("%s", ft_strchr(s, 't' + 256));
// }