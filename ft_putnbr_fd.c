/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamsate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 02:03:52 by shamsate          #+#    #+#             */
/*   Updated: 2022/10/31 22:41:10 by shamsate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	n2;

	n2 = n;
	if (n2 < 0)
	{
		n2 = (n2 * -1);
		write(fd, "-", 1);
	}
	if (n2 > 9)
	{
		ft_putnbr_fd(n2 / 10, fd);
		ft_putchar_fd((n2 % 10) + '0', fd);
	}
	else
		ft_putchar_fd(n2 + '0', fd);
}
