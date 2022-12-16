/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eshakhge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 00:44:25 by eshakhge          #+#    #+#             */
/*   Updated: 2022/03/15 21:06:14 by eshakhge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*pd;
	char	*qs;
	size_t	i;

	i = 0;
	pd = (char *)dest;
	qs = (char *)src;
	while (i < n)
	{
		pd[i] = qs[i];
		if (qs[i++] == (unsigned char)c)
			return ((void *)&pd[i]);
	}
	return (NULL);
}
