/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbreana <gbreana@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 12:11:24 by gbreana           #+#    #+#             */
/*   Updated: 2022/08/05 11:22:44 by gbreana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H
/*
 * Includes
 */
# include "libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <fcntl.h>
# include <limits.h>
# include <string.h>
# include <errno.h>
# include <sys/wait.h>
# include <sys/stat.h>
# include <sys/types.h>
# include <term.h>
# include <termios.h>
# include <termcap.h>
# include <readline/readline.h>
# include <readline/history.h>
/*
typedef struct	s_env
{
	char	*key;
	char	*value;
	t_env	*next;
	t_env	*prev;
}	t_env;

typedef struct	s_cmd
{
	
}	t_cmd;

typedef struct s_cmdlist
{
	
}	t_cmdlist;

*/

/*
*	Lexer's utils
*/
char	*ft_readline(char *str);

/*
*	Builtins
*/
int	pwd(void);

#endif