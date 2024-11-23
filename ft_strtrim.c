/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 10:54:47 by youmoumn          #+#    #+#             */
/*   Updated: 2024/11/19 11:25:28 by youmoumn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*myncpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		start;
	size_t		end;
	size_t		x;
	char		*ptr;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	if (end == 0)
		return (ft_strdup(""));
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	x = end - start + 1;
	ptr = malloc((x + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	myncpy(ptr, s1 + start, x);
	ptr[x] = '\0';
	return (ptr);
}
