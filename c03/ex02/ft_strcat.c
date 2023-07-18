char	*ft_strcat(char *dest, char *src)
{
	int len_dest;
	int len_src;

	len_dest = 0;
	len_src = 0;
	while (dest[len_dest])
		len_dest++;
	while (src[len_src])
	{
		dest[len_dest] = src[len_src];
		len_dest++;
		len_src++;
	}
	dest[len_dest] = '\0';
	return (dest);
}