#include <unistd.h>

void    ft_print_combn(int n);

void    aux_print_comb(char *digits, int index, int n);

int        set_initial_value(char *digits, int index);

void    print_values(char *digits, int n);

void    ft_print_combn(int n)
{
    char    digits[10];

    if (n > 0 && n < 10)
    {
        aux_print_comb(digits, 0, n);
    }
}

void    aux_print_comb(char *digits, int index, int n)
{
    int    value;
    int    max_value;

    max_value = 10;
    if (index < n)
    {
        value = set_initial_value(digits, index);
        while (value < max_value)
        {
            digits[index] = '0' + value;
            aux_print_comb(digits, index + 1, n);
            value++;
        }
    }
    else
        print_values(digits, n);
}

int    set_initial_value(char *digits, int index)
{
    int    value;

    if (index == 0)
        value = 0;
    else
        value = digits[index - 1] - '0' + 1;
    return (value);
}

void    print_values(char *digits, int n)
{
    if (
        !(digits[0] == '0' && (n == 1 || digits[n - 1] == '0' + n - 1))
    )
        write(1, ", ", 2);
    write(1, digits, n);
}