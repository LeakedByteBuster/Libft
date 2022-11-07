/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfouadi <mfouadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 02:03:35 by mfouadi           #+#    #+#             */
/*   Updated: 2022/11/07 05:06:20 by mfouadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (lst);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

// int main()
// {
//     t_list *v1 = NULL;
//     t_list *v2 = NULL;
//     t_list *v3 = NULL;

// // printf("hey\n");
//     v1 = ft_lstnew("v1");
//     v2 = ft_lstnew("v2");
//     v3 = ft_lstnew("v3"); 
//     v1->next = v2;
//     v2->next = v3;

//     ft_lstlast(&v1);
//     printf("%s", *(v1->content));	
	// t_list *tmp;
	// tmp = v1;
	// while (tmp)
	// {
	//     printf("%s\n", tmp->content);
	//     tmp = 
	// }
// }