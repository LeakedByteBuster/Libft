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

// Step 1 : Skipping ' ', \t, \f...
// Step 2 : if char founed is '-' sign = -1, else sign = 1
// Step 3: 	
//		- if the next char after spaces, '-' or '+' is not a digit => return 0
// 		- Declaring a variable of type long long and initializing it to 0;
//		- Why Multiplying by 10? so the variable holds all numbers in the string
//			(i.e "123", after first iteration (hold = 1 * 10 + '2' - '0'= 12))
//		- Substracting '0' which is 48 in ASCII from 
//			the current character pointed to by pointer s (i.e. ('1' - '0') = 1)
// Step 4 : the variable hold is declared of type long long to check overflow
//			- if hold > INT_MAX => return 0
//			- if hold < INT MIN => return -1
// Step 5 : return hold * sign

/*convert ASCII to integer*/
#include "libft.h"
#define INT_MIN -2147483648
#define INT_MAX 2147483647

int	ft_atoi(const char *str)
{
	long long	hold;
	int			sign;

	sign = 1;
	hold = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
	{
		sign *= -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str != '\0' && ft_isdigit(*str))
	{
		hold = hold * 10 + *str - '0';
		if (hold < INT_MIN && sign == -1)
			return (0);
		else if (hold > INT_MAX && sign == 1)
			return (-1);
		str++;
	}
	return (hold * sign);
}
