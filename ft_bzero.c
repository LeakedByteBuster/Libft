/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfouadi <mfouadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 23:41:20 by mfouadi           #+#    #+#             */
/*   Updated: 2022/11/07 04:44:29 by mfouadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// write zeroes to a byte string

void	ft_bzero(void *s, size_t n)
{
	while (n-- > 0)
		*(char *)s++ = 0;
}

// #include <string.h>
// #include <stdio.h>

// int iTest = 1;
// int main(void)
// {

    // char tab[100];
    // memset(tab, 'A', 100);
    // ft_bzero(tab, 0);
    // if (tab[0] == 'A')
	// 	printf("test 1 :tab[0] == A\n");
    // ft_bzero(tab, 42);
    // int i = 0;
    // for (; i < 100 && tab[i] == 0; ++i)
    //     ;
	// printf("\nTest 1 \n: i = %d\n", i);
    // if(i == 42 && tab[42] == 'A')
	// 	printf("test 2 : i = 42 && tab[42] == A\n");
    // memset(tab, 'A', 100); tab[0] = '\0';
    // bzero(tab, 42);
    // i = 0;
    // for (; i < 100 && tab[i] == 0; ++i)
	// 	;
	// printf("\nTest 2 \n: i = %d\n", i);
    // if(i == 42)
	// 	printf("Test 3: i = 42");
    // return (0);
// }