/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_charnbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 17:10:50 by ruchoa            #+#    #+#             */
/*   Updated: 2022/04/16 18:11:15 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_charnbr(char *av, int index)
{
	char	*num;
	int		length;
	int		position;

	length = 0;
	position = index;
	while (av[position] != '\0'
		&& av[position] != ' '
		&& av[position] != '('
		&& av[position] != ')'
		&& (!ft_is_operator(av[position])
			|| av[position] == '-'
			&& '0' <= av[position] && av[position] <= '9'))
	{
		length++;
		position++;
	}
	num = (char *)malloc(length + 1);
	position = 0;
	while (position < length)
		num[position++] = av[index++];
	num[position] = '\0';
	return (num);
}
