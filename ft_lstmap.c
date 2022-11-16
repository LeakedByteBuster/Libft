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

// t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
// {
// 	t_list *head;
// 	t_list **temp;
// 	char *s;

// 	if (!lst || !del || !f)
// 		return NULL;
// 	head = ft_lstnew(s = f(lst->content));
// 	if (!head)
// 		return free(s) , NULL;
// 	temp  = &head; 
// 	while (lst->next)
// 	{
// 		lst = lst->next;
// 		temp = &(*temp)->next; 
// 		*temp = ft_lstnew(s = f(lst->content));
// 		if (!*temp)
// 			return ft_lstclear(&head, del), free(s) , NULL;
// 	}
// 	return (head);
// }

// t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
// {
// 	static t_list	*head;
// 	static t_list	**temp;

// 	if (!lst || !del || !f)
// 		return head;
// 	if (!head)
// 	{
// 	char			*s;
// 		head = ft_lstnew(s = f(lst->content));
// 		if (!head)
// 			return free(s) , NULL;
// 		temp = &head->next;
// 	}
// 	else
// 	{
// 	char			*s;
// 		*temp = ft_lstnew(s = f(lst->content));
// 		if (!*temp)
// 			return ft_lstclear(&head, del), free(s) , NULL;
// 		temp = &(*temp)->next;
// 	}
// 	ft_lstmap(lst->next, f, del);
// 	return NULL;
// }

// int main()
// {
// 	t_list *head = ft_lstnew(ft_strdup("haitam"));
// 	t_list *res = ft_lstmap(head, map_length, delete);
// 	printf("str == %s\n", res->content);
// }

// void    *f(void *p)
// {
// 	p = ft_strdup(p);
// 	return (p);
// }

// #include <stdio.h>
// int main(){
//     t_list *v0;

// 	v0 = NULL;
//     ft_lstadd_back(&v0, NULL);
//     ft_lstadd_back(&v0, ft_lstnew("2"));
//     ft_lstadd_back(&v0, ft_lstnew("3"));


//     ft_lstmap(v0, f, free);
//     while (v0 != NULL)
//     {
//         printf("%s\n", v0->content);
//         v0 = v0->next;
//     }
// }
