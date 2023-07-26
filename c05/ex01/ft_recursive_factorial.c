/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydunay <ydunay@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 10:38:56 by ydunay            #+#    #+#             */
/*   Updated: 2023/07/25 10:38:57 by ydunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int		result;

	result = 1;
	if (nb > 0)
	{
		result *= nb * ft_recursive_factorial(nb - 1);
		nb--;
	}
	if (nb < 0)
		return (0);
	return (result);
}
