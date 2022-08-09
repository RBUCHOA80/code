/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 12:47:58 by ruchoa            #+#    #+#             */
/*   Updated: 2022/04/21 13:03:55 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str);

int		ft_strcmp(char *s1, char *s2);

int		ft_strlen(char *str);

void	ft_swap(int *a, int *b);

int	main(void)
{
	char	*test_ft_putchar;
	char	*test_ft_putstr;
	int		index;

	test_ft_putchar = "ft_putchar <- OK\n";
	index = 0;
	while (test_ft_putchar[index])
		ft_putchar(test_ft_putchar[index++]);
	test_ft_putstr = "ft_putstr <- OK\n";
	ft_putstr(test_ft_putstr);
	return (0);
}

//clear ; gcc -Wall -Wextra -Werror main.c libft.a ; time ./a.out
