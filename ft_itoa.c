/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartin <jemartin@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 17:03:33 by jemartin          #+#    #+#             */
/*   Updated: 2021/09/26 17:03:57 by jemartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <unistd.h>

static size_t	get_int_len(int n)
{
	size_t	n_len;

	n_len = 0;
	if (n <= 0)
		n_len = 1;
	while (n != 0)
	{
		n /= 10;
		n_len++;
	}
	return (n_len);
}

static int	abs_val(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

char	*ft_itoa(int n)
{	
	char	*str;
	int		n_len;
	int		sign;

	n_len = get_int_len(n);
	str = (char *)malloc(sizeof(char) * (n_len + 1));
	if (!str)
		return (0);
	str[n_len] = 0;
	sign = 1;
	if (n < 0)
		sign = 0;
	while (--n_len >= 0)
	{
		str[n_len] = abs_val(n % 10) + 48;
		n /= 10;
	}
	if (!sign)
		str[0] = (char)45;
	return (str);
}
