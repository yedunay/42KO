int ft_len(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return i;
}

char    *ft_strrev(char *str)
{
	int	len;
	int	i;
	char	temp;

	len = ft_len(str) - 1;
	i = 0;
	while(len > i)
	{
		temp = str[i];
		str[i] = str[len];
		str[len] = temp;
		++i;
		len--;
	}
	return (str);
}
