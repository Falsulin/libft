/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bewalker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 16:56:41 by bewalker          #+#    #+#             */
/*   Updated: 2019/10/16 15:48:39 by bewalker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	int i;
	int j;
	int k;
	char**tab;

	i = 0;
	k = -1;
	if (!s || !c)
		return (NULL);
	if (!(tab = (char **)malloc(sizeof(char *) * (ft_word_max(s, c)) + 1)))
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] && (s[i] != c))
			i++;
		if (i > j)
			tab[++k] = ft_strndup(s + j, i - j);
	}
	tab[++k] = NULL;
	return (tab);
}
