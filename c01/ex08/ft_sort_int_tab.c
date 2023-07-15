/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydunay <ydunay@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 15:43:02 by ydunay            #+#    #+#             */
/*   Updated: 2023/07/15 15:43:04 by ydunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	while (size >= 0)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i + 1] < tab[i])
			{
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
			}
			i++;
		}
		size--;
	}
}
/*#include <stdio.h>

int	main(void)
{
	int	tab[6] = {0, 1, 4, 4, 9, 353};
	int	tab1[6] = {79, 78, 74, 58, 49, 33};
	int	size;

	size = 6;
	printf("%d, %d, %d, %d, %d, %d \n", tab[0], tab[1], tab[2], tab[3], tab[4],
		tab[5]);
	ft_sort_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d, %d \n", tab[0], tab[1], tab[2], tab[3], tab[4],
		tab[5]);
	size = 6;
	printf("%d, %d, %d, %d, %d, %d \n", tab1[0], tab1[1], tab1[2], tab1[3], tab1[4],
		tab1[5]);
	ft_sort_int_tab(tab1, size);
	printf("%d, %d, %d, %d, %d, %d \n", tab1[0], tab1[1], tab1[2], tab1[3], tab1[4],
		tab1[5]);
	return (0);
}*/
