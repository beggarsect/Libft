/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hienguye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:03:26 by hienguye          #+#    #+#             */
/*   Updated: 2023/10/17 13:03:29 by hienguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int		ft_atoi(const char *str);
void	ft_bzero(void *str, size_t n);
void	*ft_calloc(size_t num_elements, size_t element_size);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *str, int c, size_t n);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlen(const char *s);
int		ft_strncmp(const char *s1, char *s2, size_t n);
char	*ft_strnstr(const char *string, const char *substring, size_t n);
char	*ft_strrchr(const char *s, int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

t_list	*ft_lstnew(void *content);
//allocates and returns a new node
void	ft_lstadd_front(t_list **lst, t_list *new);
//adds the node 'new' at the beginning of the list
int		ft_lstsize(t_list *lst);
//counts the number of nodes in a list
t_list	*ft_lstlast(t_list *lst);
//returns the last node of the list
void	ft_lstadd_back(t_list **lst, t_list *new);
//adds the node 'new' at the end of the list
void	ft_lstdelone(t_list *lst, void (*del)(void*));
//takes a parameter ga node eand frees the memory of the node's content
void	ft_lstclear(t_list **lst, void (*del)(void*));
//deletes and frees the given node and every successor of that node
void	ft_lstiter(t_list *lst, void (*f)(void *));
/*iterates the lsit 'lst' and applies the function
'f' on the content of each node*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
/*creates a new lsit resulting of the successive
applications of the function 'f'*/

#endif
