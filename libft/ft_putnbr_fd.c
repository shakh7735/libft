/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eshakhge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 18:17:17 by eshakhge          #+#    #+#             */
/*   Updated: 2022/03/15 18:17:43 by eshakhge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	long int	rez;

	rez = nb;
	if (rez < 0)
	{
		ft_putchar_fd('-', fd);
		rez = -rez;
	}
	if (rez < 10)
		ft_putchar_fd(rez + 48, fd);
	else
	{
		ft_putnbr_fd(rez / 10, fd);
		ft_putnbr_fd(rez % 10, fd);
	}
}
