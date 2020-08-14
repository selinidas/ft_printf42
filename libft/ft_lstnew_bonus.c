/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 16:55:22 by lisanche          #+#    #+#             */
/*   Updated: 2019/11/19 19:16:21 by lisanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content)
{
	t_list *lst;

	if (!(lst = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	lst->content = (void *)content;
	lst->next = NULL;
	return (lst);
}
