/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 13:23:51 by coder             #+#    #+#             */
/*   Updated: 2022/04/01 13:23:59 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)

{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[0] >= 'a' && str[0] <= 'z')
			str[i] -= 32;
		else if (str[i - 1] == ' ' || str[i - 1] == '-' || str[i - 1] == '+')
		{	
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

#include <stdio.h>

int    main(void)
{
	char	test[] = "victor de 32VA{SCONCE<LLOSgomes-ferFre[ira+ribeiro";
    printf("%s\n", ft_strcapitalize(test));
}