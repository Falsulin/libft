/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bewalker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 16:36:48 by bewalker          #+#    #+#             */
/*   Updated: 2019/10/10 16:42:03 by bewalker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*#include <unistd.h>
#include <stdio.h>
#include <ctype.h>*/

int		ft_isprint(int c)
{
	if ((c >= 33 && c <= 126) || (c == ' '))
		return (1);
	return (0);
}

/*int		main(void)
{
	char c = 126;
	printf("%d\n", ft_isprint(c));
	printf("%d", isprint(c));
	return (0);
}*/
