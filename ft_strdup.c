/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bewalker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 17:22:15 by bewalker          #+#    #+#             */
/*   Updated: 2019/10/16 14:57:52 by bewalker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>*/

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*dest;

	i = 0;
	dest = (char*)malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (dest == NULL)
	{
		return (NULL);
	}
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int		main(void)
{
	char src[] = "bonjour";
	printf("%s", ft_strdup(src));
	return (0);
}*/
