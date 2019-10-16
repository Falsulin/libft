/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmax.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bewalker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 13:23:26 by bewalker          #+#    #+#             */
/*   Updated: 2019/10/11 16:08:13 by bewalker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		ft_lstmax(t_list *lst)
{
	int max;

	max = 0;
	while (lst)
	{
		if (lst->value > max)
			max = lst->value;
		lst = lst->next;
	}
	return (max);
}

/*int		main(void)
{
	t_list *lst;
	t_list *lst2;

	lst = NULL;
	lst2 = NULL;
	lst = (t_list*)malloc(sizeof(t_list));
	lst2 = lst;
	lst->value = 46;
	lst->next = (t_list*)malloc(sizeof(t_list));
	lst = lst->next;
	lst->value = 95;
	lst->next = (t_list*)malloc(sizeof(t_list));
	lst = lst->next;
	lst->value = 25;
	lst->next = NULL;
	printf("%d", ft_lstmax(lst2));
	return (0);
}*/
