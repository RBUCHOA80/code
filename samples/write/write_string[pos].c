#include <unistd.h>

void    ft_putstr_non_printable(char *str);

int    main(void)
{
    char    *str = "So long,\n and thanks\a for\tall \rthe fish!\v";

    ft_putstr_non_printable(str);
    return (0);
}

void    ft_putstr_non_printable(char *str)
{
    int        i;
    char     hex[] = "0123456789abcdef";
    char    final[3];

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 32 && str[i] <= 126)
            write(1, &str[i], 1);
        else
        {
            final[0] = '\\';
            final[1] = hex[str[i] / 16];
            final[2] = hex[str[i] % 16];
            write (1, final, 3);
        }
        i++;
    }
}
