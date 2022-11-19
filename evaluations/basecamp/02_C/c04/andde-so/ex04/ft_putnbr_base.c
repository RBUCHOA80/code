/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andde-so <andde-so@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 22:06:12 by andde-so          #+#    #+#             */
/*   Updated: 2022/02/17 17:48:50 by andde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_strlen(char *str);
int	ft_strhas_duplicates_until_pos(char *str, int pos);
int	ft_is_valid_base(char *base, int base_size);

void	ft_putnbr_base(int nbr, char *base)
{
	int		remain;
	int		result;
	char	c;
	int		base_size;

	base_size = ft_strlen(base);
	if (!ft_is_valid_base(base, base_size))
		return ;
	remain = nbr % base_size;
	result = nbr / base_size;
	if (nbr < 0)
	{
		write(1, "-", 1);
		result *= -1;
		remain *= -1;
	}
	if (result > 0)
		ft_putnbr_base(result, base);
	c = base[remain];
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_strhas_duplicates_until_pos(char *str, int pos)
{
	int	j;

	j = 0;
	while (j < pos)
	{
		if (str[j] == str[pos])
			return (1);
		j++;
	}
	return (0);
}

int	ft_is_valid_base(char *base, int base_size)
{
	int	i;

	i = 0;
	if (base_size < 2)
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (ft_strhas_duplicates_until_pos(base, i))
			return (0);
		i++;
	}
	return (1);
}


/* #include<limits.h>
#include<stdio.h>

void	print_all_nbrs_in_base(char *base)
{
	printf("-100 to 100 in base %s\n", base);
	int i = -100;
	while (i <= 100)
	{
		ft_putnbr_base(i, base);
		printf("\n");
		i++;
	}
	printf("\n");
}

void	print_min_and_max_int_in_base(char *base)
{
	printf("INT_MIN in base %s\n", base);
	ft_putnbr_base(INT_MIN, base);
	printf("\n");
	printf("INT_MAX in base %s\n", base);
	ft_putnbr_base(INT_MAX, base);
	printf("\n");
}

int	main(void)
{
	char bases[4][17] = {"01", "0123456789ABCDEF", "0123456789", "poneyvif"};
	int i = 0;
	while(i < 4)
	{
		print_all_nbrs_in_base(bases[i]);
		i++;
	}
	i = 0;
	while(i < 4)
	{
		print_min_and_max_int_in_base(bases[i]);
		i++;
	}
	return (0);
} */
