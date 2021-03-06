/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lisanche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 14:23:55 by lisanche          #+#    #+#             */
/*   Updated: 2019/11/12 14:24:23 by lisanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
		ft_putchar_fd('-', fd);
	else
		n = -n;
	if (n <= -10)
	{
		ft_putnbr_fd((n / 10) * -1, fd);
	}
	ft_putchar_fd(((n % 10) * -1) + '0', fd);
}
