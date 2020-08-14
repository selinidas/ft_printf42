/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_prec.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 15:18:46 by lisanche          #+#    #+#             */
/*   Updated: 2020/01/31 15:19:03 by lisanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_putstr_prec(char *str, int prec)
{
	int cont_char;

	cont_char = 0;
	while (str[cont_char] && cont_char < prec)
		ft_putchar(str[cont_char++]);
	return (cont_char);
}

