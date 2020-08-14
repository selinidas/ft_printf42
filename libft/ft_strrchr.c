/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 16:03:57 by lisanche          #+#    #+#             */
/*   Updated: 2019/11/13 16:34:32 by lisanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*x;
	int		i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	if (*s == c)
		return ((char *)s);
	x = 0;
	while (i != 0)
	{
		i--;
		s--;
		if (*s == (char)c)
		{
			x = (char*)s;
			return (x);
		}
	}
	return (NULL);
}
