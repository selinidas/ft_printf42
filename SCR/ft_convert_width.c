/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_width.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 17:54:41 by lisanche          #+#    #+#             */
/*   Updated: 2020/01/30 17:54:51 by lisanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int         ft_convert_width(int width, int minus, int has_zero)
{
    int cont_char;

    cont_char = 0;
    while(width - minus > 0)
    {
        if (has_zero)
                ft_putchar('0');
        else 
                ft_putchar(' ');
        width = width - 1;
        cont_char++;           
    }
    return (cont_char);
}