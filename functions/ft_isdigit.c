/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfouadi <mfouadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 20:10:29 by mfouadi           #+#    #+#             */
/*   Updated: 2022/10/16 20:10:33 by mfouadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

//Checks whether the character passed is between '0' && '9'
int	ft_isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
/*
int	main()
{
	int	c;

	c = -1;
	printf("%d", ft_isdigit(c));
}
*/