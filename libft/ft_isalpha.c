/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eshakhge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 16:57:43 by eshakhge          #+#    #+#             */
/*   Updated: 2022/03/15 17:50:15 by eshakhge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int ch)
{
	if (ch >= 65 && ch <= 90)
		return (1);
	if (ch >= 97 && ch <= 122)
		return (2);
	return (0);
}
