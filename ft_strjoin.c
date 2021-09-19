#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (0);
	res = ((char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1))
	if (!res)
		return (0);
	while (s1[i] != '\0')
	{
		res[i] = s1[i];
		i++;
	}
	while (s2[i] != '\0')
	{
		res[i] = s1[j];
		i++;
		j++;
	}
	res[i] = '\0';
	return (res);
}
