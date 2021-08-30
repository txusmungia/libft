/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartin <jemartin@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 12:23:00 by jemartin          #+#    #+#             */
/*   Updated: 2021/08/30 12:25:50 by jemartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			len;
	const char	*ini;

	ini = s;
	len = ft_strlen(s);
	s = (s + len);
	while (*s != *ini && *s != (char)c)
		s--;
	if (*s == (char) c)
		return ((char *)s);
	return (0);
}
