/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eshakhge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 00:04:45 by eshakhge          #+#    #+#             */
/*   Updated: 2022/03/15 18:06:03 by eshakhge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t count)
{
	char	*pd;
	char	*qs;

	pd = (char *)dest;
	qs = (char *)src;
	if (pd == qs)
		return (pd);
	while (count--)
		*pd++ = *qs++;
	return (dest);
}
