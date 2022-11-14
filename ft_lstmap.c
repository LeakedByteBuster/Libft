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
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

// static void	free_mem(t_list *p)
// {
// 	t_list	*tmp;

// 	tmp = p;
// 	while (tmp != NULL)
// 	{
// 		tmp = tmp->next;
// 		free(p);
// 		p = tmp;
// 	}
// }

// void *map_length(void *s)
// {
// 	char *str = malloc(10);
// 	if (str != NULL)
// 		sprintf(str, "__%lX", strlen((char *)s));
// 	return str;
// }

// void delete(void *content)
// {
// 	char *str = (char *)content;
// 	if (str == NULL)
// 		return;
// 	if (str[0] != '_' || str[1] != '_')
// 		printf("error\n");
// 	free(content);
// }

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp_head;
	t_list	*head;

	if (lst == NULL)
		return (NULL);
	char *str = f(lst->content);
	if (str == NULL)
		return (NULL);
	tmp_head = ft_lstnew(str);
	if (tmp_head == NULL)
		return (del(str), NULL);
	lst = lst->next;
	// tmp_head = tmp_head->next;
	head = tmp_head;
	while (lst != NULL)
	{
		str = f(lst->content);
		if (str == NULL)
			return (ft_lstclear(&head, del), NULL);
		tmp_head->next = ft_lstnew(str);
		if (!tmp_head)
			return  (ft_lstclear(&head, del), NULL);
	 	lst = lst->next;
	 	tmp_head = tmp_head->next;
	}
	return (head);
}

// int main()
// {
// 	t_list *head = ft_lstnew(ft_strdup("haitam"));
// 	t_list *res = ft_lstmap(head, map_length, delete);
// 	printf("str == %s\n", res->content);
// }

// void    *f(void *p)
// {
// 	p = ft_strdup("a");
// 	return (p);
// }

// #include <stdio.h>
// int main(){
//     t_list *v0;
//     t_list *v1;
//     t_list *v2;
//     t_list *v3;
//     t_list *tmp;	
//     v0 = ft_lstnew("h");
//     v1 = ft_lstnew("g");
//     v2 = ft_lstnew("g");
//     v3 = ft_lstnew("s");

//     ft_lstadd_front(&v1, v0);
//     ft_lstadd_back(&v1, v2);
//     ft_lstadd_back(&v2, v3);

//     tmp = v0;
//     ft_lstmap(tmp, f, free);
//     while (tmp != NULL)
//     {
//         printf("%s\n", tmp->content);
//         tmp = tmp->next;
//     }
// }
