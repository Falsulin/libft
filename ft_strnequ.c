/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bewalker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 14:11:11 by bewalker          #+#    #+#             */
/*   Updated: 2019/10/16 15:04:41 by bewalker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*#include <unistd.h>
#include <stdio.h>*/

int		ft_strnequ(char const *s1, char const *s2, size_t len)
{
	if (s1 && s2)
		if (!len || !ft_strncmp(s1, s2, len))
			return (1);
	return (0);
}

/*int		main(void)
{
	char s1[] = "benjamb";
	char s2[] = "benjamin";
	printf("%d", ft_strnequ(s1, s2, 8));
	return (0);
}*/
