/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfouadi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 19:38:02 by mfouadi           #+#    #+#             */
/*   Updated: 2022/10/10 23:47:13 by mfouadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//** RETURN VALUES : The isalpha() function returns zero if the character 
//tests false and returns non-zero if the character tests true
//if ((c >= 'A' && c  <= 'Z') || ('a' <= c && c <= 'z')){
//	return c;
//}
//return 0;
//Behave as boolean value wheater 0 or 1

#include <stdio.h>

int ft_isalpha(int c)

{
	return ((c >= 'A' && c <= 'Z') || ('a' <= c && c <= 'z'));
}
/*
int	main ()
{
	printf("%d\n", ft_isalpha('s'));
}
*/