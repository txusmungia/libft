#include "libft.h"
//mklgit

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
