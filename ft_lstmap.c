/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfouadi <mfouadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 01:59:56 by mfouadi           #+#    #+#             */
/*   Updated: 2022/11/07 06:07:59 by mfouadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Iterates the list 'lst' and applies the function
f on the content of each node. Creates a new
list resulting of the successive applications of
the function f. The del function is used to
delete the content of a node if needed. 
Returns : A new list, NULL if Alloc fails */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	**temp;
	char	*s;

	if (!lst || !del || !f)
		return (NULL);
	s = f(lst->content);
	head = ft_lstnew(s);
	if (!head)
		return (free(s), NULL);
	temp = &head;
	while (lst->next)
	{
		lst = lst->next;
		temp = &(*temp)->next;
		s = f(lst->content);
		*temp = ft_lstnew(s);
		if (!*temp)
			return (ft_lstclear(&head, del), free(s), NULL);
	}
	return (head);
}

// void	*g(void *p)
// {
// 	char	*s;

// 	if (!p)
// 		return NULL;
// 	s = ft_strjoin(p, " hello");
// 	if (!s)
// 		return NULL;
// 	return ((void *)s);
// }

// int main()
// {
// 	t_list	*n0 = ft_lstnew("Node 1,");

// 	ft_lstadd_back(&n0, ft_lstnew(" Node 2,"));
// 	ft_lstadd_back(&n0, ft_lstnew("  Node 3,"));
// 	ft_lstadd_back(&n0, ft_lstnew("   Node 4,"));
// 	ft_lstadd_back(&n0, ft_lstnew("    Node 5"));

// 	ft_lstmap(n0, g, free);
// 	while (n0)q
// 	{
// 		printf("\n%s", n0->content);
// 		n0 = n0->next;
// 	}
// }