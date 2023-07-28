#include <unistd.h>
int main(int argc, char **argv)
{
    int len = 0;
    int i = 0;
    char temp;
    if(argc != 2)
    {
        write(1, "\n", 1);
        return 0;
    }
    while(argv[1][len])
        len++;
    while(i < len)
    {
        write(1, &argv[1][len - 1], 1);
        len--;
    }
    write(1, "\n", 1);
}