#include <stdlib.h>

int     ft_strlen(char *str)
{
    int     i;

    i = 0;
    while(str[i])
        i++;
    return i;
}

char    *ft_strdup(char *src)//string duplicate
{
    int i;
    char *new;
//Alttaki ifadede bellekte yer ayırılmaya çalışılır bu işlem sırasında yeterli alan bulunamazsa ve istenilen miktarda yer ayırmak mümkün değilse malloc NULL döndürecektir.
    if(!(new = (char *)malloc((ft_strlen(src) + 1) * sizeof(char))))
        return NULL; //Genellikle pointerlarda kullanılır ve bir bellek adresini ifade etmediğini gösterir / işaretçinin değerinin NULL olduğunu gösterir.
    i = 0;
    while(src[i])
    {
        new[i] = src[i];
        i++;
    }
    new[i] = '\0';
    return new;
}
#include <stdio.h>
int	main(void)
{
	char *test;
	char *dup;

	test = "Testando a função strdup!";
	printf("test = %s\n", test);
	dup = ft_strdup(test);
	printf("dup  = %s\n", dup);
	free(dup);
}