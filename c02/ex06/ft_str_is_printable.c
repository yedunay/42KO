int    ft_str_is_printable(char *str)
{
    int    i;

    i = 0;
    if (str[i] == '\0')
    {
        return (1);
    }
    while (str[i] != '\0')
    {
        if (str[i] >= 32 && str[i] <= 126)
            i++;
        else
            return (0);
    }
    return (1);
}
/*#include <stdio.h>
int    main(void)
{
    printf("%d", ft_str_is_printable("\12\24"));
    printf("\n%d", ft_str_is_printable("abc1def\11ghi717547jkl"));
    printf("\n%d", ft_str_is_printable("jasbdaskbdba"));
    printf("\n%d\n", ft_str_is_printable(""));
}*/
