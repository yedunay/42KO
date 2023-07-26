#include <stdlib.h>
int ft_ultimate_range(int **range, int min, int max)
{
	int		cnt;
	int		index;
	int		*buffer;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	cnt = max - min;
	if (!(buffer = malloc(cnt * sizeof(int))))
	{
		*range = 0;
		return (-1);
	}
	*range = buffer;
	index = 0;
	while (index < cnt)
	{
		buffer[index] = min + index;
		index++;
	}
	return (cnt);
}
#include <stdio.h>
int		main(void)
{
	int	min;
	int	max;
	int	*tab;
    int **tab1 = &tab;
	int	size;
	int	i = 0;

	min = 5;
	max = 10;
	size = ft_ultimate_range(tab1, min, max);
	while(i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}

}