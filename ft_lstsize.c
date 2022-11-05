/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfouadi <mfouadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 01:25:20 by mfouadi           #+#    #+#             */
/*   Updated: 2022/11/05 01:29:20 by mfouadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
    t_list *tmp;
    int lst_len;

    tmp = NULL;
    tmp = lst;
    lst_len = 0;
    while (tmp)
    {
        tmp = tmp->next;
        lst_len++;
    }
    return (lst_len);
}
