/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 01:10:00 by shamsate          #+#    #+#             */
/*   Updated: 2022/10/31 22:34:06 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t			i;
	size_t			j;
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *)dst;
	s2 = (unsigned char *)src;
	if (dstsize == 0)
		return (ft_strlen(src));
	i = 0;
	j = 0;
	while (s1[i] != '\0' && i < dstsize)
		i++;
	while (s2[j] != '\0' && (i + j + 1) < dstsize)
	{
		s1[i + j] = s2[j];
		j++;
	}
	if (i != dstsize)
		s1[i + j] = '\0';
	return (i + ft_strlen(src));
}
