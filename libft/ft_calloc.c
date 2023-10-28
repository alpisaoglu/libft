/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisaoglu <aisaoglu@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 13:41:05 by aisaoglu          #+#    #+#             */
/*   Updated: 2023/10/28 13:41:06 by aisaoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	all_size;
	void	*all_mem;

	all_size = count * size;
	all_mem = malloc(all_size);
	if (all_mem != NULL)
		ft_bzero(all_mem, all_size);
	return (all_mem);
}
