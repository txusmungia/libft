/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartin <jemartin@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 17:05:56 by jemartin          #+#    #+#             */
/*   Updated: 2021/09/26 17:06:32 by jemartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	char	*ing;
	size_t	i;

	i = 0;
	ing = (char *)s;
	if (!ing)
		return (NULL);
	str = (char *)malloc(sizeof(char) * ((ft_strlen(ing) + 1)));
	if (!f || !str)
		return (NULL);
	while (i < ft_strlen(ing))
	{
		str[i] = f(i, ing[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
