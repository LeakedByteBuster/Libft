/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfouadi <mfouadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 23:16:34 by mfouadi           #+#    #+#             */
/*   Updated: 2022/11/07 08:50:05 by mfouadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#define INT_MIN -2147483648

static void	ft_putchar(char i, int fd)
{
	write(fd, &i, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == INT_MIN)
		write(fd, "-2147483648", 11);
	if (n < 0)
	{
		ft_putchar('-', fd);
		n *= -1;
	}	
	if (ft_isdigit(n + '0'))
		ft_putchar(n + 48, fd);
	if (n > 9)
	{	
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
}

// #include <stdlib.h>
// #include <stdio.h>
// int main()
// {
// 	int	fd;
// 	fd = fopen("tripouille", "w+");
// 	ft_putnbr_fd(INT_MIN, fd);

// 	char c;

// 	while (1)
// 	{
// 		c = getchar("tripouille", "w+");
// 		if (c == EOF)
// 			break;
// 		printf("%c", c);
// 	}
// }