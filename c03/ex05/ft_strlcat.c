int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	len_dest;
	int	len_src;
	int	i;

	i = 0;
	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	if (size == 0 || size <= len_dest)
		return (len_src + size);
	while (src[len_src] && i < size - 1 - len_dest)
	{
		dest[len_dest] = src[len_src];
		len_dest++;
		len_src++;
	}
	dest[len_dest] = '\0';
	return (len_dest + len_src);
}
// #include <stdio.h>
// int main (void)
// {
// 	char src[] = "Born to code";
//     char dest [] = "1337 42";
//     printf("%i \n", ft_strlcat(dest, src, 20));
//     printf("%s \n", src);
// }
