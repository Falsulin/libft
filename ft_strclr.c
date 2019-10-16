/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bewalker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 15:36:04 by bewalker          #+#    #+#             */
/*   Updated: 2019/10/10 16:47:53 by bewalker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*#include <unistd.h>
#include <stdio.h>*/

void	ft_strclr(char *s)
{
	if (s != NULL)
	{
		while (*s)
			*s++ = '\0';
	}
}

/*int		main(void)
{
	char s[] = "benjamin";
	ft_strclr(s);
	printf("output : %s", s);
	return (0);
}*/
