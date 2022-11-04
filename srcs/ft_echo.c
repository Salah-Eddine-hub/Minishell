/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_echo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 10:23:24 by sharrach          #+#    #+#             */
/*   Updated: 2022/11/04 12:24:39 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

void ft_echo(char **arg)
{
    int i;
    
    i = 0;
    while (arg[i])
    {
        printf("%s\n", arg[i]);
        i ++;
    }
    printf("\n");
    return ;
}