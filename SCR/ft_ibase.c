/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ibase.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 14:28:01 by lisanche          #+#    #+#             */
/*   Updated: 2020/01/31 14:28:05 by lisanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*treat_base(unsigned long long full_save, int base,
char *rtn, int count)
{
	while (full_save != 0)
	{
		if ((full_save % base) < 10)
			rtn[count - 1] = (full_save % base) + 48;
		else
			rtn[count - 1] = (full_save % base) + 55;
		full_save /= base;
		count--;
	}
	return (rtn);
}

char		*ft_ibase(unsigned long long full, int base)
{
	char				*rtn;
	unsigned long long	full_save;
	int					count;

	rtn = 0;
	count = 0;
	full_save = full;
	if (full == 0)
		return (ft_strdup("0"));
	while (full != 0)
	{
		full /= base;
		count++;
	}
	if (!(rtn = malloc(sizeof(char) * (count + 1))))
		return (0);
	rtn[count] = '\0';
	rtn = convert_base(full_save, base, rtn, count);
	return (rtn);
}
