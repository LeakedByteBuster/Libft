#include "libft.h"

// strchr
// substr
// malloc
// strlen
//go through the string => find c => remove c => Allocate with malloc 
// => store what was before c in a 2D Array => return s[0]
char **ft_split(char const *s, char c)
{
    int num_words;
    int str_size;
    char ptr[num_words][str_size];

    while (*s != '\0')
        if (ft_strchr(s, c))

        s++;
}
