/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfouadi <mfouadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 05:24:39 by mfouadi           #+#    #+#             */
/*   Updated: 2022/11/07 05:19:49 by mfouadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Takes as a parameter a node and frees the memory of
the node's content using the function del given
as a parameter and free the node. The memory of
next must not be freed. */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

// void	del(void *p)
// {
// 	free(p);
// }

// int main()
// {
// 	t_list	*n0;
// 	t_list	*n1;
// 	t_list	*n2;

// 	n0 = ft_lstnew("Hey");
// 	ft_lstadd_back(&n0, n1 = ft_lstnew(ft_strdup(" My")));
// 	ft_lstadd_back(&n1, n2 = ft_lstnew(ft_strdup(" MAN")));

// 	ft_lstdelone(n1, free);
// 	while(n0)
// 	{
// 		printf("%s", n0->content);
// 		n0 = n0->next;
// 	}
// }
