/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bewalker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 16:28:23 by bewalker          #+#    #+#             */
/*   Updated: 2019/10/15 23:23:33 by bewalker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*#include <unistd.h>
#include <stdio.h>*/

/*char	f(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		s[i] = 'a';
		i++;
	}
	return (0);
}*/

void	ft_striter(char *s, void (*f)(char *))
{
	unsigned int i;

	i = 0;
	if (s && f)
	{
		while (s[i] != '\0')
		{
			f(s + i);
			i++;
		}
	}
}
