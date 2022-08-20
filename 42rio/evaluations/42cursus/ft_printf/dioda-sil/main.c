#include <stdio.h> //printf
#include <fcntl.h> //open
#include "ft_printf.h"

int	main(void)
{
	char	*str;
	int		ret;
	int		nbr;

	str = 0;
	nbr = 0234;
	ret = printf("   printf -> %p %p %s %i ", &str, str, str, nbr);
	printf("\e[0;32m(%d byte(s))\e[0m\n", ret);
	ret = ft_printf("ft_printf -> %p %p %s %i ", &str, &str[0], str, nbr);
	ft_printf("\e[0;32m(%d byte(s))\e[0m\n", ret);
	return (0);
}
