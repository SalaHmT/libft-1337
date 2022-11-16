/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 03:53:49 by shamsate          #+#    #+#             */
/*   Updated: 2022/10/22 04:28:38 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	i;

	str = (char *)malloc(ft_strlen(s) + 1 * sizeof(char ));
	if (!str)
		return (str);
	i = -1;
	while (*(s + (++i)))
		*(str + i) = *(s + i);
	str[i] = '\0';
	return (str);
}
