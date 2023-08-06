/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 21:17:20 by ruchoa            #+#    #+#             */
/*   Updated: 2023/08/05 21:27:13 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

/*		INCLUDES  */
# include <stdio.h> //printf
# include <stdlib.h> //malloc | free
# include <time.h>

/*		INCLUDES  */
int			philo(char **argv);
static int	ft_isspace(char c);
static int	ft_issimbol(char c);
static int	ft_isdigit(int c);
int			ft_atoi(const char *str);
int			ft_check_arg(char **argv);
t_argv		*ft_create_rules(char **argv);
static int	ft_nbrlen(int n);
char		*ft_itoa(int n);
void		ft_msg(void);
int			ft_strcmp(char *s1, char *s2);

typedef struct  s_argv
{
	int number_of_philosophers;
	time_t time_to_die;
	time_t time_to_eat;
	time_t time_to_sleep;
	int number_of_times_each_philosopher_must_eat;
}	t_argv;

typedef struct  s_philo
{
	void	*content;
}	t_philo;

#endif
