/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_converter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 17:43:04 by lisanche          #+#    #+#             */
/*   Updated: 2020/01/30 17:43:17 by lisanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "ft_printf.h"

int     ft_type_list(int c)
{
    return ((c == 'c') || (c == 's') || (c == 'p') || (c == 'd') || (c == 'i')
     || (c == 'u') || (c == 'x') || (c == 'X') || (c == '%'));
}

int     ft_flags_list(int c)
{
    return ((c == '-') || (c == ' ') || (c == '0') || (c == '.') || (c == '*'));
}

int     ft_converter(int c, t_flags flags, va_list args)
{
    int cont_char;

    cont_char = 0;
    if (c == 'c')
        cont_char = ft_convert_char(va_arg(args, int), flags);
    else if (c == '%')
        cont_char = ft_convert_percent(va_arg(flags);
    else if (c == 's')
         cont_char = ft_convert_string(va_arg(args, char *), flags);
    else if (c == 'd' || c == 'i')
        cont_char = ft_convert_int(va_arg(args, int) flags);
    else if (c == 'p')
        cont_char = ft_convert_pointer(va_args(args, unsigned long long), flags);
    else if ( c == 'u')
        cont_char = ft_convert_unint((unsigned int) va_arg(args, unsigned int),
        flags);
    else if (c == 'x')
         cont_char = ft_convert_hex(va_arg(args, unsigned int), 1, flags);
    else if (c == 'X')
         cont_char = ft_convert_hex(va_arg(args, unsigned int), 0, flags);
    return (cont_char);         
}