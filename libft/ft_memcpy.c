/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisaoglu <aisaoglu@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 23:18:20 by aisaoglu          #+#    #+#             */
/*   Updated: 2023/10/14 01:57:09 by aisaoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;
	size_t			i;

	p1 = (unsigned char *)dst;
	p2 = (unsigned char *)src;
	i = 0;
	if (!dst && !src)
		return (NULL);
	while (i < n)
	{
		p1[i] = p2[i];
		i++;
	}
	return (p1);
}
