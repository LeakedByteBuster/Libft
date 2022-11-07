/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfouadi <mfouadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 02:13:50 by mfouadi           #+#    #+#             */
/*   Updated: 2022/11/07 09:25:55 by mfouadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

#define OUT 0
#define IN 1

/* Incrementing (wc) when (s - 1) is a seperator, and (*s) isn't a seperator */

static size_t	count_words(const char *s, char c)
{
	unsigned int	w_count;
	int				state;

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
	return (w_count);
}

/* Free DRAM */

static void	free_tab(char	**tab)
{
	int	i;

	i = 0;
	while (tab[i])
		free(tab[i++]);
	free(tab);
}

/*Allocate memory for the string*/

static char	
	**alloc_new_str(const char *s, char **p, size_t *row, size_t *word_len)
{
	*(p + (*row)) = (char *)malloc(*(word_len + NULL_CHAR) * sizeof(char));
	if (p[*row] == NULL)
		return (free_tab(p), NULL);
	p[*row][*(word_len + NULL_CHAR)] = '\0';
	ft_strlcpy(p[(*row)], (s - *(word_len)), *word_len + NULL_CHAR);
	return (p);
}

/* Splitting the string s */

static char	**split_str(const char *s, char **p, size_t *nbr_words, char *c)
{
	size_t	row;
	size_t	word_len;

	row = 0;
	while (*s != '\0' && row < (*nbr_words))
	{
		while (*s == *c && *s++)
			;
		if (*s != *c && *s)
		{
			word_len = 0;
			while (*s != *c && *s)
			{
				word_len++;
				s++;
			}
			alloc_new_str(s, p, &row, &word_len);
			row++;
		}
		s++;
	}
	return (p);
}

char	**ft_split(char const *s, char c)
{
	char	**p;
	size_t	nbr_words;

	nbr_words = count_words(s, c);
	p = (char **)malloc((nbr_words + NULL_CHAR) * (sizeof(char *)));
	if (p == NULL)
		return (p);
	p[nbr_words] = NULL;
	split_str(s, p, &nbr_words, &c);
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