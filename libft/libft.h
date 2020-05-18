/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omputle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 10:17:33 by omputle           #+#    #+#             */
/*   Updated: 2019/09/14 06:47:06 by omputle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

size_t	ft_strlen(const char *s);
int		ft_atoi(const char *str);
char	*ft_strcpy(char *dst, const char *src);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_tolower(int c);
int		ft_toupper(int c);
char	*ft_strncpy(char *dest, const char *src, size_t len);
char	*ft_strcat(char *s1, const char *s2);
char	*ft_strncat(char *s1, const char *s2, size_t n);
char	*ft_strdup(const char *s1);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_isnum(char *str);
int		ft_isalnum(int c);
int		ft_isascii(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strequ(char const *s1, char const *s2);
int		ft_strnequ(char const *s1, char const *s2, size_t n);
void	ft_putchar(char c);
void	ft_putstr(const char *c);
void	ft_putendl(char const *s);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putendl_fd(char const *s, int fd);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strstr(const char *haystack, const char *needle);
void	ft_putnbr(int n);
void	ft_putnbr_fd(int n, int fd);
char	*ft_itoa(int n);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t len);
void	*ft_memchr(const void *s, int c, size_t len);
void	*ft_memmove(void *str1, const void *str2, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memcpy(void *str1, const void *str2, size_t n);
char	*ft_strjoin(char const *s1, char const *s2);
void	*ft_memalloc(size_t size);
char	*ft_strnew(size_t size);
char	*ft_strtrim(char const *s);
void	ft_memdel(void **ap);
void	ft_striter(char *s, void (*f)(char *));
void	*ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_strdel(char **as);
char	**ft_strsplit(char const *s, char c);
void	ft_strclr(char *s);
size_t	ft_strlcat(char *dst, const char *src, size_t n);
int		ft_isnum(char *str);
int		ab_value(int num);
void	ft_del_arr(char **arr);
long	ft_atol(const char *str);
char  *ft_strdup_del(char *s);
char    *ft_strtrim_del(char *s, char *old_str);
char  *ft_strimplode(char **arr, char *s1, char *s2);

#endif
