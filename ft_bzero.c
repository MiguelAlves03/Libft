/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulisses <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 18:18:02 by mulisses          #+#    #+#             */
/*   Updated: 2021/10/29 18:18:06 by mulisses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	size_t			i;
	unsigned char	*buf;

	buf = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		buf[i] = 0;
		i++;
	}
}
