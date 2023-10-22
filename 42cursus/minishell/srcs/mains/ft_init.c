/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 21:22:41 by ruchoa            #+#    #+#             */
/*   Updated: 2023/10/21 17:34:27 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

int	ft_init_data(t_minishell *data)
{
	data->in = dup(STDIN);
	data->out = dup(STDOUT);
	return (RETURN_SUCCESS);
}

int	ft_init_env(t_minishell *data)
{
	static char	*arge[] = {\
							"HOME", \
							"PATH", \
							"USER", \
							"TERM", \
							};
	char		*str;
	int			i;

	i = 0;
	while (arge[i])
	{
		str = getenv(arge[i]);
		if (str)
		{
			str = ft_strjoin("=", str);
			str = ft_strjoin(arge[i], str);
			ft_lstadd_back(&data->env, ft_lstnew(str));
		}
		i++;
	}
	return (RETURN_SUCCESS);
}

//"CTRL+C" = SIGINT
//"CTRL+\" = SIGQUIT
int	ft_init_signal(void)
{
	signal(SIGINT, &ft_signal);
	signal(SIGQUIT, SIG_IGN);
	return (RETURN_SUCCESS);
}

int	ft_init(t_minishell *data)
{
	ft_init_data(data);
	ft_init_env(data);
	ft_init_signal();
	return (RETURN_SUCCESS);
}

/* 
"SHELL" 
"SESSION_MANAGER" 
"QT_ACCESSIBILITY" 
"COLORTERM" 
"XDG_CONFIG_DIRS" 
"XDG_SESSION_PATH" 
"XDG_MENU_PREFIX" 
"TERM_PROGRAM_VERSION" 
"LANGUAGE" 
"SSH_AUTH_SOCK" 
"DESKTOP_SESSION" 
"SSH_AGENT_PID" 
"GTK_MODULES" 
"XDG_SEAT" 
"PWD" 
"XDG_SESSION_DESKTOP" 
"LOGNAME" 
"XDG_SESSION_TYPE" 
"PANEL_GDK_CORE_DEVICE_EVENTS" 
"XAUTHORITY" 
"VSCODE_GIT_ASKPASS_NODE" 
"XDG_GREETER_DATA_DIR" 
"HOME" 
"LANG" 
"LS_COLORS" 
"XDG_CURRENT_DESKTOP" 
"GIT_ASKPASS" 
"XDG_SEAT_PATH" 
"CHROME_DESKTOP" 
"VSCODE_GIT_ASKPASS_EXTRA_ARGS" 
"XDG_SESSION_CLASS" 
"TERM" 
"USER" 
"VSCODE_GIT_IPC_HANDLE" 
"DISPLAY" 
"SHLVL" 
"XDG_VTNR" 
"XDG_SESSION_ID" 
"XDG_RUNTIME_DIR" 
"VSCODE_GIT_ASKPASS_MAIN" 
"XDG_DATA_DIRS" 
"GDK_BACKEND" 
"PATH" 
"GDMSESSION" 
"ORIGINAL_XDG_CURRENT_DESKTOP" 
"DBUS_SESSION_BUS_ADDRESS" 
"TERM_PROGRAM" 
"OLDPWD" 
"_" 
*/
