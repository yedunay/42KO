char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    int    i;

    i = 0;
    while (i < n && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
/*#include <stdio.h>
#include <string.h>

int    main(void)
{
    char source[] = "Born to";
    char source1[] = "CODE";
    char dest[] = "Ecole";
    char dest1[] = "42";
    printf("%s ",dest);
    printf("%s \n",dest1);
    printf("%s ",ft_strncpy(dest, source,4));
    printf("%s\n",ft_strncpy(dest1, source1,3));
}*/
