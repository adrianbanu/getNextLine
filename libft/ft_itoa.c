#include "libft.h"

static size_t	input_len(int n)
{
	size_t		i;

	i = 1;
	while (n /= 10)
		i++;
	return (i);
}

char			*ft_itoa(int n)
{
	char			*str;
	size_t			length_s;
	unsigned int	n_cpy;

	length_s = input_len(n);
	n_cpy = n;
	if (n < 0)
	{
		n_cpy = -n;
		length_s++;
	}
	if (!(str = ft_strnew(length_s)))
		return (NULL);
	str[--length_s] = n_cpy % 10 + '0';
	while (n_cpy /= 10)
		str[--length_s] = n_cpy % 10 + '0';
	if (n < 0)
		*(str + 0) = '-';
	return (str);
}
