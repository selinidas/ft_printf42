/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 17:41:29 by lisanche          #+#    #+#             */
/*   Updated: 2020/01/30 17:41:57 by lisanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../Libft/libft.h"
# include <stdarg.h>

/******
    STRUCT
*******/

typedef	struct		s_flags
{
	int				to_print;
	int				type;
	int				width;
	int				minus;
	int				zero;
	int				dot;
	int				star;
}					t_flags;

/*******
    INT
*******/

int				ft_converter(int c, t_flags flags, va_list args);
int             ft_convert_width(int c, t_flags flags, va_list args);
int             ft_convert_percent(t_flags flags);
int             ft_putstr_prec(char *str, int prec);
int             ft_type_list(int c);
int             ft_type_flags(int c);
int             ft_flag_dot(const char *save, int start, 
            	t_flags *flags, va_list args);
int             ft_putchar(int c);
int				ft_convert_unnint(unsigned int unint, t_flags flags);
int         	ft_convert_string(char *str, t_flags flags);
int             ft_convert_pointer(unsigned long long ull, t_flags flags);
int         	ft_convert_int(int i, t_flags flags);
int         	ft_convert_char(char c, t_flags flags);

/********
    CHAR
 *******/


char			*ft_ibase(unsigned long long full, int base);
char			*ft_myitoa(unsigned int n);
char    		*ft_strtolower(char *str);

/********
     T_FLAGS
********/

t_flags			ft_flag_minus(t_flags flags);
t_flags			ft_flag_width(va_list args, t_flags flags);
t_flags			ft_flag_digit(char c, t_flags flags);

#endif
