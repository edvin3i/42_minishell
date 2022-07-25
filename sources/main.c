/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbreana <gbreana@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 13:55:30 by gbreana           #+#    #+#             */
/*   Updated: 2022/07/25 14:58:07 by gbreana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minishell.h"

int main(void)
{
	char    *str=NULL;
	
	while(1)
	{
		str = readline("Myshell $: ");
		add_history(str);
		printf("Line = %s\n", str);
		free(str);
	}
}

