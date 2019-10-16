/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bewalker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 13:56:57 by bewalker          #+#    #+#             */
/*   Updated: 2019/10/15 21:13:18 by bewalker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*#include <unistd.h>
#include <stdio.h>
#include <string.h>*/

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char*)s);
	return (NULL);
}

/*int		main(void)
{
	const char str[] = "bonjour";
	int c = 'n';
	printf("%s\n", ft_strchr(str, c));
	printf("og : %s\n", strchr(str, c));
	return (0);
}*/
