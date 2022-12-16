/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eshakhge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 21:32:04 by eshakhge          #+#    #+#             */
/*   Updated: 2022/03/15 19:28:35 by eshakhge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*a;

	i = -1;
	a = 0;
	while (s[++i])
		if (s[i] == (unsigned char)c)
			a = (char *)&s[i];
	if (c == 0)
		return ((char *)&s[i]);
	return (a);
}
