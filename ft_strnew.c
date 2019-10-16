/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bewalker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 12:04:15 by bewalker          #+#    #+#             */
/*   Updated: 2019/10/15 22:12:12 by bewalker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>*/

char	*ft_strnew(size_t size)
{
	return ((char*)ft_memalloc(size + 1));
}

/*int		main(void)
{
	size_t size;
	printf("output : %s", ft_strnew(1));
	return (0);
}*/
