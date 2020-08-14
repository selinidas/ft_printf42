/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 15:03:02 by lisanche          #+#    #+#             */
/*   Updated: 2019/11/13 17:02:20 by lisanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t n)
{
	size_t		i;
	void		*src2;

	src2 = NULL;
	i = 0;
	while (i < n)
	{
		if (((unsigned char *)src)[0] == (unsigned char)c)
		{
			src2 = (void *)src;
			return (src2);
		}
		src++;
		i++;
	}
	return (NULL);
}
