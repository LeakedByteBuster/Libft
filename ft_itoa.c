/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfouadi <mfouadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 07:46:13 by mfouadi           #+#    #+#             */
/*   Updated: 2022/11/02 06:19:53 by mfouadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define TRUE 1;
#define FALSE 0;
#define INT_MIN -2147483647 -1
/*Counting number of digits*/
static	int count_n (int n)
{
	int count;

	count = 0;
	if (n == 0)
		return 1;
	if (n < 0)
		count++;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}
/*Reverse string*/
static	char	*rev(char *str, int sign)
{
	int j;
	int i;
	char tmp;
	
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
char *ft_itoa(int n)
{
	int num_dig;
	int i;
	int sign;
	char *str;
	
	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	sign = FALSE;
	num_dig = count_n(n);
	if (!(str = (char *)malloc((num_dig + NULL_CHAR) * sizeof(char))))
		return (NULL);
	str[num_dig] = '\0';
	i = 0;
	if (n == 0)
		return (str[i] = '0', str);
	if (n < 0)
	{
		sign = TRUE;
		n *= -1;
	}
	while (i < num_dig)
	{
		str[i++] = n % 10 + '0';
		n /= 10;
	}
	rev(str, sign);
	return (str);
}

// #include <stdio.h>
// int main ()
// {
// 	int n = -2147483647 -1;
// 	char *str = ft_itoa(n);
// 	printf("\ncount words : %d\n", count_n(n));
// 	printf("str : %s\n", str);
// }
