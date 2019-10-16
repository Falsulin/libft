/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bewalker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 18:49:12 by bewalker          #+#    #+#             */
/*   Updated: 2019/10/16 15:36:16 by bewalker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dst, const void *restrict src,
		int c, size_t n)
{
	unsigned char *ptr1;
	unsigned char *ptr2;

	ptr1 = (unsigned char*)src;
	ptr2 = (unsigned char*)dst;
	while (n--)
	{
		*ptr2 = *ptr1;
		if (*ptr2 == (unsigned char)c)
			return (++ptr2);
		ptr1++;
		ptr2++;
	}
	return (NULL);
}
