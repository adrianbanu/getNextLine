#include "libft.h"

size_t		ft_strlen(const char *str)
{
	size_t lungime;

	lungime = 0;
	while (str[lungime])
	{
		lungime++;
	}
	return (lungime);
}

