/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bewalker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 13:36:59 by bewalker          #+#    #+#             */
/*   Updated: 2019/10/15 21:35:14 by bewalker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*#include <stdio.h>
#include <unistd.h>
#include <string.h>*/

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && (s1[i] == s2[i]) && (i + 1 < n))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*int		main(void)
{
	printf("%d\n", ft_strncmp("bknjamin", "banjzmin", 3));
	printf("%d", strncmp("bknjamin", "banjzmin", 3));
	return (0);
}*/
