/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:55:01 by youmoumn          #+#    #+#             */
/*   Updated: 2024/11/09 09:48:42 by youmoumn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	char	*str;
	size_t	x;

	if (!s1 || !s2)
		return (NULL);
	x = (ft_strlen(s1) + ft_strlen(s2));
	str = malloc((x + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < x)
	{
		if (i < ft_strlen(s1))
		{
			str[i] = s1[i];
		}
		else
		{
			str[i] = s2[i - ft_strlen(s1)];
		}
		i++;
	}
	str[i] = '\0';
	return (str);
}
