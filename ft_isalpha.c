/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfouadi <mfouadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 19:38:02 by mfouadi           #+#    #+#             */
/*   Updated: 2022/10/16 22:42:52 by mfouadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//** RETURN VALUES : The isalpha() function returns zero if the character 
//tests false and returns non-zero if the character tests true
//if ((c >= 'A' && c  <= 'Z') || ('a' <= c && c <= 'z')){
//	return c;
//}
//return 0;
//Behave as boolean value wheater 0 or 1

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || ('a' <= c && c <= 'z'));
}