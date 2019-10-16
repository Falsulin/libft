/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bewalker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 14:59:38 by bewalker          #+#    #+#             */
/*   Updated: 2019/10/15 21:18:50 by bewalker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*#include <unistd.h>
#include <stdio.h>
#include <string.h>*/

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = ft_strlen(s);
	if (c == 0)
		return ((char *)s + i);
	while (i >= 0)
	{
		if (s[i] == c)
			return ((char*)s + i);
		i--;
	}
	return (NULL);
}

/*int main(void)
{
	char c = 'b';
	char str[] = "bajbamin";
 	printf("%s\n", ft_strrchr(str, c));
 	printf("og : %s", strrchr(str, c));
	return (0);
}*/
