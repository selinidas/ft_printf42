/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_unint.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 17:54:01 by lisanche          #+#    #+#             */
/*   Updated: 2020/01/30 17:54:23 by lisanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int     ft_in_part_unint(char *unint, t_flags flags)
{
    int cont_char;

    cont_char = 0;
    if (flags.dot >= 0)
        cont_char += ft_convert_width(flags.dot - 1, ft_strlen(unint) - 1, 1);
    cont_char += ft_putstr_prec(unint, ft_strlen(unint));
    return (cont_char);
}

static int       ft_part_unint(char *unint, ft_flags flags)
{
    int cont_char;

    cont_char = 0;
    if (flags.minus == 1)
        cont_char += ft_in_part_unint(unint, flags);
    if (flags.dot >= 0 && (size_t)flags.dot < ft_strlen(unint))
        flags.dot = ft_strlen(unint);
    if (flags.dot >= 0)
    {
        flags.width -= flags.dot;
        cont_char += ft_convert_width(flags.width, 0, 0);
    }
    else 
       cont_char += ft_convert_width(flags.width,
       ft_strlen(unint), flags.zero);
    if (flags.minus == 0)
        cont_char += ft_in_part_unint(unint, flags);
    return (cont_char);
}

int         ft_convert_unnint(unsigned int unint, t_flags flags)
{
    char  *un_int;
    int   cont_char;

    cont_char = 0;
    unint = (unsigned int)(4294967295 + 1
                     + unint);
    if (flags.dot == 0 && unint == 0)
    {
        cont_char += ft_convert_width(flags.width, 0, 0);
        return (cont_char);
    }
    un_int = ft_my_itoa(unint);
    cont_char += ft_part_unint(un_int, flags);
    free(un_int);
    return (cont_char);
}