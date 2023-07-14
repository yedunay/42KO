void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < size / 2)
	{
		if (tab[i] > tab[i + 1])
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i++] = tmp;
		}
		else
			i++;
	}
}
/*#include <stdio.h>

int	main(void)
{
	int	tab[6];
	int	size;

	tab[6] = {0, 1, 4, 4, 9, 353};
	size = 6;
	printf("%d, %d, %d, %d, %d, %d \n", tab[0], tab[1], tab[2], tab[3], tab[4],
		tab[5]);
	ft_sort_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d, %d \n", tab[0], tab[1], tab[2], tab[3], tab[4],
		tab[5]);
	return (0);
}*/
