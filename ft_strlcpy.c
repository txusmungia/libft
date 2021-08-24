#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_size;
	size_t	i;

	i = 0;
	src_size = ft_strlen(src);
	if (!dst || !src)
		return (0);
	if (size != 0)
	{
		while ((i < (size - 1)) && (src[i] != '\0'))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (src_size);
}
