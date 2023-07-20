#include <stdio.h>
int	ft_fibonacci(int index)
{
	int n_fib;

    n_fib = 0;
    if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1 || index == 2)
		return (1);
	n_fib = (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
    return n_fib;
}