char    *ft_strcpy(char *dest, char *src)
{
    int    i;

    i = 0;
    while (src[i] != '\0')
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
    printf("%s ",ft_strcpy(dest, source));
    printf("%s\n",ft_strcpy(dest1, source1));
}*/
