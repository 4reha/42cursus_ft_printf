/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-hadd <ael-hadd@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 12:04:03 by ael-hadd          #+#    #+#             */
/*   Updated: 2021/12/13 15:34:33 by ael-hadd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (!s)
	{
		count += write (1, "(null)", 6);
		return (count);
	}
	while (s[i])
	{
		count += ft_putchar(s[i]);
		i++;
	}
	return (count);
}
