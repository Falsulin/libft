/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bewalker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 16:24:08 by bewalker          #+#    #+#             */
/*   Updated: 2019/10/10 20:38:08 by bewalker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*#include <unistd.h>
#include <stdio.h>
#include <string.h>*/

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*ptr1;

	i = 0;
	ptr1 = (unsigned char *)b;
	while (len--)
	{
		ptr1[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

/*int		main(void)
{
	size_t len = 4;
	char c = 'A';
	char b[20] = "Bonjour Mes Amis";
	printf("%s\n", memset(b + 7, c, len));
	printf("%s\n", ft_memset(b + 7, c, len));
	return (0);
}*/
