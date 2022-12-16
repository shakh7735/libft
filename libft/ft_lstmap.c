/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eshakhge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 21:47:37 by eshakhge          #+#    #+#             */
/*   Updated: 2022/04/10 21:48:08 by eshakhge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node;
	t_list	*temp;
	t_list	*f_page;

	node = NULL;
	temp = NULL;
	f_page = NULL;
	while (lst)
	{
		node = malloc(sizeof(t_list));
		if (!node)
		{
			ft_lstclear(&node, del);
			return (NULL);
		}
		if (!f_page)
			f_page = node;
		if (temp)
			temp->next = node;
		node->content = f(lst->content);
		node->next = NULL;
		temp = node;
		lst = lst->next;
	}
	return (f_page);
}
