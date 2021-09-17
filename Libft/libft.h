#ifndef LIBFT_H
#define LIBFT_H
#include <string.h>

int ft_atoi(const char *str);

int ft_isalpha(int c);

int ft_isdigit(int c);

int ft_isalnum(int c);

int ft_isascii(int c);

int ft_isprint(int c);

size_t	ft_strlen(const char *s);

void    *ft_memset(void *b, int c, size_t len);

void    ft_bzero(void *s, size_t n);

void    *ft_memcpy(void *dst, const void *src, size_t n);

void    *ft_memmove(void *dst, const void *src, size_t len);


