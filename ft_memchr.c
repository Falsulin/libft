/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bewalker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 16:39:33 by bewalker          #+#    #+#             */
/*   Updated: 2019/10/16 15:07:13 by bewalker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*#include <unistd.h>
#include <stdio.h>
#include <string.h>*/

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

/*int		main(void)
{
	printf("me : %s\n", ft_memchr("bonjour monsieur", 'j', 12));
	printf("original : %s\n", memchr("bonjour monsieur", 'j', 12));
	return (0);
}*/
