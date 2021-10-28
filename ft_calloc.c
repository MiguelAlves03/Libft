#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = malloc(num * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (i < size * num)
	{
		ptr[i] = 0;
		i++;
	}
	return ((void *)ptr);
}
