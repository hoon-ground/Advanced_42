/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihookim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 11:18:15 by jihookim          #+#    #+#             */
/*   Updated: 2024/12/31 11:18:16 by jihookim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char	*get_next_line(int fd);
char	*make_line(char *line, char **buf, int fd);
char	*return_line(char *line, char **buf);
char	*gnl_strchr(char *str, int c);
char	*gnl_strjoin(char *s1, char *s2);
char	*gnl_free(char **s1, char **s2);
char	*gnl_substr(char	*str, size_t start, size_t len);
size_t	gnl_strlen(char *str);

#endif
