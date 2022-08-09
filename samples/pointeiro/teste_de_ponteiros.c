/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teste_de_ponteiros.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 21:49:15 by ruchoa            #+#    #+#             */
/*   Updated: 2022/02/09 21:49:15 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>

void	ft_pointer(char a, char b, char *c, char *d);

int	main(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = 'A';
	b = 'B';
	c = 'C';
	d = 'D';
	printf("Passo 1 (Criação) a = %c\n", a);
	printf("Passo 1 (Criação) b = %c\n", b);
	printf("Passo 1 (Criação) c = %c\n", c);
	printf("Passo 1 (Criação) d = %c\n", d);
	printf("\n");
	ft_pointer(a, b, &c, &d);
	printf("Passo 4 (Final) a = %c\n", a);
	printf("Passo 4 (Final) b = %c\n", b);
	printf("Passo 4 (Final) c = %c\n", c);
	printf("Passo 4 (Final) d = %c\n", d);
	printf("\n");
}

void	ft_pointer(char a, char b, char *c, char *d)
{
	printf("Passo 2 (Importação) a = %c\n", a);
	printf("Passo 2 (Importação) b = %c\n", b);
	printf("Passo 2 (Importação) c = %c\n", *c);
	printf("Passo 2 (Importação) d = %c\n", *d);
	printf("\n");
	a = 'W';
	b = 'X';
	*c = 'Y';
	*d = 'Z';
	printf("Passo 3 (Exportação) a = %c\n", a);
	printf("Passo 3 (Exportação) b = %c\n", b);
	printf("Passo 3 (Exportação) c = %c\n", *c);
	printf("Passo 3 (Exportação) d = %c\n", *d);
	printf("\n");
} */

#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	char	*str1;
	char	*temp;
	int		n;

	str1 = "Frase aqui.";
	temp = str1;
	while (*str1 != '\0')
	{
		printf("(B) %p %c \n", &*str1, *str1);
		str1++;
	}
	printf("(C) %p %s \n", str1, str1);
	printf("(D) %p %c \n", &*str1, *str1);
	printf("(E) %p %s \n", temp, temp);
	printf("(F) %p %c \n", &*temp, *temp);
	n = 2;
	printf("(G) %p %s \n", temp + n, temp + n);
	printf("(H) %p %c \n", &*temp + n, *temp + n);
	printf("(I) %p %s \n", temp, temp);
	printf("(J) %p %c \n", &*temp, *temp);
	temp = temp + n;
	printf("(K) %p %s \n", temp, temp);
	printf("(L) %p %c \n", &*temp, *temp);
	return (0);
}

/* int	main(void)
{
	char	*str1;
	int		i;

	str1 = "Frase aqui.";
	i = 0;
	while (str1[i] != '\0')
	{
		printf("(A) %p i = %i\t", &i, i);
		printf("(B) %p %c \n", &str1[i], str1[i]);
		i++;
	}
	printf("(C) %p %s \n", str1, str1);
	printf("(D) %p %c \n", &*str1, *str1);
	return (0);
} */
