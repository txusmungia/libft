/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartin <jemartin@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 11:11:03 by jemartin          #+#    #+#             */
/*   Updated: 2021/08/24 12:40:31 by jemartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (!dst && !src)
		return (NULL);
	else if ((dst == src) || len == 0)
		return (dst);
	else if (src > dst)
		ft_memcpy(dst, src, len);
	else
	{	
		while (len--)
			((char *)dst)[len] = ((char *)src)[len];
	}
	return (dst);
}
