/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 05:18:07 by shamsate          #+#    #+#             */
/*   Updated: 2022/11/10 06:16:04 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (dest == src)
		return (dest);
	if (dest > src)
		while (n--)
			*(char *)(dest + n) = *(char *)(src + n);
	else
		ft_memcpy(dest, src, n);
	return (dest);
}	
