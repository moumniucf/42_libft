/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youmoumn <youmoumn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 12:46:55 by youmoumn          #+#    #+#             */
/*   Updated: 2024/11/15 18:17:29 by youmoumn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	tosize;
	void	*ptr;

	if ((int)count < 0 && (int)size < 0)
		return (NULL);
	tosize = count * size;
	ptr = malloc(tosize);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, tosize);
	return (ptr);
}
