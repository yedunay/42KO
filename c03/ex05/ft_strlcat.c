unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len_dest;
	unsigned int	len_src;

	i = 0;
	len_dest = 0;
	len_src = 0;
	while (dest[len_dest])
		len_dest++;
	while (src[len_src])
		len_src++;
	if (size <= len_dest)
		len_src += size;
	else
		len_src += len_dest;
	while (src[i]&& len_dest + 1 < size)
		dest[len_dest++] = src[i++];
	dest[len_dest] = '\0';
	return (len_src);
}
#include <stdio.h>
int main (void)
{
	char src[] = "Born to code";
    char dest [] = "ydunay 42 yunusemredunay";
    printf("%i \n", ft_strlcat(dest, src, 24));
    printf("%s \n", dest);
}
