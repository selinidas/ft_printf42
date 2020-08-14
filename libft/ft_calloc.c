/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 17:01:43 by lisanche          #+#    #+#             */
/*   Updated: 2019/11/11 17:05:46 by lisanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t len)
{
	void	*mem;

	if (!(mem = malloc(len * count)))
		return (NULL);
	ft_bzero(mem, len * count);
	return (mem);
}
