void    ft_swap(int *a, int *b)
{
    int    temp;

    temp = *a;
    *a = *b;
    *b = temp;
}
/*#include <stdio.h>
int    main(void)
{
    int    x;
    int    y;
    x = 2;
    y = 3;
    printf("%d ", x);
    printf("%d", y);
    printf("\n");
    ft_swap(&x, &y);
    printf("%d ", x);
    printf("%d", y);
}*/
