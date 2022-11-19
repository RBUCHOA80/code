/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmenezes <jmenezes@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 18:56:57 by jmenezes          #+#    #+#             */
/*   Updated: 2022/08/20 18:57:04 by jmenezes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_H
# define CONVERSION_H
# define BASESET_DEC "0123456789"
# define BASESET_HEXL "0123456789abcdef"
# define BASESET_HEXU "0123456789ABCDEF"

typedef struct s_conversion {
	char			specifier;
	int				precision;
	int				min_width;
	unsigned char	flag_hash: 1;
	unsigned char	flag_zero: 1;
	unsigned char	flag_minus: 1;
	unsigned char	flag_space: 1;
	unsigned char	flag_plus: 1;
	unsigned char	flag_period: 1;
}	t_conversion;

#endif
