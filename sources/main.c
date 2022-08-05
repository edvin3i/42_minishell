/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbreana <gbreana@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 13:55:30 by gbreana           #+#    #+#             */
/*   Updated: 2022/08/05 11:18:13 by gbreana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minishell.h"

int main(void)
{
	char	*line;
	
	while(1)
	{
		pwd();
		line = ft_readline("minishel >> ");
		printf("Line = %s\n", line);
		
		free(line);
	}
}
