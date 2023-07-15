int    ft_str_is_numeric(char *str)
{
    int    i;

    i = 0;
    if (str[i] == '\0')
    {
        return (1);
    }
    while (str[i] != '\0')
    {
        if (str[i] >= '0' && str[i] <= '9')
            i++;
        else
            return (0);
    }
    return (1);
}
/*#include <stdio.h>
int    main(void)
{
    printf("%d", ft_str_is_numeric("1551881"));
    printf("\n%d", ft_str_is_numeric("abc1defghi717547jkl"));
    printf("\n%d", ft_str_is_numeric("-_134556efghij67"));
    printf("\n%d\n", ft_str_is_numeric(""));
}*/
