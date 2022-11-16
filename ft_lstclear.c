/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 05:08:07 by shamsate          #+#    #+#             */
/*   Updated: 2022/11/01 05:40:58 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*str;
	t_list	*s;

	if (!del || !lst)
		return ;
	str = *lst;
	while (str)
	{
		s = str;
		str = str -> next;
		del(s -> content);
		free(s);
	}
	*lst = NULL;
}
