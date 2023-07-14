void    ft_ultimate_div_mod(int *a, int *b)
{
    int    temp1;
    int    temp2;

    temp1 = *a;
    temp2 = *b;
    *a /= temp2;
    *b = temp1 % temp2;
}
/*#include <stdio.h>

int    main(void)
{
    int    a;
    int    b;

    a = 25;
    b = 2;
    ft_ultimate_div_mod(&a, &b);
    printf("Div = %d -> Mod = %d", a, b);
}*/
