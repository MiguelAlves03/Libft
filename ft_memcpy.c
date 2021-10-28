#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*tmp_src;
	unsigned char		*tmp_dest;
	size_t				i;

	if (!dest && !src)
	{
		return (NULL);
	}
	tmp_src = (unsigned char *) src;
	tmp_dest = (unsigned char *) dest;
	i = 0;
	while (i < n)
	{
		tmp_dest[i] = tmp_src[i];
		i++;
	}
	return (dest);
}
