/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonte-l <abonte-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 12:04:29 by abonte-l          #+#    #+#             */
/*   Updated: 2022/06/17 18:26:58 by abonte-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*malloc_word(char const *str, char c)
{
	char	*word;
	int		i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	word = (char *)malloc(sizeof(char) * (i + 1));
	i = 0;
	while (str[i] && str[i] != c)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static int		count_words(char const *s, char c)
{
	int		i;
	int		w_counter;
	char	*s1;

	i = 0;
	w_counter = 0;
	s1 = (char *)s;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c)
			w_counter++;
		i++;
	}
	i = 0;
	if (s[i] == c)
		w_counter = w_counter - 1;
	if ((ft_strlen(s1)) != 0 && s[(ft_strlen(s1)) - 1] != c)
		w_counter = w_counter + 1;
	return (w_counter);
}

char			**ft_split(char const *s, char c)
{
	int		j;
	int		nb_words;
	char	**gen_tab;

	if (s == NULL)
		return (0);
	nb_words = count_words(s, c);
	if (!(gen_tab = (char **)malloc(sizeof(char *) * (nb_words + 1))))
		return (0);
	j = 0;
	while (j < nb_words)
	{
		while (s && *s == c)
			s++;
		if (*s && *s != c)
		{
			gen_tab[j] = malloc_word(s, c);
			j++;
			while (*s && *s != c)
				s++;
		}
	}
	gen_tab[j] = NULL;
	return (gen_tab);
}