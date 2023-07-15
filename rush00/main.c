#include <unistd.h>
void	rush(int axis_x,int axis_y);

int main()
{
    rush(5,5);
	write(1,"\n",1);
	rush(4,6);
	write(1,"\n",1);
	rush(6,4);
	write(1,"\n",1);
	rush(1,1);
	write(1,"\n",1);
	rush(5,1);
	write(1,"\n",1);
	rush(1,5);
}
