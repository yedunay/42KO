void    ft_div_mod(int a, int b, int *div, int *mod)
{
    if (b != 0)
        *div = a / b;
    *mod = a % b;
}
/*#include <stdio.h>
int    main(void)
{
    int a;
    int b;
    int x;
    int y;
    int *div;
    int *mod;

    a = 10;
    b = 5;
    ft_div_mod(a, b, div, mod);
    printf("%d\n", *div);
    printf("%d", *mod);
}*/
