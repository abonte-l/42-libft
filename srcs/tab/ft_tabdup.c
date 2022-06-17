#include "libft.h"

char	**ft_tabdup(char *tab[])
{
	char	**copy;
	size_t	size;
	size_t	i;

	copy = NULL;
	size = 0;
	i = 0;
	size = ft_tabsize(tab);
	copy = malloc(sizeof(char *) * (size + 1));
	if (!copy)
		return (NULL);
	while (i < size)
	{
		copy[i] = ft_strdup(tab[i]);
		if (!copy[i])
		{
			ft_freetab(copy);
			return (NULL);
		}
		++i;
	}
	copy[i] = NULL;
	return (copy);
}