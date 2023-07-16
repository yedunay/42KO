#include <unistd.h>
#include <stdio.h>
int	ft_atoi(const char *str)
{
	int	i;
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	i = 0;

	while(str[i] != '\0')
	{
		if(str[i] >= '0' && str[i] <= '9')
		{
			result *= 10;
			result += str[i] - '0';
		}
		if(str[i] == '-')
			sign = -1;
		i++;
	}

	return (result * sign);
}

int	main (void)
{
	char str[] = "   -++3YED456";
	ft_atoi(str);
	printf("%d",ft_atoi(str));

}
