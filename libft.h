/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhiltso <azhiltso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 19:58:33 by azhiltso          #+#    #+#             */
/*   Updated: 2023/12/23 14:02:06 by azhiltso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include "unistd.h"
# include "stdio.h"
# include "stddef.h"
# include "stdlib.h"

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

void			*ft_memcpy(void *str1, const void *str2, size_t n);
size_t			ft_strlen(const char *str);
int				ft_atoi(const char *str);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);
int				ft_isalpha(int c);
char			*ft_itoa(int n);
int				ft_isdigit(int c);
void			*ft_bzero(char *str, size_t bites);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int str);
void			*ft_memmove(void *dest, const void *src, size_t size);
void			*ft_memset(void *str, int symbol, size_t bites);
char			**ft_split(char const *s, char c);
size_t			ft_strlcpy(char *dest, const char *src, size_t size);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
size_t			ft_strlcat(char *dest, const char *src, size_t size);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
char			ft_toupper(char c);
char			*ft_strdup(const char *src);
char			ft_tolower(char c);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *str, int s);
void			*ft_memchr(const void *str, int c, size_t n);
void			ft_striteri(char *s, void (*f)(unsigned int, char*));
int				ft_memcmp(const void *ptr1, const void *ptr2, size_t num);
char			*ft_strnstr(const char *big, const char *little, size_t len);
void			*ft_calloc(size_t count, size_t size);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
t_list			*ft_lstnew(void *content);
void			ft_lstadd_front(t_list **lst, t_list *new);
int				ft_lstsize(t_list *lst);
t_list			*ft_lstlast(t_list *lst);
void			ft_lstadd_back(t_list **lst, t_list *new);
void			ft_lstclear(t_list **lst, void (*del)(void*));
void			ft_lstdelone(t_list *lst, void (*del)(void*));
t_list			*ft_lstmap(t_list *lst, void *(*f)(void *),
					void (*del)(void *));
void			ft_lstiter(t_list *lst, void (*f)(void *));

#endif