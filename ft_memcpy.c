/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:49:30 by youmoumn          #+#    #+#             */
/*   Updated: 2024/11/18 18:23:06 by youmoumn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	const char	*s;
	char		*d;

	s = src;
	d = dst;
	i = 0;
	if (s == d)
		return (d);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
