#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_numbers(void)
{
    char    d;

    d = '0';
    while (d <= '9')
    {
        ft_putchar(d);
        d++;
    }
}

int main(void)
{
    ft_print_numbers();
    return (0);
}