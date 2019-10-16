/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bewalker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 16:10:23 by bewalker          #+#    #+#             */
/*   Updated: 2019/10/10 16:41:38 by bewalker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*#include <unistd.h>
#include <stdio.h>
#include <ctype.h>*/

int		ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/*int		main(void)
{
	printf("%d\n", ft_isdigit('7'));
	printf("%d", isdigit('7'));
	return (0);
}*/
