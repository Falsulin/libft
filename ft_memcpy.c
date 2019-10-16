/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bewalker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 15:36:13 by bewalker          #+#    #+#             */
/*   Updated: 2019/10/16 14:59:28 by bewalker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*#include <unistd.h>
#include <stdio.h>
#include <string.h>*/

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*ptr1;
	char	*ptr2;
	size_t	i;

	ptr1 = (char *)src;
	ptr2 = (char *)dst;
	i = 0;
	if (!src && !dst)
		return (NULL);
	while (i < n)
	{
		ptr2[i] = ptr1[i];
		i++;
	}
	return (dst);
}

/*int		main(void)
{
	char src[20] = "bonszzr";
	char dst[20] = "bonjaar";
	size_t n = 5;
	printf("%s\n", memcpy(dst, src, n));
	printf("%s\n", ft_memcpy(dst, src, n));
	return (0);
}*/
