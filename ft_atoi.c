/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfouadi <mfouadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 22:25:31 by mfouadi           #+#    #+#             */
/*   Updated: 2022/10/28 23:14:31 by mfouadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//convert ASCII string to integer
#include "libft.h"

// static int ft_count_len(const char *str)
// {
//     int i;

//     i = ft_strlen(str);
    // if (i >= 19 && str[0] == '-')
    //      return (0);
    // if (i >= 20)
//         return (-1);
//     return (0);
// }

int ft_atoi(const char *str)
{
    int hold;
    int sign;

    sign = 1;
    hold = 0;
    
    if (ft_strlen(str) >= 19 && str[0] == '-')
         return (0);
    if (ft_strlen(str) >= 20)
         return (-1);
    while (*str == ' ' || (*str >= 9 && *str<= 13))
	    str++;
    if (*str == '-')
    {
        sign *= -1;
        str++;
    }
    if (*str == '+')
        str++;
    while (*str != '\0' && *str >= '0' && *str <= '9')
    {
        hold = hold * 10 + *str - '0';
        str++;
    }
    return (hold * sign);
}
