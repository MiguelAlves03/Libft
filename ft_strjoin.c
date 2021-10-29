/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulisses <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 18:23:30 by mulisses          #+#    #+#             */
/*   Updated: 2021/10/29 18:23:32 by mulisses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*strcat;
	size_t	s1_len;
	size_t	i;

	i = 0;
	s1_len = ft_strlen(s1);
	strcat = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (strcat == NULL)
	{
		return (NULL);
	}
	while (s1[i])
	{
		strcat[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		strcat[s1_len + i] = s2[i];
		i++;
	}
	strcat[s1_len + i] = '\0';
	return (strcat);
}
