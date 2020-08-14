/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 16:26:31 by lisanche          #+#    #+#             */
/*   Updated: 2019/11/18 17:52:25 by lisanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_trim(char c, char const *set)
{
	size_t i;

	i = 0;
	while (set[i])
	{
		if (c == set[i] || c == '\0')
			return (1);
		i++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;

	if (!s1 || !set)
		return (NULL);
	while (ft_trim(s1[0], set) == 1)
	{
		if (*s1 == '\0')
			return (ft_strdup(""));
		s1++;
	}
	i = ft_strlen(s1) - 1;
	while (ft_trim(s1[i], set) == 1)
		i--;
	i++;
	if (!(str = (char *)ft_calloc(sizeof(char), i + 1)))
		return (NULL);
	ft_strlcpy(str, s1, i + 1);
	str[i] = '\0';
	return (str);
}
