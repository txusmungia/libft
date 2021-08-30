/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartin <jemartin@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 09:38:58 by jemartin          #+#    #+#             */
/*   Updated: 2021/08/30 09:39:15 by jemartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

size_t	strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	dstlen;
	size_t	i;
	size_t	j;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	i = 0;
	j = dstlen;
	if (dstsize <= dstlen)
		return (dstsize + srclen);
	while ((src[i] != '\0') && (j < (dstsize - 1 )))
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (dstlen + srclen);
}
