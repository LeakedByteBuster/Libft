/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfouadi <mfouadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 06:06:34 by mfouadi           #+#    #+#             */
/*   Updated: 2022/11/07 05:04:14 by mfouadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Deletes and frees the given node and every
successor of that node, using the function del
and free(3). Finally, the pointer to the list must be set to NULL. */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;
	t_list	*tmp2;

	if (!lst || !del)
		return ;
	tmp = *lst;
	while (tmp != NULL)
	{
		tmp2 = tmp->next;
		ft_lstdelone(tmp, del);
		tmp = tmp2;
	}
	*lst = NULL;
}

// void	del(void *p)
// {
// 	t_list	*pt;

// 	pt = p;
// 	// free(pt->content);
// 	while (pt)
// 	{
// 		pt->content = ft_strdup("Hey My G! ");
// 		// pt->content = ft_split((pt->content), 'e');
// 		pt = pt->next;
// 	}
// }

// int main()
// {
// 	t_list	*a;
// 	t_list	*b;
// 	t_list	*c;

// 	a = ft_lstnew(" My");
// 	ft_lstadd_front(&a, (b = ft_lstnew("Hey")));
// 	ft_lstadd_back(&b, (c = ft_lstnew(" Friend")));
// 	// ft_lstadd_front(&c, (c = ft_lstnew("Friend")));
// 	ft_lstclear(&a, del);
// 	while (a)
// 	{
// 		printf("%s", a->content);
// 		a = a->next;
// 	}
// }