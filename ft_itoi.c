/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfouadi <mfouadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 23:38:26 by mfouadi           #+#    #+#             */
/*   Updated: 2022/10/30 00:04:53 by mfouadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

// char *ft_itoa(int n)
// {
// 	int *ptr;
// 	int track;
// 	char *ret;

// 	track = 0;
// 	ptr = &n;
// 	while (n)
// 	{
// 		*ptr = (((n / 10)) % 10) + '0';
// 		ptr++;
// 		track++;
// 	}
// 	ptr -= track;
// 	ret = (char *)malloc(ft_strlen((char *)ptr));
// 	if (ret == NULL)
// 		return NULL;
// 	ret = (char *)ptr;
// 	return (ret);
// }

// #include <unistd.h>
// void	ft_putchar(char	i)
// {
// 	write(1, &i, 1);
// }

// void	ft_itoi(int nb)
// {
// 	if (nb == -2147483648)
// 		write(1, "-2147483648", 11);
// 	if (nb < 0 && nb != -2147483648)
// 	{
// 		ft_putchar('-');
// 		nb *= -1;
// 	}	
// 	if (nb >= 0 && nb <= 9)
// 		ft_putchar(nb + 48);
// 	if (nb > 9)
// 	{	
// 		ft_putnbr(nb / 10 );
// 		ft_putnbr(nb % 10 );
// 	}
// }