/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 04:00:33 by shamsate          #+#    #+#             */
/*   Updated: 2022/10/21 04:08:15 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	if ((unsigned char )c == 0)
		return ((char *)s + ft_strlen(s));
	i = -1;
	while (*(s + (++i)))
		if (*(s + i) == (unsigned char )c)
			return ((char *)(s + i));
	return (NULL);
}
