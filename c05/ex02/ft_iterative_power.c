int ft_iterative_power(int nb, int power)
{
    int i;
    int result;

    i = 1;
    result = 1;
    if(power == 0)
        return 1;
    if(power < 0)
        return 0;
    while(i++ <= power)
        result *= nb;
    return result;
}