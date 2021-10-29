/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulisses <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 18:24:32 by mulisses          #+#    #+#             */
/*   Updated: 2021/10/29 18:24:33 by mulisses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		len;
	char	*str_v;

	len = ft_strlen(str);
	str_v = (char *)str;
	if (c == '\0')
	{
		return ((char *)&str_v[len]);
	}
	while (len >= 0)
	{
		if (str_v[len] == (char)c)
		{
			return ((char *)&str_v[len]);
		}
		len--;
	}
	return (NULL);
}
