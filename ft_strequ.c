/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bewalker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 16:04:05 by bewalker          #+#    #+#             */
/*   Updated: 2019/10/15 23:27:53 by bewalker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*#include <unistd.h>
#include <stdio.h>*/

int		ft_strequ(char const *s1, char const *s2)
{
	if (s1 && s2)
		if (!ft_strcmp(s1, s2))
			return (1);
	return (0);
}

/*int		main(void)
{
	char s1[] = "bdeef";
	char s2[] = "bdeef";
	printf("%d", ft_strequ(s1, s2));
	return (0);
}*/
