/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfouadi <mfouadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 20:43:44 by mfouadi           #+#    #+#             */
/*   Updated: 2022/11/07 09:29:04 by mfouadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Allocates (with malloc(3)) and returns a new string
//which is the result of the concatenation of ’s1’ and ’s2’
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	size_t	len_s1;
	size_t	len_s2;

	if (!s1)
		return (ft_strdup(s2));
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	new_str = (char *)malloc(len_s1 + len_s2 + NULL_CHAR);
	if (new_str == NULL)
		return (new_str);
	len_s1 = 0;
	len_s2 = 0;
	while (s1[len_s1])
		new_str[len_s2++] = s1[len_s1++];
	len_s1 = 0;
	while (s2[len_s1])
		new_str[len_s2++] = s2[len_s1++];
	new_str[len_s2] = '\0';
	return (new_str);
}
