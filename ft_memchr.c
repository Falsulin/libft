/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bewalker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 16:39:33 by bewalker          #+#    #+#             */
/*   Updated: 2019/10/16 15:36:37 by bewalker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*src;
	size_t	i;

	src = (char*)s;
	i = 0;
	while (i < n)
	{
		if ((unsigned char)src[i] == (unsigned char)c)
			return ((char*)s + i);
		i++;
	}
	return (NULL);
}
