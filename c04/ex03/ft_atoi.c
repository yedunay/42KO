#include <unistd.h>
#include <stdio.h>
int ft_atoi(char *str)
{
	int	i;
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	i = 0;

	while(str[i] != '\0')
	{
        if(str[i] == '-')
			sign = -sign;    
        if(str[i] >= '0' && str[i] <= '9')
        {
            result *= 10;
            result += str[i] - '0';
            if(str[i + 1] < '0' || str[i + 1] > '9')
                return (result * sign);
        }
        i++;
	}

	return (result * sign);
}