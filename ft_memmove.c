#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*tmp_src;
	unsigned char		*tmp_dest;

	if (!dest && !src)
	{
		return (NULL);
	}
	tmp_src = (unsigned char *)src;
	tmp_dest = (unsigned char *)dest;
	if (tmp_src < tmp_dest)
	{
		while (n--)
		{
			tmp_dest[n] = tmp_src[n];
		}
	}
	else
	{
		ft_memcpy(tmp_dest, tmp_src, n);
	}
	return (dest);
}
