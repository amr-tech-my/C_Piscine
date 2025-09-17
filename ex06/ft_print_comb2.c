#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_val(char a, char b, char c, char d)
{
    ft_putchar(a);
    ft_putchar(b);
    write(1, " ", 1);
    ft_putchar(c);
    ft_putchar(d);
    if (!((a == '9' && b == '8')
    && (c == '9' && d == '9')))
        write(1, ", ", 2);
}
void    ft_print_comb2(void)
{
    char    d;
    char    d1;
    char    d2;
    char    d3;

    d = '0';
    while (d <= '9')
    {
        d1 = '0';
        while (d1 <= '8')
        {
            d2 = '0';
            while (d2 <= '9')
            {
                d3 = '1';
                while (d3 <= '9')
                {
                    ft_print_val(d, d1, d2, d3);
                    d3++;
                }
                d2++;
            }
            d1++;
        }
        d++;
    }
}

int main(void)
{
    ft_print_comb2();
    return (0);
}