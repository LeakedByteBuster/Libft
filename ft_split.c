/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfouadi <mfouadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 02:13:50 by mfouadi           #+#    #+#             */
/*   Updated: 2022/11/01 03:08:42 by mfouadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

#define OUT 0
#define IN 1
/* Incrementing (wc) when (s - 1) is a seperator, and (*s) isn't a seperator */
size_t  count_words(const char *s, char c)
{
	unsigned int w_count;
	int state;
	
	state = OUT;
	w_count = 0;
	while (*s != '\0')
	{
		if (*s == c)
			state = OUT;
		else if (*s != c && !state)
		{
			state = IN;
			w_count++;
		}
		s++;
	}
	return w_count;
}
/* Free DRAM */
void	free_tab(char	**tab)
{
	int i;

	i = 0;

	while(tab[i])
		free(tab[i++]);
	free(tab);
}
/* Splitting the string s */
char **ft_split(char const *s, char c)
{
    char **p;
	size_t w_len;
	size_t row;
	size_t words;
	
	words = count_words(s, c);
	p = (char **)malloc((words + NULL_CHAR) * (sizeof(char *)));
	if (p == NULL)
		return p;
	p[words] = NULL;
	row = 0;
	while (*s != '\0' && row < words)
	{
		while (*s == c && *s++)
			;
		if (*s != c && *s)
		{
			w_len = 0;
			while (*s != c && *s)
			{
				w_len++;
				s++;
			}
			*(p + row) = (char *)malloc((w_len + NULL_CHAR) * sizeof(char));
			if (p[row] == NULL)
				return (free_tab(p), NULL);
			p[row][w_len + NULL_CHAR] = '\0';
			ft_strlcpy(p[row], (s - w_len), w_len + NULL_CHAR);
			row++;
		}
		s++;
	}
	
	return (p);
}

// int main()
// {
// 	int i = 0;
// 	char *a = "hey hey hey hey hey  heyheyheyheyheyheyheyhey=llljhjl fin hj ";
// 	char **tab = ft_split(a, ' ');
// 	while (tab[i])
	
// 		{
// 			printf("%s\n", tab[i]);
// 			i++;
// 		}
// }
	// printf("%u", count_words("            ", ' '));
//     int i = 0;
//     int j = 0;

//     int  row = 5;
//     int  col = 10;
//     char s[row][col];
//     ft_strlcpy(*s, "123456789", 10);
//     printf ("%s\n", s[0]);

//     // ft_split("hello",'l');
//     for (i = 1; i < row; i++) 
//     {
//         for (j = 0; j < col; j++)
//         {
//             s[i][j] = '.';
//             printf("%c", s[i][j]);
//         }
//         printf ("\n");
//     }
//     // size_t i;
//     // size_t j;
//     // char *ptr = "hello";
//     // for (i = 0; i < 10; i++)
//     //     for (j = 0; j < 10; j++)
//             // printf("%c", ft_split(ptr,'l'));
// }