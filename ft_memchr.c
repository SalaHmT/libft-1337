/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 01:59:30 by shamsate          #+#    #+#             */
/*   Updated: 2022/10/22 02:02:17 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = -1;
	if (!n)
		return (NULL);
	while (++i < n)
		if (*(unsigned char *)(s + i) == (unsigned char )c)
			return ((void *)s + i);
	return (NULL);
}
