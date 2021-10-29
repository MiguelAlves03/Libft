/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulisses <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 18:23:07 by mulisses          #+#    #+#             */
/*   Updated: 2021/10/29 18:23:08 by mulisses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	*str_v;

	i = 0;
	str_v = (char *)str;
	if (!str)
	{
		return (NULL);
	}
	if (c == '\0')
	{
		return (&str_v[ft_strlen(str)]);
	}
	while (str_v[i])
	{
		if (str_v[i] == (char)c)
		{
			return (&str_v[i]);
		}
		i++;
	}
	return (NULL);
}
