#include "libft.h"

int ft_itoa(unsigned int num, char *str, int i)
{
	if (num > 10)
		i = ft_itoa((num / 10), str, i);
	str[i] = num % 10 + 48;
	i++;
	str[i] = '\0';
	return (i);
}