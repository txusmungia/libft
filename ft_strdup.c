/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartin <jemartin@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 12:44:27 by jemartin          #+#    #+#             */
/*   Updated: 2021/08/31 13:12:53 by jemartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*sdest;

	sdest = malloc(ft_strlen(s1) + 1);
	if (sdest == NULL)
		return (NULL);
	return (ft_memcpy(sdest, s1, ft_strlen(s1) + 1));
}
