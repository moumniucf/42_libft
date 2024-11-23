/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:43:30 by youmoumn          #+#    #+#             */
/*   Updated: 2024/11/18 12:53:54 by youmoumn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	if (needle[j] == '\0')
		return ((char *)haystack);
	while (i < len && haystack[i])
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while (haystack[i + j] == needle[j] && needle[j] && (i + j) < len)
			{
				j++;
			}
			if (needle[j] == '\0')
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
