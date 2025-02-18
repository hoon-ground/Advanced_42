/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihookim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 11:18:04 by jihookim          #+#    #+#             */
/*   Updated: 2025/01/17 22:53:16 by jihookim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*buf;
	char		*line;

	if (fd < 0 || BUFFER_SIZE < 1)
		return (NULL);
	line = NULL;
	if (buf)
	{
		if (gnl_strchr(buf, '\n'))
			return (return_line("", &buf));
		line = gnl_strjoin("", buf);
		if (!line)
			return (gnl_free(NULL, &buf));
		free(buf);
	}
	buf = malloc(BUFFER_SIZE + 1);
	if (!buf)
		return (gnl_free(&line, &buf));
	return (make_line(line, &buf, fd));
}

char	*make_line(char *line, char **buf, int fd) // 파일에서 데이터를 계속 읽어와서 한 줄을 만드는 함수.
{
	int	read_len;

	read_len = 1;
	while (read_len > 0)
	{
		read_len = read(fd, *buf, BUFFER_SIZE);
		if (read_len < 0)
			return (gnl_free(&line, buf));
		if (read_len == 0)
		{
			gnl_free(NULL, buf);
			return (line);
		}
		*(*buf + read_len) = '\0';
		if (gnl_strchr(*buf, '\n'))
			return (return_line(line, buf));
		if (!line)
			line = "";
		line = gnl_strjoin(line, *buf);
		if (!line)
			return (gnl_free(NULL, buf));
	}
	return (return_line(line, buf));
}

char	*return_line(char *line, char **buf) //읽은 데이터를 한 줄로 반환하고, 남은 데이터는 buf에 저장하는 함수
{
	char	*new_buf;
	char	*buf_index;

	buf_index = gnl_strchr(*buf, '\n') + 1;
	new_buf = gnl_substr(buf_index, 0, gnl_strlen(buf_index));
	if (!new_buf)
		return (gnl_free(&line, buf));
	*(buf_index) = '\0';
	if (!line)
		line = "";
	line = gnl_strjoin(line, *buf);
	if (!line)
		return (gnl_free(buf, &new_buf));
	free(*buf);
	if (gnl_strlen(new_buf) < 1)
	{
		free(new_buf);
		new_buf = NULL;
	}
	*buf = new_buf;
	return (line);
}
