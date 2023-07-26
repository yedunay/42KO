/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydunay <ydunay@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 10:39:23 by ydunay            #+#    #+#             */
/*   Updated: 2023/07/25 10:39:25 by ydunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	int		n_fib;

	n_fib = 0;
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1 || index == 2)
		return (1);
	n_fib = (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	return (n_fib);
}
