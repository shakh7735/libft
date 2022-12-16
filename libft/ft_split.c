/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eshakhge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 18:19:41 by eshakhge          #+#    #+#             */
/*   Updated: 2022/04/10 21:38:26 by eshakhge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_sizetab(char const *s1, char set)
{
	int	t;
	int	m;

	m = 0;
	t = 0;
	while (s1[t])
	{
		while (s1[t] == set && s1[t])
			t++;
		while (s1[t] != set && s1[t])
			t++;
		m++;
	}
	if (m == 0 || s1[t - 1] != set)
		m++;
	return (m);
}

static void	ft_split_loop(char const *s, char c, char **split)
{
	int	si;
	int	stri;
	int	count;

	si = -1;
	stri = 0;
	count = 0;
	while (s[++si])
	{
		if (s[si] != c && s[si])
			count++;
		if (s[si] == c && count > 0)
		{
			split[stri++] = ft_substr(s, si - count, count);
			count = 0;
		}
	}
	if (count != 0)
		split[stri++] = ft_substr(s, si - count, count);
	split[stri] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		size;

	size = ft_sizetab(s, c);
	split = malloc(sizeof(char *) * size);
	if (!split)
		return (NULL);
	ft_split_loop(s, c, split);
	return (split);
}
