#include "libft.h"

size_t	ft_tabsize(char **tab)
{
	size_t	size;

	size = 0;
	while (tab[size])
		++size;
	return (size);
}