#include <unistd.h>
char    ft_rev_str(char *str)
{
        int     i;
        i = 0;
        while(str[i])
                i++;
        while(i > 0)
        {
                write(1, &str[i-1], 1);
                i--;
        }
        str[i] = '\0';
        write(1, "\n", 1);
        return *str;
}
int     main(int ac, char **av)
{
        if (ac != 2)
        {
                write(1,"\n", 1);
        }
        else
        {
                ft_rev_str(av[1]);
        }
        return (0);
}
