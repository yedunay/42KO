/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muulutas <42kocaeli.com.tr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 13:55:01 by muulutas          #+#    #+#             */
/*   Updated: 2023/07/16 13:55:02 by muulutas         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_row(int axis_x, char first, char mid, char end)
{
	int	cntx;

	cntx = 1;
	while (cntx <= axis_x)
	{
		if (cntx == 1)
			ft_putchar(first);
		else if (cntx == axis_x)
			ft_putchar(end);
		else
			ft_putchar(mid);
		cntx++;
	}
	ft_putchar('\n');
}

void	rush(int axis_x, int axis_y)
{
	int	cnty;

	cnty = 1;
	while (cnty <= axis_y)
	{
		if (cnty == 1)
			ft_print_row(axis_x, '/', '*', '\\');
		else if (cnty == axis_y)
			ft_print_row(axis_x, '\\', '*', '/');
		else
			ft_print_row(axis_x, '*', ' ', '*');
		cnty++;
	}
}
