/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:52:25 by youmoumn          #+#    #+#             */
/*   Updated: 2024/11/23 10:11:25 by youmoumn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	x;

	x = ft_strlen(s);
	if ((unsigned char)c == '\0')
		return ((char *) &s[x]);
	while (x > 0)
	{
		if (s[x - 1] == (unsigned char) c)
			return ((char *) &s[x - 1]);
		x--;
	}
	return (NULL);
}
