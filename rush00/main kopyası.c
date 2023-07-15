#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void    print_row(int axis_x, char first, char mid, char end)
{
    int cnt;

    cnt = 1;
    while(cnt <= axis_x)
    {
        if(cnt == 1)
            ft_putchar(first);
        else if(cnt == axis_x)
            ft_putchar(end);
        else
            ft_putchar(mid);
        cnt++;
    }
    ft_putchar('\n');
}

void	rush(int axis_x,int axis_y)
{
    int cnt;

    cnt = 1;
    while(cnt <= axis_y)
    {
        if(cnt == 1 || cnt == axis_x)
            print_row(axis_x,'A','B','C');
        else
            print_row(axis_x,'B',' ','B');
        cnt++;
    }
}
int main()
{
    rush(5,5);
}