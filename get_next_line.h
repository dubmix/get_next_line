/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 08:47:55 by pdelanno          #+#    #+#             */
/*   Updated: 2023/04/10 22:36:05 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

char	*get_next_line(int fd);
char	*ft_memcpy(char *stash);
char	*readtext(int fd, char *stash);
int		findnewline(char *stash);
char	*ft_strjoin(char *stash, char *buf);
int		ft_strlen(char *str);
char	*split(char *stash);
char	*ft_strcpy(char *stash, char *buf, char *str);

#endif
