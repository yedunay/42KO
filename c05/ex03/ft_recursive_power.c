/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydunay <ydunay@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 10:39:13 by ydunay            #+#    #+#             */
/*   Updated: 2023/07/25 10:39:16 by ydunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int		result;

	result = 1;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power > 0)
		result *= nb * ft_recursive_power(nb, power - 1);
	return (result);
}
