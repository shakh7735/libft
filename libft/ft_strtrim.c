/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eshakhge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 19:29:02 by eshakhge          #+#    #+#             */
/*   Updated: 2022/03/15 19:34:21 by eshakhge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_msize(char const *s1, char const *set)
{
	int	i;
	int	t;

	t = -1;
	i = ft_strlen(s1);
	while (s1[++t])
		if (ft_strchr(set, (int)s1[t]) == NULL)
			break ;
	while (--i > t)
		if (ft_strchr(set, (int)s1[i]) == NULL)
			break ;
	i++;
	return (i - t);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*d;
	int		i;
	int		t;
	int		msize;

	msize = ft_msize(s1, set);
	d = malloc(msize + 1);
	if (!d)
		return (NULL);
	i = -1;
	t = -1;
	while (s1[++t])
		if (ft_strchr(set, s1[t]) == 0)
			break ;
	while (++i < msize)
		d[i] = s1[i + t];
	d[i] = 0;
	return (d);
}
