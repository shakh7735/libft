/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eshakhge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 17:34:18 by eshakhge          #+#    #+#             */
/*   Updated: 2022/03/15 17:39:23 by eshakhge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	min;
	int	i;
	int	rez;

	rez = 0;
	i = 0;
	min = 1;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
		i++;
	if (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			min = -min;
	while (str[i] >= '0' && str[i] <= '9')
		rez = rez * 10 + (str[i++] - 48);
	return (rez * min);
}
