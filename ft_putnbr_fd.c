/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartin <jemartin@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 17:22:38 by jemartin          #+#    #+#             */
/*   Updated: 2021/09/26 17:25:25 by jemartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	c;
	int		i;

	i = n;
	if (n <= -2147483648)
		write(fd, "-2147483648", 11);
	else if (n >= 0 && n <= 9)
	{
		c = n + '0';
		write(fd, &c, 1);
	}
	else if (i >= 10)
	{
		ft_putnbr_fd(i / 10, fd);
		c = i % 10 + '0';
		write(fd, &c, 1);
	}
	else
	{
		write(fd, "-", 1);
		ft_putnbr_fd((n * (-1)), fd);
	}
}
