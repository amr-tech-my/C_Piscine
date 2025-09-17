#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_comb(void)
{
    char    d;
    char    d1;
    char    d2;

    d = '0';
    while (d <= '7')
    {
        d1 = d + 1;
        while (d1 <= '8')
        {
            d2 = d1 + 1;
            while (d2 <= '9')
            {
                ft_putchar(d);
                ft_putchar(d1);
                ft_putchar(d2);
                if (!(d == '7' && d1 == '8' && d2 == '9'))
                    write(1, ", ", 2);
                d2++;
            }
            d1++;
        }
        d++;
    }
}

int main(void)
{
    ft_print_comb();
    return (0);
}