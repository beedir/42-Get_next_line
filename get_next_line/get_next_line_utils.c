/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgaspari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 17:39:38 by vgaspari          #+#    #+#             */
/*   Updated: 2024/05/13 17:41:06 by vgaspari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		sizetotal;
	char	*result;
	int		i;
	int		j;

	i = 0;
	sizetotal = ft_strlen(s1) + ft_strlen(s2);
	result = malloc(sizeof(char) * (sizetotal + 1));
	if (!result || !s1 || !s2)
		return (NULL);
	while (s1[i] != 0)
	{
		result[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != 0)
	{
		result[i] = s2[j];
		i++;
		j++;
	}
	result[sizetotal] = 0;
	return (result);
}

char	*ft_strchr(const char *string, int searchChar)
{
	char	*str;

	str = (char *)string;
	while (*str != searchChar && *str != 0)
		str++;
	if (*str == searchChar)
		return (str);
	else
		return (NULL);
}

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	i;

	str = (char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}

void	*ft_calloc(size_t elementCount, size_t elementSize)
{
	char	*result;

	result = malloc(elementSize * elementCount);
	if (!result)
		return (NULL);
	ft_bzero(result, elementSize * elementCount);
	return (result);
}

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
