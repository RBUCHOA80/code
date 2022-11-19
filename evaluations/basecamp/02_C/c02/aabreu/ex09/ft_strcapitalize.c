/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 13:48:43 by coder             #+#    #+#             */
/*   Updated: 2022/02/07 13:59:03 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_char_is_alphanumeric(char c);
void	ft_char_upcase(char *c);
void	ft_char_lowcase(char *c);

char	*ft_strcapitalize(char *str)
{
	int		is_first_letter;
	char	*temp;

	temp = str;
	is_first_letter = 1;
	while (*str != 0)
	{
		if (is_first_letter)
			ft_char_upcase(str);
		else
			ft_char_lowcase(str);
		if (ft_char_is_alphanumeric(*str))
			is_first_letter = 0;
		else
			is_first_letter = 1;
		str++;
	}
	return (temp);
}

int	ft_char_is_alphanumeric(char c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123) || (c > 47 && c < 58))
	{
		return (1);
	}
	return (0);
}

void	ft_char_upcase(char *c)
{
	if (*c > 96 && *c < 123)
	{
		*c -= 32;
	}
}

void	ft_char_lowcase(char *c)
{
	if (*c > 64 && *c < 91)
	{
		*c += 32;
	}
}
