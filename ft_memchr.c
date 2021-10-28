#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*tmp;
	size_t			i;

	i = 0;
	tmp = (unsigned char *) str;
	while (i < n)
	{
		if (tmp[i] == (unsigned char)c)
		{
			return (&tmp[i]);
		}
		i++;
	}
	return (NULL);
}
