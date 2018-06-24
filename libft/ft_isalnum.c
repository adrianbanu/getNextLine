#include "libft.h"

int		ft_isalnum(int argument)
{
	if (ft_isalpha(argument) || ft_isdigit(argument))
		return (1);
	else
		return (0);
}

