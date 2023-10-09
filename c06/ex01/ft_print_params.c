#include <stdio.h>
int main()
{
    char *str= "alperalp";
    int i = 0;
    while (i++ < 1000)
    {
        printf("%c\n",*str);
        str++;
    }
}