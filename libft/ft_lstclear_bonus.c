/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 19:24:19 by lisanche          #+#    #+#             */
/*   Updated: 2019/11/19 20:43:32 by lisanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *alst;
	t_list *px;

	if (!lst || !del)
		return ;
	alst = *lst;
	while (alst)
	{
		px = alst->next;
		del(alst->content);
		free(alst);
		alst = px;
	}
	*lst = NULL;
}
