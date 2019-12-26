/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bewalker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 12:56:48 by bewalker          #+#    #+#             */
/*   Updated: 2019/10/16 15:35:39 by bewalker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_max(int *tab, unsigned int len)
{
	int max;

	max = 0;
	if (tab[0] == '\0')
		return (0);
	while (len--)
	{
		if (max < tab[len])
			max = tab[len];
	}
	return (max);
}
