/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfouadi <mfouadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 22:25:31 by mfouadi           #+#    #+#             */
/*   Updated: 2022/11/07 04:41:17 by mfouadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//convert ASCII string to integer
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	hold;
	int	sign;

	sign = 1;
	hold = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
	{
		sign *= -1;
		str++;
	}
	if (*str == '+')
		str++;
	while (*str != '\0' && ft_isdigit(*str))
	{
		hold = hold * 10 + *str - '0';
		str++;
	}
	return (hold * sign);
}
