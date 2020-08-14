/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tmap_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 19:39:24 by lisanche          #+#    #+#             */
/*   Updated: 2019/11/19 19:50:02 by lisanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *alst;

	if (!lst || !del)
		return (NULL);
	if (!f)
		return (lst);
	if (!(alst = ft_lstnew(f(lst->content))))
		return (NULL);
	if (lst->next)
	{
		if (!(alst->next = ft_lstmap(lst->next, f, del)))
		{
			ft_lstdelone(lst, del);
			return (NULL);
		}
	}
	else
		alst->next = NULL;
	return (alst);
}
