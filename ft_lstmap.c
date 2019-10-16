/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bewalker <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 18:24:29 by bewalker          #+#    #+#             */
/*   Updated: 2019/10/16 14:37:47 by bewalker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*#include <stdio.h>*/

/*char	*ft_strdup(char *c);

void	*f(t_list *lst)
{
	lst->content  = ft_strdup("a");
	return(NULL);
}*/

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new;

	if (lst != NULL && f != NULL)
	{
		new = f(lst);
		if (new != NULL && lst->next != NULL)
			new->next = ft_lstmap(lst->next, f);
		return (new);
	}
	return (NULL);
}

/*int		main(void)
{
	t_list *lst = NULL;

	lst = ft_lstmap(lst, (void*)f(lst));
}*/
