/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfouadi <mfouadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 06:06:34 by mfouadi           #+#    #+#             */
/*   Updated: 2022/11/05 23:02:16 by mfouadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Deletes and frees the given node and every
successor of that node, using the function ’del’
and free(3). Finally, the pointer to the list must be set to NULL. */

#include "libft.h"

// void    del(void *lst)
// {
//     t_list *tmp;

//     tmp = NULL;
//     tmp = lst;
//     while (tmp)
//     {
//         tmp = tmp->next;
//         free(lst);
//     }
//     tmp = NULL;
//     lst = NULL;
// }
void    ft_lstclear(t_list **lst, void (*del)(void*))
{
    del(*lst);
}
