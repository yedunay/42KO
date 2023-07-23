#include <unistd.h>
#include <stdio.h>
int ft_atoi(char *str)
{
	int i;
	int current;
	int sign;

	i = 0;
	current = 0;
	sign = 1;
	if(str[0] == '\0')
	{
		return 0;
	}
	if(str[0] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] != '\0')
	{
		if(str[i] >= '0' && str[i] <= '9')
		{
			current *= 10;
			current += str[i] - '0';
		}
		else
			break;
		i++;
	}
	return (current * sign);
}
int	main (void)
{
	char str[] = "--3YED456";
	printf("%d",ft_atoi(str));
}
