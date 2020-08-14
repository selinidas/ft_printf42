/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 17:31:43 by lisanche          #+#    #+#             */
/*   Updated: 2019/11/19 18:51:58 by lisanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*lst;

	if (*alst != NULL)
	{
		lst = *alst;
		if (lst != NULL)
			while (lst->next)
				lst = lst->next;
		lst->next = new;
	}
	else
		*alst = new;
}
