#include "libft.h"

char	**ft_realloc_tab(char **ptr, size_t newsize)
{
	char	**newptr;
	size_t	i;
	size_t	size;

	if (ptr == 0)
		return ((char **)malloc(sizeof(char *) * newsize));
	size = ft_tabsize(ptr);
	if (size >= newsize)
		return (ptr);
	newptr = (char **)malloc(sizeof(char *) * newsize);
	i = 0;
	while (newptr && i < size)
	{
		newptr[i] = ft_strdup(ptr[i]);
		if (!newptr[i])
			break ;
		++i;
	}
	if (i != size)
		newptr = ft_freetab(newptr);
	ptr = ft_freetab(ptr);
	return (newptr);
}
