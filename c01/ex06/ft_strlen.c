#include <unistd.h>
int    ft_strlen(char *str)
{
    int    i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}
/*#include <stdio.h>

int    main(void)
{
    char    str[];

    str[] = "YUNUS EMRE DUNAY";
    printf("%d", ft_strlen(str));
}
*/
