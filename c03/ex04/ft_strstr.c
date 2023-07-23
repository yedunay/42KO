char	*ft_strstr(char *str, char *to_find)
{
	int	len_str;
	int	j;

	len_str = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[len_str])
	{
		while (str[len_str + j] == to_find[j] && str[len_str + j])
			j++;
		if (to_find[j] == '\0')
			return (str + len_str);
		len_str++;
		j = 0;
	}
	return (0);
}
#include <stdio.h>

int	main(void)
{
	char str[] = "42 piscine YED";
	char find[] = "piscine";
	printf("%s", ft_strstr(str, find));
	printf("%s", (str + 3));
}