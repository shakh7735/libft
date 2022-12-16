/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eshakhge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 00:32:43 by eshakhge          #+#    #+#             */
/*   Updated: 2022/03/15 18:12:26 by eshakhge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t count)
{
	char	*pd;
	char	*qs;

	pd = (char *)dest;
	qs = (char *)src;
	if (pd > qs)
		while (count--)
			*(pd + count) = *(qs + count);
	else
		while (count--)
			*pd++ = *qs++;
	return (dest);
}
