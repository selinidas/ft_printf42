/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_char.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 17:46:50 by lisanche          #+#    #+#             */
/*   Updated: 2020/01/30 17:47:04 by lisanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int         ft_convert_char(char c, t_flags flags)
{
    int cont_char;

    cont_char = 0;
    if (flags.minus == 1)
        ft_putchar(c);
    cont_char = ft_convert_width(flags.width, 1, 0);
    if (flags.minus == 0)
        ft_putchar(c);
    return(cont_char + 1); 
}