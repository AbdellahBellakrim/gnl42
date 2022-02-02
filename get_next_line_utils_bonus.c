/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 17:38:11 by abellakr          #+#    #+#             */
/*   Updated: 2021/12/08 18:09:35 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

//*********************************************************  strjoin 
char	*ft_strjoin(char *static_str, char *buf)
{
	char	*str;
	int		i;
	int		j;

	if (!static_str || !buf)
		return (NULL);
	str = (char *)malloc(ft_strlen(static_str) + ft_strlen(buf) + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (static_str[i])
	{
		str[i] = static_str[i];
		i++;
	}
	j = 0;
	while (buf[j])
	{
		str[i] = buf[j];
		i++;
		j++;
	}
	str[i] = 0;
	free (static_str);
	return (str);
}

//******************************************************  strlen
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

//**********************************************************  strdup
char	*ft_strdup(char *str)
{
	char	*p1;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i])
		i++;
	p1 = (char *)malloc(i * sizeof(char) + 1);
	if (!p1)
		return (NULL);
	i = 0;
	while (str[i])
	{
		p1[j] = str[i];
		i++;
		j++;
	}
		p1[j] = 0;
	return (p1);
}

//*******************************************************************  strchr
int	ft_strchr(char *p)
{
	int	i;

	i = 0;
	while (p[i])
	{
		if (p[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}
