/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfouadi <mfouadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 03:38:52 by mfouadi           #+#    #+#             */
/*   Updated: 2022/11/07 08:36:34 by mfouadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Allocates (with malloc(3)) and returns a new node.
t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(struct s_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

// int main()
// {
// 	t_list	*n0;

// 	n0 = ft_lstnew("Node 1");
// 	n0->next = ft_lstnew(", Node 2");
// 	while (n0)
// 	{
// 		printf("%s", n0->content);
// 		n0 = n0->next;
// 	}
// }