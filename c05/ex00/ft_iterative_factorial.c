int ft_iterative_factorial(int nb)
{
    int result;

    result = 1;
    while(nb > 0)
        result *= nb--;
    if(nb < 0)
        return 0;
    return result;
}