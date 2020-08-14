/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_int.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 17:48:06 by lisanche          #+#    #+#             */
/*   Updated: 2020/01/30 17:48:37 by lisanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int      ft_in_part_int(char *di, int i, t_flags flags)
{
    int cont_char;

    cont_char = 0;
    if (i < 0 && flags.dot >= 0)
          ft_putchar('-');
    if (flags.dot >= 0)
        cont_char += ft_convert_width(flags.dot - 1, ft_strlen(di) - 1, 1);
    cont_char += ft_putstr_prec(di, ft_strlen(di));
    return (cont_char);
}

static int      ft_part_int(char *di, int i, t_flags flags)
{
    int cont_char;

    int cont_char = 0;
    if (flags.minus == 1)
       cont_char += ft_in_part_int(di, i, flags);
    if (flags.dot >= 0 && (size_t)flags.dot < ft_strlen(di))
        flags.dot = ft_strlen(di);
    if (flags.dot >= 0)
    {
        flags.width -= flags.dot;
        cont_char += ft_convert_width(flags.width, 0, 0);
    }
    else
        cont_char += ft_convert_width(flags.width, ft_strlen(di), flags.zero);
    if (flags.minus == 0)
        cont_char += ft_in_part_int(di, i, flags);
    return (cont_char);
}

int         ft_convert_int(int i, t_flags flags)
{
    char  *di;
    int    i;
    int    cont_char;

    i;
    cont_char = 0;
    if (flags.dot == 0 && i == 0)
    {
        cont_char += ft_convert_width(flags.width(ft_flag_width, 0, 0));
        return (cont_char);
    }
    if (i < 0 && (flags.dot >= 0 || flags.zero == 1))
    {
        if (flags.zero == 1 && flags.dot == -1)
        ft_putstr_prec ("-", 1);
        i *= -1;
        flags.zero = 1;
        flags.width--;
        cont_char++;
    }
    di = ft_itoa(i);
    cont_char += ft_part_int(di, i, flags);
    free(di);
    return (cont_char);
}