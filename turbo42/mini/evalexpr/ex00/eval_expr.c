/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 11:33:34 by ruchoa            #+#    #+#             */
/*   Updated: 2022/04/16 18:08:10 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_argv_to_postfix(char *av, int index, int arraycount);

int	*eval_postfix(postfix);

int	eval_expr(char *av)
{
	char	*postfix;
	int		*result;

	postfix = ft_argv_to_postfix(av, 0, 0);
	result = eval_postfix(postfix);
	return (*result);
}
