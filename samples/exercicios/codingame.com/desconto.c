#include <unistd.h>

int	main(void)
{
	int	shop;
	int	off;
	int	sum;

	shop = 2000;
	write(1, "Total em compras = R$ ", 22);
	write(1, &shop, sizeof(shop));
	write(1, "\n", 1);
	write(1, "Seu desconto é de ", 19);
	if (2000 <= shop)
		{
			off = 0;
			sum = shop - (shop * off);
			write(1, "10%.", 4);
			write(1, "\n", 1);
			write(1, "Total a pagar = R$ ", 19);
			write(1, "\n", 1);
		}
	return (0);
}
