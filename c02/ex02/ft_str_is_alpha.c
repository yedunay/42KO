int    ft_str_is_alpha(char *str)
{
    int    i;

    i = 0;
    if (str[i] == '\0')
    {
        return (1);
    }
    while (str[i] != '\0')
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A'
                && str[i] <= 'Z'))
            i++;
        else
            return (0);
    }
    return (1);
}
/*#include <stdio.h>
int    main(void)
{
    printf("%d", ft_str_is_alpha("abcdefghijkl"));
    printf("\n%d", ft_str_is_alpha("abc1defghijkl"));
    printf("\n%d", ft_str_is_alpha("-_134556efghij67"));
}
*/
