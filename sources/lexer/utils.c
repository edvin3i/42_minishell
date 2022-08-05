/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbreana <gbreana@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 11:17:48 by gbreana           #+#    #+#             */
/*   Updated: 2022/08/05 11:24:11 by gbreana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

char	*ft_readline(char *str)
{
	char	*line;
	
	line = readline(str);
	if (*line)
		add_history(line);
	return (line);
}
