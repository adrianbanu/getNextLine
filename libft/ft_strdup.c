#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *tmp;

	tmp = (char*)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (tmp == NULL)
		return (NULL);
	ft_strcpy(tmp, s1);
	return (tmp);
}
