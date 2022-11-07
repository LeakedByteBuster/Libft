/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfouadi <mfouadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 07:46:13 by mfouadi           #+#    #+#             */
/*   Updated: 2022/11/07 06:12:03 by mfouadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define TRUE 1;
#define FALSE 0;
#define INT_MIN -2147483648
/*Counting number of digits*/
static	int	count_n(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	else if (n < 0)
		count++;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

//Allocates Memory for the string

static char	*alloc(char *p, int n)
{
	p = (char *)malloc((n + NULL_CHAR) * sizeof(char));
	if (p == NULL)
		return (NULL);
	p[n] = '\0';
	return (p);
}

/*Reverse the string*/

static char	*rev(char *str, int sign)
{
	int		i;
	int		j;
	char	tmp;

	i = 0;
	j = ft_strlen(str) - NULL_CHAR;
	while (i < j)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i++;
		j--;
	}
	if (sign)
		str[0] = '-';
	return (str);
}

/*INTEGER to ASCII*/

static char	*int_to_ascii(char *str, int *num_dig, int *n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (str[i] = '0', str);
	while (i < *num_dig)
	{
		str[i++] = *n % 10 + '0';
		*n /= 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int		num_dig;
	int		sign;
	char	*str;

	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	sign = FALSE;
	str = NULL;
	num_dig = count_n(n);
	str = alloc(str, num_dig);
	if (str == NULL)
		return (NULL);
	if (n < 0)
	{
		sign = TRUE;
		n *= -1;
	}
	str = int_to_ascii(str, &num_dig, &n);
	return (rev(str, sign), str);
}
	// int	i;

	// i = 0;
	// if (n == 0)
	// 	return (str[i] = '0', str);
	// if (n < 0)
	// {
	// 	sign = TRUE;
	// 	n *= -1;
	// }
	// while (i < num_dig)
	// {
	// 	str[i++] = n % 10 + '0';
	// 	n /= 10;
	// }	

// #include <stdio.h>
// int main ()
// {
// 	int n = -2147483647 -1;
// 	char *str = ft_itoa(n);
// 	printf("\ncount words : %d\n", count_n(n));
// 	printf("str : %s\n", str);
// }
