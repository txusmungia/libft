/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartin <jemartin@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 11:29:40 by jemartin          #+#    #+#             */
/*   Updated: 2021/08/31 12:33:10 by jemartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int		i;
	int		minus;
	long	res;

	i = 0;
	minus = 1;
	res = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minus = minus *(-1);
		i++;
	}
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		res = (str[i] - '0') + (res * 10);
		if (((res * minus) > 2147483648) || ((res * minus) < -2147483648))
			return (((res * minus) < -2147483648) - 1);
		i++;
	}
	return (res * minus);
}
