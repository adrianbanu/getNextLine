#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	int		strlen;
	int		i;

	i = 0;
	strlen = ft_strlen((char*)src);
	while (i < (int)n)
	{
		if (i > strlen)
			dest[i] = '\0';
		else
			dest[i] = src[i];
		i++;
	}
	return (dest);
}

