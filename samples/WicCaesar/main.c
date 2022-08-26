/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 16:08:08 by cnascime          #+#    #+#             */
/*   Updated: 2022/08/26 19:55:29 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libftprintf.h"
#include "libftprintf_bonus.h"

int	main(void)
{
	char			str[] = "fixação";
	char			str2[] = "";
	int				integer;
	size_t			uinteger;
	unsigned int	hexa;
	unsigned int	hexa2;

	integer = 481516;
	uinteger = 481516;
	hexa = 2342108;
	hexa2 = 0;
	ft_printf("%d\n", integer);
	printf("%d\n", integer);
	ft_printf("Olá!\n");
	printf("Olá!\n");
	ft_printf("%d\n", 0);
	printf("%d\n", 0);
	ft_printf("Olá de novo!\n");
	printf("Olá de novo!\n");
	ft_printf("%+0d\n", 42);
	printf("%+0d\n", 42);
	ft_printf("%+0i\n", 42);
	printf("%+0i\n", 42);
	ft_printf("%+0o\n", 42);
	printf("%+0o\n", 42);
	ft_printf("%#0o\n", 42);
	printf("%#0o\n", 42);
	ft_printf("%+s\n", str);
	printf("%+s\n", str);
	ft_printf("%+c\n", 'y');
	printf("%+c\n", 'y');
	ft_printf("%+c\n", 'y');
	printf("%+c\n", 'y');
	ft_printf("%x\n", hexa);
	printf("%x\n", hexa);
	ft_printf("%X\n", hexa);
	printf("%X\n", hexa);
	ft_printf("%#x\n", hexa2);
	printf("%#x\n", hexa2);
	ft_printf("%#X\n", hexa2);
	printf("%#X\n", hexa2);
	ft_printf("%#x\n", hexa);
	printf("%#x\n", hexa);
	ft_printf("%#X\n", hexa);
	printf("%#X\n", hexa);
	ft_printf("%#x\n", 42);
	printf("%#x\n", 42);
	ft_printf("%#X\n", 42);
	printf("%#X\n", 42);
	ft_printf("%p\n", &integer);
	printf("%p\n", &integer);
	ft_printf("%p\n", &str2);
	printf("%p\n", &str2);
	ft_printf("ESQUISITO!%+o0%<<<<%c\n", 256, 'c'); // um < a menos ?
	printf("ESQUISITO!%+o0%<<<<%c\n", 256, 'c');
	ft_printf("%i\n", printf("!♥escolinha%+o0%<<<<%c\n", 256, 'W'));
	printf("%i\n", printf("!♥escolinha%+o0%<<<<%c\n", 256, 'W'));
	ft_printf("%d\n", ft_printf("Mr. Sambalelê %d %c\n", 42, 'w'));
	printf("%d\n", ft_printf("Mr. Sambalelê %d %c\n", 42, 'w'));
	ft_printf(" %s %s %s %s %s \n", " - ", "", "4", "", "2 ");
	printf(" %s %s %s %s %s \n", " - ", "", "4", "", "2 ");
	ft_printf("%c %-c %#c % c %0c %+c - %#c %#-c %# c %#+c %##c - %-c aqui % c aqui %+c %c - %+-c %+ c %+#c %++c\n", 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W');
	printf("%c %-c %#c % c %c %+c - %#c %#-c %# c %#+c %##c - %-c aqui % c aqui %+c %c - %+-c %+ c %+#c %++c\n", 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W', 'W');
	ft_printf("%s %-s %#s % s %s %+s - %#s %#-s %# s %#+s %##s - %-s aqui % s aqui %+s %s - %+-s %+ s %+#s %++s\n", str, str, str, str, str, str, str, str, str, str, str, str, str, str, str, str, str, str, str);
	printf("%s %-s %#s % s %s %+s - %#s %#-s %# s %#+s %##s - %-s aqui % s aqui %+s %s - %+-s %+ s %+#s %++s\n", str, str, str, str, str, str, str, str, str, str, str, str, str, str, str, str, str, str, str);
	ft_printf("%d %-d %#d % d %d %+d - %#d %#-d %# d %#+d %##d - %-d aqui % d aqui %+d %d - %+-d %+ d %+#d %++d\n", integer, integer, integer, integer, integer, integer, integer, integer, integer, integer, integer, integer, integer, integer, integer, integer, integer, integer, integer);
	printf("%d %-d %#d % d %d %+d - %#d %#-d %# d %#+d %##d - %-d aqui % d aqui %+d %d - %+-d %+ d %+#d %++d\n", integer, integer, integer, integer, integer, integer, integer, integer, integer, integer, integer, integer, integer, integer, integer, integer, integer, integer, integer);
}

/*int	main(void)
{
	char	character;
	char	*string;
	int		integer;
	int		integer2;
	int		integer3;
	size_t	uinteger;
	size_t	uinteger2;
	size_t	uinteger3;
	size_t	uinteger4;
	size_t	hexa;
	size_t	hexa2;
	size_t	hexa3;
	size_t	hexa4;

	string = "Hello, World! %%%%";
	character = 'W';
	integer = 0;
	integer2 = -2147483648;
	integer3 = 4815162342;
	uinteger = 0;
	uinteger2 = 2147483649;
	uinteger3 = 4294967295;
	uinteger4 = 4815162342;
	hexa = 0;
	hexa2 = 2;
	hexa3 = 10;
	hexa4 = 16;
	ft_printf(string);
	printf(string);
	ft_printf("\n");
	ft_printf("Hello, World! %%%%\n");
	printf("Hello, World! %%%%\n");
	ft_printf("%c\n", character);
	printf("%c\n", character);
	ft_printf("%s\n", string);
	printf("%s\n", string);
	ft_printf("%d\n", integer);
	printf("%d\n", integer);
	ft_printf("%d\n", integer2);
	printf("%d\n", integer2);
	ft_printf("%d\n", integer3);
	printf("%d\n", integer3);
	ft_printf("%i\n", integer);
	printf("%i\n", integer);
	ft_printf("%i\n", integer2);
	printf("%i\n", integer2);
	ft_printf("%i\n", integer3);
	printf("%i\n", integer3);
	ft_printf("%u\n", uinteger);
	printf("%u\n", uinteger);
	ft_printf("%u\n", uinteger2);
	printf("%u\n", uinteger2);
	ft_printf("%u\n", uinteger3);
	printf("%u\n", uinteger3);
	ft_printf("%u\n", uinteger4);
	printf("%u\n", uinteger4);
	ft_printf("%x\n", hexa);
	printf("%x\n", hexa);
	ft_printf("%x\n", hexa2);
	printf("%x\n", hexa2);
	ft_printf("%x\n", hexa3);
	printf("%x\n", hexa3);
	ft_printf("%x\n", hexa4);
	printf("%x\n", hexa4);
	ft_printf("%X\n", hexa);
	printf("%X\n", hexa);
	ft_printf("%X\n", hexa2);
	printf("%X\n", hexa2);
	ft_printf("%X\n", hexa3);
	printf("%X\n", hexa3);
	ft_printf("%X\n", hexa4);
	printf("%X\n", hexa4);
	ft_printf("%p\n", &integer);
	printf("%p\n", &integer);
	ft_printf("\n%i", printf("!♥escolinha%+o0%<<<<%c", 256, 'W'));
	printf("\n%i", printf("!♥escolinha%+o0%<<<<%c", 256, 'W'));
	ft_printf("\n");
	printf("\n");
	ft_printf("\n%d", ft_printf("sambalelê %d %c %f %f", 42, 'w', 1.999, 42.5));
	printf("\n%d", ft_printf("sambalelê %d %c %f %f", 42, 'w', 1.999, 42.5));
	ft_printf("\n");
	printf("\n");
	ft_printf("%.10s%c%c%%%,\n", "um de cada dessa porra", ':', '\n');
	printf("%.10s%c%c%%%,\n", "um de cada dessa porra", ':', '\n');
	ft_printf("%i  %d  %i  %d\n", integer, integer2, integer3); // OK!
	printf("%i  %d  %i  %d\n", integer, integer2, integer3);
	ft_printf("%-15i  %-30d  %015i  %015d\n", integer, integer2, integer3);
	printf("%-15i  %-30d  %015i  %015d\n", integer, integer2, integer3);
	ft_printf("%-15i  %-30.5d  %015.5i  %015d\n", integer, integer2, integer3);
	printf("%-15i  %-30.5d  %015.5i  %015d\n", integer, integer2, integer3);
	ft_printf("%i  %d  %i  %d\n", uinteger, uinteger2, uinteger3); // OK!
	printf("%li  %ld  %li  %ld\n", uinteger, uinteger2, uinteger3);
	ft_printf("%-15li  %-30ld  %015li  %015ld\n", uinteger, uinteger2, uinteger3, uinteger4);
	printf("%-15li  %-30ld  %015li  %015ld\n", uinteger, uinteger2, uinteger3, uinteger4);
	ft_printf("%-15li  %-30.5ld  %015.5li  %015ld\n", uinteger, uinteger2, uinteger3, uinteger4);
	printf("%-15li  %-30.5ld  %015.5li  %015ld\n", uinteger, uinteger2, uinteger3, uinteger4);
	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri <microdr@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 14:31:24 by microdri          #+#    #+#             */
