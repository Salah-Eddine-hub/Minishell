/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sharrach <sharrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 10:46:12 by sharrach          #+#    #+#             */
/*   Updated: 2022/11/19 09:35:13 by sharrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_str_cpy(char *dest, const char *src)
{
	size_t		i;
	char		*s;

	s = (char *)src;
	i = 0;
	while (s[i] != '\0')
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(const char *src)
{
	char	*dest;
	size_t	i;

	i = ft_strlen(src);
	dest = (char *)malloc((i + 1) * sizeof (char));
	if (dest == NULL)
		return (0);
	ft_str_cpy(dest, src);
	return (dest);
}
