/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellakr <abellakr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 16:25:21 by abellakr          #+#    #+#             */
/*   Updated: 2021/12/08 17:35:25 by abellakr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H

# define GET_NEXT_LINE_H

//library
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include  <unistd.h>
//function
char	*get_next_line(int fd);
char	*ft_strjoin(char *static_str, char *buf);
char	*ft_strdup(char *s1);
int		ft_strlen(char *str);
int		ft_strchr(char *p);

#endif