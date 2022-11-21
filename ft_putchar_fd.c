/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfouadi <mfouadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:16:43 by mfouadi           #+#    #+#             */
/*   Updated: 2022/11/07 08:49:13 by mfouadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Outputs the character 'c' to the given file descriptor

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}

// int	main()
// {
// 	// char	*buff = 'c';
// 	// int		r;`

// 	// int fd = open("test.c", O_RDONLY);
// 	// char *buff;
// 	// read(fd, buff, 1);
// 	// printf("%s\n", buff);
// }
