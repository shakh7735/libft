/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eshakhge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 22:02:55 by eshakhge          #+#    #+#             */
/*   Updated: 2022/03/15 18:14:24 by eshakhge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, int n)
{
	unsigned char	*a;

	a = (unsigned char *)str;
	while (n--)
		a[n] = (unsigned char)c;
	return (str);
}
