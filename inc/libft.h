/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-l <abonte-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 14:40:11 by abonte-l          #+#    #+#             */
/*   Updated: 2022/06/17 18:41:01 by abonte-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdio.h>

# define SUCCESS 0
# define ERROR -1
# define ERROR_TEXT	"Error\n"

# define INT_MAX 2147483647
# define INT_MIN -2147483648
# define INT_ERROR 2147483648

# define TRUE 1
# define FALSE 0

# define SIZE_OF_STRING 50 
# define SIZE_OF_DELIM 5

/*
** defining node of the linked list
*/
typedef struct		s_node
{
	char			*data;
	int	index;
	struct s_node 	*next;
	struct s_node	*prev;
}		t_node;

/*
** defining a double linked list
*/
typedef struct		s_dlst
{
	int	length;
	struct s_node 	*tail;
	struct s_node	*head;
}		t_dlst;


typedef struct		s_list
{
	void			*content;
	struct s_list	*next;
}		t_list;

/*
** char functions
*/
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);

/*
** double linked list functions
*/
t_dlst	*dlist_new(void);
t_dlst	*dlist_add_end(t_dlst *list, char *data);
t_dlst	*dlist_add_start(t_dlst *list, char *data);
t_dlst	*dlist_delete_node(t_dlst *list, char *data);
void 	dlist_delete(t_dlst **list);
void	new_node_end(t_dlst *list, t_node *new_node, char *data);
void	new_node_start(t_dlst *list, t_node *new_node, char *data);
void 	dlist_display(t_dlst *p_list);

/*
** linked list functions
*/
int		ft_lstsize(t_list *lst);
void	ft_lstadd_back(t_list **alst, t_list *new);
void	ft_lstiter(t_list *lst, void (*f)(void *));
void	ft_lstadd_front(t_list **alst, t_list *new);
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstdelone(t_list *lst, void (*del)(void*));
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstnew(void *content);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),
		void (*del)(void *));

/*
** memory functions
*/
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);
void	*ft_memset(void *b, int c, size_t len);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);

/*
** number functions
*/
char	*ft_itoa_deprecated(int n);
int 	ft_htoa_maj(int num, char *str, int i);
int 	ft_htoa_min(int num, char *str, int i);
int 	ft_itoa(unsigned int num, char *str, int i);
int		ft_atoi(const char *str);

/*
** print functions
*/
void	ft_putchar(char c);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);

/*
** string functions
*/
char	*ft_strdup(const char *src);
char	*ft_strchr(const char *s, int c);
char	**ft_split(char const *s, char c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strnstr(const char *big, const char *little, size_t len);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
size_t	ft_strlen(const char *str);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

/*
** tab functions
*/
void	ft_puttab_fd(char **tab, int fd);
char	**ft_realloc_tab(char **ptr, size_t newsize);
char	**ft_tabdup(char *tab[]);
size_t	ft_tabsize(char **tab);
void	*ft_freetab(char **tab);


#endif
