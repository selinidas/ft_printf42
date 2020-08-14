/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 16:24:50 by lisanche          #+#    #+#             */
/*   Updated: 2019/11/19 20:31:53 by lisanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dest, const char *restrict src, size_t size)
{
	size_t	i;
	size_t	n;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (dest[i] != '\0' && i < size)
		i++;
	n = i;
	while (src[i - n] != '\0' && i < size - 1)
	{
		dest[i] = src[i - n];
		i++;
	}
	if (n < size)
		dest[i] = '\0';
	return (n + ft_strlen(src));
}
