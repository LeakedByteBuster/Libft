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

	/* Iterates the list ’lst’ and applies the function
	’f’ on the content of each node. Creates a new
	list resulting of the successive applications of
	the function ’f’. The ’del’ function is used to
	delete the content of a node if needed. 
	Returns : A new list, NULL if Alloc fails */

#include "libft.h"

static void	free_mem(t_list *p)
{
	t_list	*tmp;

	tmp = p;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		free(p);
		p = tmp;
	}
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp_head;
	t_list	*tmp_lst;
	t_list	*head;

	// tmp_head = NULL;
	if (lst == NULL)
		return (NULL);
	tmp_head = ft_lstnew(f(lst->content));
	if (tmp_head == NULL)
		return (NULL);
	head = tmp_head;
	tmp_lst = lst;
	while (tmp_lst != NULL)
	{
		tmp_head->next = ft_lstnew(f(lst->content));
		if (tmp_head == NULL)
			return (free_mem(head), NULL);
		tmp_lst = tmp_lst->next;
		tmp_head = tmp_head->next;
	}
	if (del != NULL)
		del(head->content);
	return (head);
}

// void    *f(void *p)
// {
//     t_list *tmp;

//     tmp = (t_list *)p;
//     while (tmp != NULL)
//     {
//         tmp->content = "a";
//         tmp = tmp->next;
//     }
//     return p;
// }

// #include <stdio.h>
// int main(){
//     t_list *v0;
//     t_list *v1;
//     t_list *v2;
//     t_list *tmp;	
//     v0 = ft_lstnew("h");
//     v1 = ft_lstnew("g");
//     v2 = ft_lstnew("g");

//     ft_lstadd_front(&v1, v0);
//     ft_lstadd_back(&v1, v2);

//     tmp = v0;
//     ft_lstmap(tmp, f(tmp), NULL);
//     while (tmp != NULL)
//     {
//         printf("%s\n", tmp->content);
//         tmp = tmp->next;
//     }
// }