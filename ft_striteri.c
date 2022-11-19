/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfouadi <mfouadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:07:44 by mfouadi           #+#    #+#             */
/*   Updated: 2022/11/07 09:28:10 by mfouadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
	Applies the function 'f' on each character of
	the string passed as argument, passing its index
	as first argument. Each character is passed by
	address to 'f' to be modified if necessary.
*/
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (*s)
	{
		f(i, s);
		i++;
		s++;
	}
}

// void	f(unsigned int i, char *c)
// {
// 	// char *p = "Z";
// 	printf("\n%d | %c\n", i, c[i]);
// 	// c[i] = *p;
// 	// printf("\n%d | %c\n", i, c[i]);
// 	// printf("\nHey\n");
// }

// int	main()
// {
// 	char p[] = "HEY";
// 	ft_striteri(p, f);
// 	printf("%s", p);
// }
