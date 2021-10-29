/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulisses <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 18:25:00 by mulisses          #+#    #+#             */
/*   Updated: 2021/10/29 18:25:01 by mulisses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_check_char_set(char const *set, char c)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str_trim;
	size_t	i;
	size_t	bigin;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	bigin = 0;
	while (s1[bigin] && ft_check_char_set(set, s1[bigin]))
		bigin++;
	end = ft_strlen(s1);
	while (end > bigin && ft_check_char_set(set, s1[end - 1]))
		end--;
	str_trim = malloc(sizeof(*s1) * (end - bigin + 1));
	if (str_trim == NULL)
		return (NULL);
	i = 0;
	while (bigin < end)
	{
		str_trim[i] = s1[bigin];
		i++;
		bigin++;
	}
	str_trim[i] = 0;
	return (str_trim);
}
