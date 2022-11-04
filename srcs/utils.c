/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 13:34:22 by sharrach          #+#    #+#             */
/*   Updated: 2022/11/04 10:19:09 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

int ft_strcmp(const char *s1, const char *s2)
{
    int i;

    i = 0;
    while(s1[i] && s2[i] && s1[i] == s2[i])
        i ++;
    return (s1[i] - s2[i]);
}

size_t	ft_arrlen(char **arr)
{
	size_t	arrlen;

	arrlen = 0;
	while (arr[arrlen])
		arrlen ++;
	return (arrlen);
}

void    free_2d(char **arr)
{
    int i;
     
    i = 0;
    while(arr[i])
    {
        free(arr[i]);
        i ++;
    }
    free(arr);
}
