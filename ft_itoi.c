/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfouadi <mfouadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 23:38:26 by mfouadi           #+#    #+#             */
/*   Updated: 2022/11/01 03:08:33 by mfouadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_itoa(int n)
{
	int *ptr;
	int track;
	char *ret;

	track = 0;
	ptr = &n;
	while (n)
	{
		*ptr = (((n / 10)) % 10) + '0';
        write(1, &n, 1);
		ptr++;
		track++;
	}
	ptr -= track;
	ret = (char *)malloc(ft_strlen((char *)ptr));
	if (ret == NULL)
		return NULL;
	ret = (char *)ptr;
	return (ret);
}

#include <unistd.h>
void	ft_putchar(char	i)
{
	write(1, &i, 1);
}

int main ()
{
    printf(ft_atoi(6));
}