/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfouadi <mfouadi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 21:50:03 by mfouadi           #+#    #+#             */
/*   Updated: 2022/10/25 00:21:33 by mfouadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Allocates (with malloc(3)) and returns a copy of ’s1’ 
* with the characters specified in ’set’ removed
// * from the beginning and the end of the string
// */
// #include "libft.h"
// // LHELLOL ==>   SET : L ==> RETURN : HELLO
// char *ft_strtrim(char const *s1, char const *set) // ---//--__/-_XJHDkdsjXJ, "'-/_''X'"
// // {
// //     size_t len_s1;
//     size_t len_set;
//     // size_t i;
//     char *lenAfterFirstTrim;
//     char *ptr;
//     //Length of both strings
//     len_s1 = ft_strlen(s1);
//     len_set = ft_strlen(set);
//     //Removing same char, from the beginning
//     while (*s1++ == *set++)
//         ;
//     //creating a copy of str, trimmed from the beginning
//     ptr = ft_strdup(s1);
//     if (!ptr)
//         return (ptr);
//     //going to last index in ptr
//     len_s1 = ft_strlen(ptr);
//     //storing adress of index 0
//     lenAfterFirstTrim = &ptr;
//     ptr += len_s1;
//     //going back to index 0
//     set -= len_set;
//     //removing same char, from the end
//     while (*ptr-- == *set++)
//         ;
//     *ptr = '\0';
//     //knowing how much was trimmed from the back;
//     lenAfterFirstTrim - ptr;
//     return (lenAfterFirstTrim - ptr );
//     // ptr = (char *)malloc(len_s1 + NULL_CHAR);
//     // if (!ptr)
//     //     return (ptr);
//     // if s1 == NULL, Return NULL
//     // if (!s1)
//     //     return ft_strdup("");
//     // -1 from the beginning ; -1 form the end
//     // ptr = (char *)malloc(len_s1 + NULL_CHAR - 2);
//     // if (!ptr)
//     //     return (ptr);
//     // ptr = NULL;
//     // if (ptr == set || ptr == set)
//     // if ((char)set == ptr && (char)set == ptr)
//     // {
//     //     ptr[len_s1 + 1] = '\0';
//     //     return (++ptr);
//     // }
//     // *ptr = '\0';
// }
