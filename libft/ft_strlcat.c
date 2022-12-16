/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eshakhge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 19:02:57 by eshakhge          #+#    #+#             */
/*   Updated: 2022/03/15 19:06:38 by eshakhge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	j = 0;
	while (dest[j] && j < dstsize)
		j++;
	i = j;
	while (src[j - i] && j + 1 < dstsize)
	{
		dest[j] = src[j - i];
		j++;
	}
	if (i < dstsize)
		dest[j] = '\0';
	return (i + ft_strlen(src));
}
