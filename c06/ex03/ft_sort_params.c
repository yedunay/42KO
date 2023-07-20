#include <unistd.h>
void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}
int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
void	ft_swap(char **a, char **b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
int main(int argc, char **argv)
{
    int i;
    int j;
    char **temp;

    i = 1;
    while(i++ < argc - 1)
    {
        j = 1;
        while(j < argc - 1)
        {
            if(ft_strcmp(argv[j],argv[j + 1]) > 0)
                ft_swap(argv + j,argv + j + 1);
            j++;
        }    
    }
    j = 1;
    while(j < argc)
    {
        ft_putstr(argv[j]);
        ft_putchar('\n');
        j++;
    }
}
