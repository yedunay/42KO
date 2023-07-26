#include <stdlib.h>
int *ft_range(int min, int max)
{
    int i;
    int cnt;
    int temp;
    int *array;

    temp = max;
    cnt = 0;
    if(min >= max)
        return NULL;
    while(min < temp--)
        cnt++;
    if(!(array = (int *)malloc((cnt) * sizeof(int))))
        return NULL;
    i = 0;
    while(min < max)
        array[i++] = min++;
    return array;
}
#include <stdio.h>
int		main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	i = 0;
	int	size;

	min = 5;
	max = 10;
	size = max - min;
	tab = ft_range(min, max);
	while(i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
}