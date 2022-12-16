/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eshakhge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 18:46:14 by eshakhge          #+#    #+#             */
/*   Updated: 2022/03/15 18:55:32 by eshakhge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*copy;
	size_t	i;

	copy = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!copy)
		return (0);
	i = -1;
	while (s[++i])
		copy[i] = s[i];
	copy[i] = '\0';
	return (copy);
}
