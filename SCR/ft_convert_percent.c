/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_percent.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 17:48:57 by lisanche          #+#    #+#             */
/*   Updated: 2020/01/30 17:49:10 by lisanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     ft_convert_percent(t_flags flags)
{
    int     cont_char;

    cont_char = 0;
    if (flags.minus == 1)
        cont_char += ft_putstrprec("%", 1);
    cont_char += ft_convert_width(flags.width, 1, flags.zero);
    if (flags.minus == 0)
        cont_char += ft_putstrprec("%", 1);
    return (cont_char);
}