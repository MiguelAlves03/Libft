/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulisses <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 18:19:30 by mulisses          #+#    #+#             */
/*   Updated: 2021/10/29 18:19:32 by mulisses         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	int_len(long n, size_t len)
{
	while (n > 9)
	{
		n /= 10;
		len++;
	}
	len++;
	return (len);
}

char	*ft_to_char(char *str, int len, long n, int neg)
{
	str[len + neg] = '\0';
	while (len)
	{
		len--;
		str[len + neg] = n % 10 + '0';
		n /= 10;
	}
	if (neg == 1)
		str[0] = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	char		*to_str;
	int			len;
	int			neg;
	long		nb;

	neg = 0;
	len = 0;
	nb = (long)n;
	if (nb < 0)
	{
		neg = 1;
		nb *= -1;
	}
	len = int_len(nb, len);
	to_str = malloc(sizeof(char) * (len + 1 + neg));
	if (to_str == NULL)
		return (NULL);
	to_str = ft_to_char(to_str, len, nb, neg);
	return (to_str);
}
