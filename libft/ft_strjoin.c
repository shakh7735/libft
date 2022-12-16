/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eshakhge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 18:58:45 by eshakhge          #+#    #+#             */
/*   Updated: 2022/04/10 21:39:56 by eshakhge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*d;
	size_t	i1;
	size_t	i2;
	int		j;

	i1 = ft_strlen(s1);
	i2 = ft_strlen(s2);
	d = malloc(sizeof(char) * (i1 + i2 + 1));
	if (!d)
		return (NULL);
	j = 0;
	while (*s1)
		d[j++] = *s1++;
	while (*s2)
		d[j++] = *s2++;
	d[i1 + i2] = 0;
	return (d);
}
