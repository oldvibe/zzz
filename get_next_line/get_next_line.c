/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanait-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 21:50:49 by yanait-e          #+#    #+#             */
/*   Updated: 2024/12/01 21:50:51 by yanait-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

static char	*getlinex(char **storage)
{
	char	*line;
	char	*newline_pos;
	char	*temp;

	newline_pos = ft_strchr(*storage, '\n');
	if (newline_pos)
	{
		line = ft_substr(*storage, 0, newline_pos - *storage + 1);
		temp = ft_strdup(newline_pos + 1);
		free(*storage);
		*storage = temp;
	}
	else
	{
		line = ft_strdup(*storage);
		free(*storage);
		*storage = NULL;
	}
	return (line);
}

char	*free_and_join(char *str, char *buffer)
{
	char	*temp;

	temp = ft_strjoin(str, buffer);
	free(str);
	return (temp);
}

static char	*read_and_store(int fd, char *storage)
{
	char	*buffer;
	int		length_read;

	if (BUFFER_SIZE <= 0)
		return (NULL);
	buffer = malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	while (!ft_strchr(storage, '\n'))
	{
		length_read = read(fd, buffer, BUFFER_SIZE);
		if (length_read < 0)
			return (free(storage), free(buffer), NULL);
		if (length_read == 0)
			break ;
		buffer[length_read] = '\0';
		if (!storage)
			storage = ft_strdup(buffer);
		else
			storage = free_and_join(storage, buffer);
	}
	return (free(buffer), storage);
}

char	*get_next_line(int fd)
{
	static char	*storage = NULL;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	storage = read_and_store(fd, storage);
	if (!storage)
		return (NULL);
	if (!*storage)
	{
		free(storage);
		storage = NULL;
		return (NULL);
	}
	line = getlinex(&storage);
	return (line);
}

// int	main(void)
// {
// 	char	*line;
// 	int		count;
// 	int		fd;

// 	count = 0;
// 	fd = open("text.txt", O_RDONLY);
// 	while ((line = get_next_line(fd)))
// 	{
// 		count++;
// 		printf("%d ====> %s", count, line);
// 		free(line);
// 	}
// 	close(fd);
// 	return (0);
// }
