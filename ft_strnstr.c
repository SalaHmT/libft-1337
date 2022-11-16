/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 05:10:54 by shamsate          #+#    #+#             */
/*   Updated: 2022/11/12 01:46:51 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*s1;
	char	*s2;
	size_t	i;
	size_t	j;

	s1 = (char *)haystack;
	s2 = (char *)needle;
	if (needle[0] == '\0')
		return (s1);
	i = 0;
	while (i < len && s1[i] != '\0')
	{
		j = 0;
		if (s1[i] == s2[j])
		{
			while (i + j < len && s1[i + j] == s2[j])
			{
				j++;
				if (s2[j] == '\0')
					return ((char *)&s1[i]);
			}
		}
		i++;
	}
	return (NULL);
}					
