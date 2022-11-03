/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfouadi <mfouadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 23:16:34 by mfouadi           #+#    #+#             */
/*   Updated: 2022/11/03 01:08:39 by mfouadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#define INT_MIN -2147483648

static  void	ft_putchar(char	i, int fd)
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
	if (n >= 0 && n <= 9)
		ft_putchar(n + 48, fd);
	if (n > 9)
	{	
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
}
