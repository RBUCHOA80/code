/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 21:17:20 by ruchoa            #+#    #+#             */
/*   Updated: 2023/09/04 22:21:40 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

/*		INCLUDES		*/
# include <stdio.h> //printf
# include <unistd.h> //sleep
# include <stdlib.h> //malloc | free
# include <pthread.h> //pthread_lib
# include <sys/time.h> //gettimeofday

/* 
nop <- number_of_philosophers;
ttd <- time_to_die;
tte <- time_to_eat;
tts <- time_to_sleep;
pme <- number_of_times_each_philosopher_must_eat;
 */

/*		STRUCS		*/
typedef struct s_philo	t_philo;

typedef struct s_rules
{
	unsigned int	nop;
	time_t			ttd;
	time_t			tte;
	time_t			tts;
	int				pme;
	time_t			start_time;
	t_philo			**philos;
	pthread_mutex_t	**forks;
}	t_rules;

typedef struct s_philo
{
	unsigned int	index;
	pthread_t		thread;
	pthread_mutex_t	*fork[2];
	pthread_mutex_t	m_last_meal;
	time_t			last_meal;
	pthread_mutex_t	m_meals;
	int				meals;
	pthread_mutex_t	m_dead;
	unsigned int	dead;
	t_rules			*rules;
}	t_philo;

/*		PROTOTYPES		*/
int		ft_atoi(const char *str);
int		ft_check_arg(int argc, char **argv);
int		ft_check_dead(t_philo *philo);
int		ft_check_last_meal(t_philo *philo);
int		ft_check_meals(t_philo *philo);
int		ft_error_msg(void);
int		ft_free(t_rules *rules);
time_t	ft_get_time(void);
void	*ft_hunger(void *rules);
t_rules	*ft_init(char **argv);
char	*ft_itoa(int n);
int		ft_msg(t_philo *philo, char *str);
void	*ft_routine_alone(void *data);
void	*ft_routine(void *rules);
void	ft_set_dead(t_philo **philo);
int		ft_set_last_meal(t_philo *philo);
int		ft_set_meals(t_philo *philo);
void	ft_sleep_ms(t_philo *philo, unsigned int usec);
int		ft_strcmp(char *s1, char *s2);
int		philo(t_rules *rules);

/* 		ft_atoi.c	*/
int		ft_isspace(char c);
int		ft_issimbol(char c);
int		ft_isdigit(int c);

/* 		ft_free.c	*/
int		ft_free_philos(t_rules *rules);
int		ft_free_forks(t_rules *rules);

/* 		ft_init.c	*/
void	ft_init_rules(t_rules *rules, char **argv);
void	ft_init_forks(t_rules *rules);
void	ft_init_philos_forks(t_rules *rules, unsigned int i);
void	ft_init_philos(t_rules *rules);

/* 		ft_itoa.c	*/
int		ft_nbrlen(int n);

/* 		ft_routine.c	*/
int		ft_take(t_philo *philo);
int		ft_eat(t_philo *philo);
int		ft_sleep(t_philo *philo);
int		ft_think(t_philo *philo);

#endif
