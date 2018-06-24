#include "libft.h"

char	*ft_strstr(const char *strbig, const char *strsmall)
{
	int		i;
	int		j;
	int		k;
	int		good;

	if (!ft_strlen(strsmall))
		return ((char *)strbig);
	i = -1;
	good = 0;
	while (*(strbig + ++i) && !good)
	{
		if (*(strbig + i) == *(strsmall + 0))
		{
			j = 0;
			k = i;
			good = 1;
			while (*(strsmall + j))
				if (*(strsmall + j++) != *(strbig + k++))
					good = 0;
			if (good)
				return ((char *)strbig + i);
		}
	}
	return (NULL);
}
