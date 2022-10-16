#include <stdio.h>

//Printable characters starts from 32 TO 126
int	ft_isprint(int c)
{
	return (c >= ' ' && c <= '~');
}
/*
int	main()
{
	printf("%d", ft_isprint(31));
}
*/