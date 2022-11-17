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
//			if pointer s is empty => return (0), (0 * 1 = 0)
//		- Why Multiplying by 10? so the variable serve as a placereser for
//			 all numbers in the string (i.e "123", after first iteration 
//			(res = 1 * 10 + '2' - '0'= 12))
//		- Substracting '0' which is 48 in ASCII from 
//			the current character pointed to by pointer s (i.e. ('1' - '0') = 1)
// Step 4 : the variable res & check are declared to check overflow
//			- Checking if the OLD res is diffrent than NEW res / 10
//			- returning 0 (overflow), returning -1 (underflow)
// Step 6 : return res * sign

/*convert ASCII to integer*/

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned	long	res;
	unsigned	long	check;
	int	sign;

	sign = 1;
	res = 0;
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
		check = res;
		res = res * 10 + *str - '0';
		if ((res / 10) != check && sign == -1)
			return (0);
		else if ((res / 10) != check && sign == 1)
			return (-1);
		str++;
	}
	return (res * sign);
}

// #if 0
// int main()
// {
// 	printf("Mine %d\n", ft_atoi("9999999999999999999"));
// 	printf("original %d\n", atoi("9999999999999999999"));
// 	// printf("%zu\n", sizeof(unsigned char));
// }
// #endif