#include <stdio.h>
#include <string.h>
#include "libft.h"
#include <stdlib.h>
 

// gcc -fsanitize=leak ... : detect memory leaks
#define TEST_SUCCESS
// int	main()
// {
// 	printf("%d\n",ft_isalnum('2'));
// }
 
// int	main ()
// {
// 	printf("%d\n", ft_isalpha('s'));
// }
 
// int main()
// {
// 	printf("%d", ft_isascii(5));
// }
 
// int	main()
// {
// 	int	c;

// 	c = 4;
// 	printf("%d", ft_isdigit(c));
// }

// int	main()
// {
// 	printf("%d", ft_isprint(31));
// }
 
// int	main ()
// {
// 	char	src[] = "Monb";
// 	char	dst[100] = "MonMonkb";

// 	printf("MINE : %zu\n", strlcat(dst,src, 8));
// 	// printf("REAL : %lu\n\n", strlcat(dst, "", 16));
// 	printf("string : %s\n", dst );

// 	return 0;
// // }

// int	main()
// {
//     char    *dst;
//     char *dstr;
// 	size_t	size;
	
// 	*dstr = "helldofekiddwdwb9=3hbhjec";
// 	*dst = "helldofekiddwdwb9=3hbhjec";
// 	printf("MINE : %c\n", ft_strncmp(dst, "helldofekiddwdwb9=3hbhjec", sizeof(dst)));
// 	printf("REAL : %c\n\n", strncmp(dstr, "helloejckfhdwdw1dcjchbcsd", sizeof(dstr)));
// 	printf("MINE : %c\n", dst);	
// 	printf("REAL : %c\n\n", dstr);
// 	return 0;
// }
 
// int	main()
// {
// 	printf("%zu", ft_strlen(""));
// }


 
// int main()
// {
//     char first[] = "This is ";
//     char last[] = "a potentially long string";
//     int r;
//     int size = 16;
//     char buffer[size];

//     strcpy(buffer,first);
//     r = ft_strlcat(buffer,last,size);

//     puts(buffer);
//     printf("Value returned: %d\n",r);
//     if( r > size )
//         puts("String truncated");
//     else
//         puts("String was fully copied");

//     return(0);
// }
// int main()
// {
// 	char b[0xF] = "nyan !";

// 	printf("%lu", strlcat(((void *)0), b, 0));
// 	// exit(TEST_SUCCESS);
// // }
// int	main()
// {
// 	char s1[] = "omg1|||||||||||||";
// 	char s2[] = "";
// 	size_t size = 30;
// 	// int i1 = ((strncmp(s1, s2, size) > 0) ? 1 : ((strncmp(s1, s2, size) < 0) ? -1 : 0));
// 	// int i2 = ((ft_strncmp(s1, s2, size) > 0) ? 1 : ((ft_strncmp(s1, s2, size) < 0) ? -1 : 0));

// // 		printf("%s", ft_strnstr(s1, s2, size));
// // }

// int main()
// {
// // // 	char *s1 = "see FF your FF return FF now FF";
// // // 	char *s2 = "FF";
// // // 	size_t max = strlen(s1);
// // // 	// char *i1 = strnstr(s1, s2, max);

//     // printf("%s\n", i1);
//     // printf("s\n");
//     char *src = "samao3alikodddrefdm";
//     // char *srcs = "amao3alikhodddrefdm";
//     printf("%s\n", memcpy(src, src, -1));
// }

// // int main()
// {
//     // int size = 8539;
//     // void *ptr = ft_calloc(size, sizeof(int));
//     return(printf("%s", ft_strnstr(((void *)0), "fake", 3)));
// }
// int main()
// {
//     char *str = "01234";
// 	size_t size = 10;
// 	printf("%s", ft_substr(str, 10, size));
// }

// int main()
// {
//     // int *p;
//     char *c = "hello";
//     // int d;
//     // int e;

// // p = 5;
//     while (c++ != NULL)
//     {
//         printf("%p\n", c);
//     }
//         // printf("%zu\n", sizeof(p));
//         // printf("%p\n", &e);
//         // printf("%p\n", &d);
//     return 900;
// }
