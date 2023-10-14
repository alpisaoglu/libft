/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisaoglu <aisaoglu@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 23:31:45 by aisaoglu          #+#    #+#             */
/*   Updated: 2023/10/14 04:24:13 by aisaoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t	index;

	index = 0;
	while (str[index])
	{
		if (str[index] == (char)c)
			return ((char *)&str[index]);
		index++;
	}
	if (c == '\0')
		return ((char *)(str + index));
	return (NULL);
}
