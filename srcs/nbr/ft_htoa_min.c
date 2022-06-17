#include "libft.h"

int ft_htoa_min(int num, char *str, int i)
{
if (num > 16)
	i = ft_htoa_min((num / 16), str, i);
if ((num % 16) < 10)
	str[i] = num % 16 + 48;
else
	str[i] = num % 16 + 87;
i++;
str[i] = '\0';
return (i);
}