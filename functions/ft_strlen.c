#include <stdio.h>
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while(*s != '\0')
	{
		s += 1 ;
		i++;
	}
	return i;
}
/*
int	main()
{
	printf("%zu", ft_strlen(""));
}
*/