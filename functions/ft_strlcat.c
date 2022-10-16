#include <stdio.h>
#include <string.h>
#include "libft.h"

//concatenate
// the initial length of dst plus the length of src
// the return value is >= dstsize, the output string has been truncated.  It is the caller's responsibility to handle this.		
/*
unsigned	int	ft_strlen(const char *s)
{
	unsigned	int	i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return i;
}
*/
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len_src;
	size_t	len_dst;

	len_dst =  ft_strlen(dst);
	len_src = ft_strlen(src);
	i = -1;
	if (dstsize < len_dst)
		return dstsize + len_src;
	while ((*src != '\0') && ++i < dstsize - len_dst)
		*(dst++ + len_dst) = *src++;
	return (*(dst +  len_dst) = '\0', len_dst + len_src);
}

int	main ()
{
	char	src[] = "Monb";
	char	dst[100] = "MonMonkb";

	printf("MINE : %zu\n", strlcat(dst,src, 8));
	// printf("REAL : %lu\n\n", strlcat(dst, "", 16));
	printf("string : %s\n", dst );

	return 0;
}

/*
int main()
{
    char first[] = "This is ";
    char last[] = "a potentially long string";
    int r;
    int size = 16;
    char buffer[size];

    strcpy(buffer,first);
    r = ft_strlcat(buffer,last,size);

    puts(buffer);
    printf("Value returned: %d\n",r);
    if( r > size )
        puts("String truncated");
    else
        puts("String was fully copied");

    return(0);
}
*/
