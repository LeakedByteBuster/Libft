/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfouadi <mfouadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 02:03:35 by mfouadi           #+#    #+#             */
/*   Updated: 2022/11/05 04:00:54 by mfouadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list *ft_lstlast(t_list *lst)
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

//     ft_lstnew(v1);
//     ft_lstlast(v2);
//     ft_lstlast(v3);
   
//     ft_lstadd_front(&v3, v2);
//     ft_lstadd_front(&v2, v1);
//     v1->content = "hey";
//     v2->content = "he";
//     v3->content = "h";
    
//     ft_lstlast(v1);
//     printf("%s", v1->content);
    
//     // t_list *tmp;
    
//     // tmp = v1;
//     // while (tmp)
//     // {
//     //     printf("%s\n", tmp->content);
//     //     tmp = 
//     // }
// }