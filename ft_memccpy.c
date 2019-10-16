/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bewalker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 18:49:12 by bewalker          #+#    #+#             */
/*   Updated: 2019/10/16 15:00:15 by bewalker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*#include <unistd.h>
#include <stdio.h>
#include <string.h>*/

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

/*int		main(void)
{
	char dst1[50] = "how are you ?";
	char src1[50] = "zzzzzzzzyou ?";
	char dst2[50] = "how are you ?";
	char src2[50] = "zzzzzzzzyou ?";
	char *original;
	char *new;
	original = memccpy(dst1, src1, 'u', 13);
	new = ft_memccpy(dst2, src2, 'u', 13);
	printf("original : %s\n", original);
	printf("new : %s\n", new);
	return (0);
}*/
