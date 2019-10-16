/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bewalker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 15:04:45 by bewalker          #+#    #+#             */
/*   Updated: 2019/10/15 20:50:58 by bewalker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*#include <unistd.h>
#include <stdio.h>
#include <string.h>*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*tmp;

	if (!dst && !src)
		return (NULL);
	tmp = (char *)malloc(sizeof(char) * len);
	if (tmp == NULL)
		return (NULL);
	ft_memcpy(tmp, src, len);
	ft_memcpy(dst, tmp, len);
	free(tmp);
	return (dst);
}

/*int		main(void)
{
	char dst[50] = "0123456789";
	char src[50] = "bonjour";
	printf("me : %s\n", ft_memmove(dst, src, 4));
	printf("original : %s\n", memmove(dst, src, 4));
	return (0);
}*/
