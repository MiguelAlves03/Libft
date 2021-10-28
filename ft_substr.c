#include "libft.h"

char	*str_error(void)
{
	char	*s_sup;

	s_sup = malloc(1 * sizeof(char));
	if (s_sup == NULL)
		return (NULL);
	s_sup[0] = '\0';
	return (s_sup);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	len_ctrl;
	char			*substr;
	size_t			i;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (str_error());
	len_ctrl = ft_strlen(s + start);
	if (len_ctrl < len)
		len = len_ctrl;
	substr = malloc(sizeof(char) * (len + 1));
	if (substr == NULL)
		return (NULL);
	i = 0;
	s = s + start;
	while (i < len)
	{
		substr[i] = s[i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
