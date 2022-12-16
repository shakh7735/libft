/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eshakhge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 19:09:34 by eshakhge          #+#    #+#             */
/*   Updated: 2022/03/15 19:11:14 by eshakhge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		index;

	if (!s || !f)
		return (NULL);
	str = (char *)malloc(ft_strlen(s) + 1);
	if (!str)
		return (NULL);
	index = 0;
	while (s[index])
	{
		str[index] = f(index, s[index]);
		++index;
	}
	str[index] = '\0';
	return (str);
}
