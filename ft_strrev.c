/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bewalker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 14:49:57 by bewalker          #+#    #+#             */
/*   Updated: 2019/10/10 20:27:20 by bewalker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*#include <unistd.h>
#include <stdio.h>*/

char	*ft_strrev(char *str)
{
	int		i;
	int		j;
	char	tmp;

	i = 0;
	j = 0;
	while (str[i])
		i++;
	i--;
	while (i >= j)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		j++;
		i--;
	}
	return (str);
}

/*int main(void)
{
	char str[] = "benjamin";
	printf("%s", ft_strrev(str));
	return (0);
}*/
