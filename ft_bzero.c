#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	size_t			i;
	unsigned char	*buf;

	buf = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		buf[i] = 0;
		i++;
	}
}
