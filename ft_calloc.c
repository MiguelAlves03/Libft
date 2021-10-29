/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulisses <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 18:18:17 by mulisses          #+#    #+#             */
/*   Updated: 2021/10/29 18:18:20 by mulisses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
