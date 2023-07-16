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
		if (cnty == 1 || cnty == axis_y)
			ft_print_row(axis_x, 'A', 'B', 'C');
		else
			ft_print_row(axis_x, 'B', ' ', 'B');
		cnty++;
	}
}
