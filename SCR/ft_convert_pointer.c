/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_pointer.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 17:49:21 by lisanche          #+#    #+#             */
/*   Updated: 2020/01/30 17:50:00 by lisanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int      ft_in_part_pointer(char *pointer, t_flags flags)
{
    int cont_char;

    cont_char = 0;
    cont_char += ft_putstr_prec("0x", 2);
    if (flags.dot >= 0)
    {
        cont_char += ft_convert_width(flags.dot, ft_strlen(pointer), 1);
        cont_char += ft_putstr_prec(pointer, flags.dot);
    }
    else 
      cont_char += ft_putstr_prec(pointer, ft_strlen(pointer));
    return (cont_char);
}

int             ft_convert_pointer(unsigned long long ull, t_flags flags)
{
    char  *pointer;
    int    cont_char;

    cont_char = 0;
    if (ull == 0 && flags.dot == 0)
    {
        cont_char += ft_putstr_prec("0x", 2);
        return (cont_char += ft_convert_width(flags.width, 0, 1));
    }
    pointer = ft_ull_base(ull, 16);
    pointer = ft_strtolower(pointer);
    if ((size_t)flags.dot < ft_strlen(pointer))
        flags.dot = ft_strlen(pointer);
    if (flags.minus == 1)
       cont_char += ft_in_part_pointer(pointer, flags);
    cont_char += ft_convert_width(flags.width, ft_strlen(pointer) + 2, 0);
    free(pointer);
    return (cont_char);
}