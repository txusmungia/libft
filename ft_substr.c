//https://github.com/mklgit/libft/blob/main/ft_substr.c
//1 cambio. Apphina mejor
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*res;
	unsigned int	i;
	
	i = 0;
	if (s == NULL)
	       return (NULL);
	if (ft_strlen(s) < len)
		len = ft_strlen(s);
	res = (char *)malloc(sizeof(char) *(len + 1));
	if (res == NULL)	
		return (NULL);
	while ((s[start + i] != '\0') && (i < len))
	{
		res[i] = s[i + start];
		i++;
	}	
	res[i] = '\0';
	return (res);
}
