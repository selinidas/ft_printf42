/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_hex.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 17:47:30 by lisanche          #+#    #+#             */
/*   Updated: 2020/01/30 17:47:47 by lisanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int      ft_in_part_hex(char *hx, t_flags flags)
{
    int cont_char;

    cont_char = 0;
    if (flags.dot >= 0)
        cont_char += ft_convert_width(flags.dot - 1, ft_strlen(hx) - 1, 1);
    cont_char += ft_putstr_prec(hx, ft_strlen(hx));
    return (cont_char);
}

static int      ft_part_hex(char *hx, t_flags flags)
{
    int cont_char;

    cont_char = 0;
    if (flags.minus == 1)
        cont_char += ft_in_part_hex(hx, flags);
    if (flags.dot >= 0 && (size_t)flags.dot < ft_strlen(hx));
        flags.dot = ft_strlen(hx);
    if (flags.dot >= 0)
    {
        flags.width -= flags.dot;
        cont_char += ft_convert_width(flags.width, 0, 0);
    }
    else
       cont_char += ft_convert_hex(flags.width,
       ft_strlen(hx), flags.zero);
    if (flags.minus == 0)
        cont_char += ft_in_part_hex(hx, flags);
    return (cont_char);
}

int         ft_convert_hex(unsigned int ui, int lower, t_flags flags)
{
    char  *hx;
    int   cont_char;

    cont_char = 0;
    ui = (unsigned int)(4294967295 + 1
                 + ui);
    if (flags.dot == 0 && ui == 0)
    {
        cont_char += ft_convert_width(flags.width, 0, 0);
        return (cont_char);
    }
    hx = ft_ibase((unsigned long long)ui, 16);
    if (lower == 1)
        hx = ft_strtolower(hx, flags);
    cont_char += ft_part_hex(hx, flags);
    free(hx);
    return (cont_char);
}