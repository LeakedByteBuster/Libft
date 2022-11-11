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

// void display_list(t_list *head)
// {
// 	t_list *tmp;

// 	tmp = head;
// 	while (tmp != NULL)
// 	{
// 		printf("%s\n", (tmp->content));
// 		tmp = tmp->next;
// 	}
// }

// int main()
// {
// 	t_list *head;
// 	// t_list end;
// 	t_list age;
// 	t_list adress;
// 	t_list name;
// 	t_list city;
// 	t_list start;

// 	head = NULL;
// 	// end.content = NULL;
// 	// Hey sir :->1337->Aga->123->hey
// 	head = &start;
// 	age.next = NULL;
// 	name.next = &age;
// 	adress.next = &city;
// 	city.next = &name;
// 	start.next = &adress;
// 	start.content = "Hey sir :";
// 	adress.content = "1337";
// 	name.content = "123";
// 	age.content = "hey";
// 	city.content = "Aga";
// 	ft_lstnew(head);
// 	display_list(head);
// }