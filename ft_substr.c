/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 10:06:28 by youmoumn          #+#    #+#             */
/*   Updated: 2024/11/18 12:57:55 by youmoumn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	char			*ptr;
	size_t			x;

	if (!s)
		return (NULL);
	x = ft_strlen(s);
	if (start >= x)
		return (ft_strdup(""));
	if (len >= (x - start))
		len = x - start ;
	ptr = malloc((len) * sizeof(char) + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		ptr[i] = s[start];
		start++;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
