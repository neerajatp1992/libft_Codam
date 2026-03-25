/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: netheloo <netheloo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 11:27:46 by netheloo          #+#    #+#             */
/*   Updated: 2026/03/25 18:48:46 by netheloo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H
#include <stddef.h>

int	ft_atoi(const char *str);
void	ft_bzero(void *str, size_t n);
int	ft_isalnum(int ch);
int	ft_isalpha(char ch);
int ft_isascii(int ch);
int ft_isdigit(int digit);
int ft_isprint(int ch);
void	*ft_memchr(void *ptr, int value, size_t size);
int	ft_memcmp(void *ptr1, void *ptr2, size_t size);
void	*ft_memcpy(void *to, const void *from, size_t n);
void    *ft_memmove(void *dest_str, const void *src_str, size_t numBytes);
void *ft_memset(void *str, int c, size_t n);
void	ft_putchar_fd(char c, int fd);
void ft_putendl_fd(char *s, int fd);
void	ft_putstr_fd(char *s, int fd);
char	*ft_strchr(const char *str, int search_str);
char	*ft_strdup(const char *s);
size_t	ft_strlcat(char *dest, const char *src, size_t destsize);
size_t ft_strlcpy(char *dest,const char *src,size_t destsize);
size_t ft_strlen(const char *str);
int	ft_strncmp(const char *str1, const char *str2, size_t n);
char *ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strnstr(const char *str1, const char *str2, size_t len);
char	*ft_strrchr(const char *str, int search_str);
int ft_tolower(int ch);
int ft_toupper(int ch);
void *ft_calloc(size_t nitems, size_t size);

typedef struct s_list
{
void *content;
struct s_list *next;
} t_list;

t_list *ft_lstnew(void *content);
void ft_lstadd_front(t_list **lst, t_list *new);
int ft_lstsize(t_list *lst);

#endif







