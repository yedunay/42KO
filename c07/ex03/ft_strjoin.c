#include <stdlib.h>
int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i])
        i++;
    return i;
}

char *ft_strcpy(char *dest, char *src)
{
    while(*src)
        *src++ = *dest++;
    *dest = '\0';
    return dest;
}

int ft_calc_last_length(char **str, int size, int sep_length)
{
    int	last_length;
	int	i;

	last_length = 0;
	i = 0;
	while (i < size)
	{
		last_length += ft_str_length(str[i]);
		last_length += sep_length;
		i++;
	}
	last_length -= sep_length;
	return (last_length);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
    int		full_length;
	int		index;
	char	*string;
	char	*d;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	full_length = ft_calc_last_length(strs, size, ft_str_length(sep));
	d = (string = (char *)malloc((full_length + 1) * sizeof(char)));
	if (!d)
		return (0);
	index = 0;
	while (index < size)
	{
		ft_strcpy(d, strs[index]);
		d += ft_str_length(strs[index]);
		if (index < size - 1)
		{
			ft_strcpy(d, sep);
			d += ft_str_length(sep);
		}
		index++;
	}
	*d = '\0';
	return (string);
}

int	main(void)
{
	int		index;
	char	**strs;
	char	*separator;
	char	*result;
	int	size;

	size = 3;
	strs = (char **)malloc(3 * sizeof(char *));
	strs[0] = (char *)malloc(sizeof(char) * 5 + 1);
	strs[1] = (char *)malloc(sizeof(char) * 7 + 1);
	strs[2] = (char *)malloc(sizeof(char) * 14 + 1);
	strs[0] = "Hello";
	strs[1] = "friend,";
	strs[2] = "you are awesome";
	separator = " ";
	result = ft_strjoin(size, strs, separator);
	printf("%s$\n", result);
	free(result);
}