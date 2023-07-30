/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 15:20:19 by ruchoa            #+#    #+#             */
/*   Updated: 2023/07/30 15:48:00 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int main(void)
{
	int	pid;

	pid = fork();
	if (pid == -1)
		return (1);
	printf("Hello from process %i - %i\n", fork(), getpid());
	if (pid != 0)
		printf("(A) %i - %i\n", pid, getpid());
	return (0);
}
