/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfouadi <mfouadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 01:25:20 by mfouadi           #+#    #+#             */
/*   Updated: 2022/11/07 08:36:57 by mfouadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Counts the number of nodes in a list.*/

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	lst_len;

	lst_len = 0;
	while (lst)
	{
		lst = lst->next;
		lst_len++;
	}
	return (lst_len);
}

// int	main()
// {
// 	t_list	*n0 = ft_lstnew("Node 1");
// 	ft_lstadd_back(&n0, ft_lstnew("Node 2"));
// 	ft_lstadd_back(&n0, ft_lstnew("Node 3"));
// 	ft_lstadd_back(&n0, ft_lstnew("Node 4"));
// 	ft_lstadd_back(&n0, ft_lstnew("Node 5"));
// 	ft_lstadd_back(&n0, ft_lstnew("Node 6"));
// 	ft_lstadd_back(&n0, ft_lstnew("Node 7"));
// 	ft_lstadd_back(&n0, ft_lstnew("Node 8"));
// 	ft_lstadd_back(&n0, ft_lstnew("Node 9"));
// 	ft_lstadd_back(&n0, ft_lstnew("Node 10"));
// 	printf("%d", ft_lstsize(n0));
// }