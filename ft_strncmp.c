/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemartin <jemartin@student.42urduliz.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 12:48:42 by jemartin          #+#    #+#             */
/*   Updated: 2021/08/30 12:48:44 by jemartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				result;

	i = 0;
	result = 0;
	while ((i < n) && result == 0 && (s1[i] != '\0' && s2[i] != '\0'))
	{
		result = (unsigned char)s1[i] - (unsigned char)s2[i];
		i++;
	}
	if (i < n && result == 0 && (s1[i] == '\0' || s2[i] == '\0'))
		result = (unsigned char)s1[i] - (unsigned char)s2[i];
	return (result);
}