/*   Updated: 2022/06/22 17:11:16 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include "libftprintf.h"
#include "libftprintf_bonus.h"

int	main()
{
	char categoria = 'A';
	char *str = NULL;
	int	pe_bom = 42;
	int pe_ruim = -2147483648;
	unsigned int gols = 762;
	char *tecnico = "malvadao";


	ft_printf("\033[0;34m------------------------------FT_PRINTF-----------------------------\033[0m\n");
	ft_printf("\ncaracteres escritos-> %i\n\n", ft_printf("CATEGORIA: %%%c\n", categoria));
	printf("\033[0;34m------------------------------PRINTF-----------------------------\033[0m\n");
	printf("\ncaracteres escritos-> %i\n\n", printf("CATEGORIA: %%%c\n", categoria));

	ft_printf("\033[0;34m------------------------------FT_PRINTF-----------------------------\033[0m\n");
	ft_printf("\ncaracteres escritos-> %i\n\n", ft_printf("JOGADORES APROVADO: %s\n", str)); 
	printf("\033[0;34m------------------------------PRINTF-----------------------------\033[0m\n");
	printf("\ncaracteres escritos-> %i\n\n", printf("JOGADORES APROVADO: %s\n", str));


	ft_printf("\033[0;34m------------------------------FT_PRINTF-----------------------------\033[0m\n");
	ft_printf("caracteres escritos -> %i\n\n", ft_printf("PONTUACAO PE BOM: %d\nPONTUACAO PE RUIM: %i\n\n", pe_bom, pe_ruim));
	printf("\033[0;34m------------------------------PRINTF-----------------------------\033[0m\n");
	printf("caracteres escritos -> %i\n\n", printf("PONTUACAO PE BOM: %d\nPONTUACAO PE RUIM: %i\n\n", pe_bom, pe_ruim));
	
	ft_printf("\033[0;34m------------------------------FT_PRINTF-----------------------------\033[0m\n");
	ft_printf("caracteres escritos -> %i\n\n", ft_printf("PONTUACAO ACERTO AO GOL: %u\n\n", gols));
	printf("\033[0;34m------------------------------PRINTF-----------------------------\033[0m\n");
	printf("caracteres escritos -> %i\n\n", printf("PONTUACAO ACERTO AO GOL: %u\n\n", gols));


	ft_printf("\033[0;34m------------------------------FT_PRINTF-----------------------------\033[0m\n");
	ft_printf("caracteres escritos -> %i\n\n", ft_printf("TIME: %x%x%x%x%x\n\n", 15, 10, 11, 4, 2));
	printf("\033[0;34m------------------------------PRINTF-----------------------------\033[0m\n");
	printf("caracteres escritos -> %i\n\n", printf("TIME: %x%x%x%x%x\n\n", 15, 10, 11, 4, 2));

	ft_printf("\033[0;34m------------------------------FT_PRINTF-----------------------------\033[0m\n");
	ft_printf("caracteres escritos -> %i\n\n", ft_printf("MAIORIA DOS GOLS SAO DE: %X%X%X%X%X%X%X%X\n\n", 12, 10, 11, 14, 12, 10, 13, 10));
	printf("\033[0;34m------------------------------PRINTF-----------------------------\033[0m\n");
	printf("caracteres escritos -> %i\n\n", printf("MAIORIA DOS GOLS SAO DE: %X%X%X%X%X%X%X%X\n\n", 12, 10, 11, 14, 12, 10, 13, 10));


	ft_printf("\033[0;34m------------------------------FT_PRINTF-----------------------------\033[0m\n");
	ft_printf("caracteres escritos -> %i\n\n", ft_printf("TECNICO: %p\n\n", tecnico));
	printf("\033[0;34m------------------------------PRINTF-----------------------------\033[0m\n");
	printf("caracteres escritos -> %i\n\n", printf("TECNICO: %p\n\n", tecnico));

	printf("\033[0;33m--_--...--_--...--_--...--_--...--_--...É SOBRE ISSO...--_--...--_--...--_--...--_--...--_--\033[0m\n");

}*/