/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gusousa <gusousa@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 13:40:15 by gusousa           #+#    #+#             */
/*   Updated: 2023/02/06 11:25:55 by gusousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minishell.h"

char	*check_if_double(char *str, int *i)
{
	if (*(str + 1) == *str && *(str + 1) != '|')
	{
		(*i) = 2;
		return (ft_substr(str, 0, 2));
	}
	else
	{
		(*i) = 1;
		return (ft_substr(str, 0, 1));
	}
}

/*
 * As três opções para metadado é:
 * 1. Início da palavra
 * 2. Entre duas palavras. 
 * 3. Final da palavra.
 */
void	split_and_create(t_cell **list_cells, char *str)
{
	char	*new_word;
	int		i;

	new_word = NULL;
	while (*str)
	{
		i = 0;
		// Copiar o metadado, duplo ou normal
		if (*str == '|' || *str == '>' || *str == '<')
		{
			new_word = check_if_double(str, &i);
			create_new_cell(list_cells, new_word);
			free(new_word);
			new_word = NULL;
		}
		// Copiar palavra normal
		else
		{
			while (str[i] != '|' && str[i] != '>'
				&& str[i] != '<' && str[i] != '\0')
				i++;
			new_word = ft_substr(str, 0, i);
			create_new_cell(list_cells, new_word);
			free(new_word);
			new_word = NULL;
		}
		str += i;
	}
}

/*
 * Função para dividir as palavras do prompt em nós de uma lista.
 *
 * Andando em cada palavra, vendo se tem caracter
 * Se tiver, vê se tem um após ele
 * Cria cell até ali, dá free.|cat
 * Repete o laço da onde acabou.
 */
void	divide_prompt(t_info *info, t_cell **list_cells)
{
	char	**mtx_str;
	int		i;

	mtx_str = ft_split(info->prompt, ' ');
	i = 0;
	while (mtx_str[i])
	{
		// Metadado junto com palavra.
		if (ft_strchr(mtx_str[i], '|') || ft_strchr(mtx_str[i], '<')
			|| ft_strchr(mtx_str[i], '>'))
			split_and_create(list_cells, mtx_str[i]);
		// Palavra ou metadado sozinho.
		else
			create_new_cell(list_cells, mtx_str[i]);
		i++;
	}
	if (mtx_str)
	{
		i = -1;
		while (mtx_str[++i])
			free(mtx_str[i]);
		free (mtx_str);
	}
}
