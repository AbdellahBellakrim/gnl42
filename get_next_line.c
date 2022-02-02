/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 03:37:49 by abellakr          #+#    #+#             */
/*   Updated: 2021/12/08 21:13:28 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
//************************************************************   getline
static char	*get_line(char *s)
{
	int		i;
	int		j;
	char	*ptr;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	while (s[i] != '\n' && s[i])
		i++;
	ptr = (char *)malloc(i + 2);
	if (!ptr)
		return (NULL);
	i++;
	while (j < i)
	{
		ptr[j] = s[j];
		j++;
	}
	ptr[j] = 0;
	return (ptr);
}

//****************************************************************    rest
static char	*get_rest(char *s)
{
	int		i;
	int		j;
	char	*reste;

	i = 0;
	j = 0;
	while (s[i] != '\n' && s[i])
		i++;
	if (!s[i])
	{
		free (s);
		return (NULL);
	}
	i++;
	reste = malloc((ft_strlen(s) - i) + 1);
	while (s[i])
	{
		reste[j] = s[i];
		j++;
		i++;
	}
	reste[j] = '\0';
	free (s);
	return (reste);
}

//**********************************************************************    read
static char	*read_lol(int fd, char *static_str)
{
	char	*buff;
	int		i;

	if (!static_str)
		static_str = ft_strdup("");
	buff = (char *)malloc(BUFFER_SIZE + 1);
	if (!buff)
		return (NULL);
	while (!ft_strchr(static_str))
	{
		i = read(fd, buff, BUFFER_SIZE);
		if (i < 0)
		{
			free (static_str);
			return (NULL);
		}
		buff[i] = 0;
		if (i == 0)
			break ;
		else
			static_str = ft_strjoin(static_str, buff);
	}
	free (buff);
	return (static_str);
}

//************************************************************* get next line
char	*get_next_line(int fd)
{
	static char	*s;
	char		*line;

	if (fd < 0 || BUFFER_SIZE == 0 || read(fd, 0, 0) < 0)
		return (NULL);
	s = read_lol(fd, s);
	line = get_line(s);
	s = get_rest(s);
	if (line[0] == 0)
	{
		free (s);
		free (line);
		return (NULL);
	}
	return (line);
}
