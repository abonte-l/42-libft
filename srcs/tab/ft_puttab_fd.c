#include "libft.h"

void	ft_puttab_fd(char **tab, int fd)
{
	size_t	i;

	i = 0;
	while (tab[i])
	{
		ft_putendl_fd(tab[i], fd);
		++i;
	}
	return ;
}