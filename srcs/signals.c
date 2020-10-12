/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signals.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmidori <lmidori@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 23:26:11 by lmidori           #+#    #+#             */
/*   Updated: 2020/10/12 23:27:02 by lmidori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser.h"

void	sigquit(int sig)
{
	sig = 0;
	if (g_str1)
	{
		write(1, "\b\b", 2);
		return ;
	}
	g_str1[ft_strlen(g_str1) - 1] = '\0';
	write(1, "\nshell > ", 8);
	return ;
}

void	sigint(int sig)
{
	sig = 0;
	if (g_str1 && ft_strlen(g_str1))
	{
		free(g_str1);
		g_str1 = (char *)malloc(sizeof(char));
		g_str1[0] = '\0';
	}
	g_error = 1;
	write(1, "\nshell > ", 8);
}
