#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*tmp;
	size_t			i;

	i = 0;
	tmp = (unsigned char *) str;
	while (i < n)
	{
		tmp[i] = (char) c;
		i++;
	}
	return (str);
}
