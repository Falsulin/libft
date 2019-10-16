/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bewalker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 14:46:29 by bewalker          #+#    #+#             */
/*   Updated: 2019/10/15 22:37:30 by bewalker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*#include <unistd.h>
#include <stdio.h>*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*int		main(void)
{
	char c = 'a';
	printf("%c", ft_putchar(c));
	return (0);
}*/
