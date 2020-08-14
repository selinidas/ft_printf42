/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_string.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 17:53:15 by lisanche          #+#    #+#             */
/*   Updated: 2020/01/30 17:53:24 by lisanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int      ft_part_int(char *str, t_flags flags)
{
    int cont_char;

    cont_char = 0;
    if (flags.dot >= 0)
    {
        cont_char += ft_convert_width(flags.dot, ft_strlen(str), 0);
        cont_char += ft_putstr_prec(str, flags.dot);
    }
    else
    {
        cont_char += ft_putstr_prec(str, ft_strlen(str));
    }
    return (cont_char);
}

int         ft_convert_string(char *str, t_flags flags)
{
    int cont_char;

    cont_char = 0
    if(!str)
    str = "(NULL)";
    if (flags.dot >= 0 && (size_t)flags.dot > ft_strlen(str))
        flags.dot = ft_strlen(str);
    if (flags.minus == 1)
        cont_char += ft_part_int(str, flags);
    if (flags.dot >= 0)
        cont_char += ft_convert_width(flags.width, flags.dot, 0);
    else
        cont_char += ft_convert_width(flags.width, ft_strlen(str), 0);
    if (flags.minus == 0)
       cont_char += ft_part_int(str, flags);
    return (cont_char);    
}