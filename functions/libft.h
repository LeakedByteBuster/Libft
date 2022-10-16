#ifndef LIBFT_H
#define LIBFT_H

int	ft_isalnum(int	c);
int ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
size_t  ft_strlen(const char *s);
size_t  ft_strlcpy(char *dst, const char *src, size_t	dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t   dstsize);

#endif