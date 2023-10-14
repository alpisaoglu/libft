/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisaoglu <aisaoglu@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 23:44:57 by aisaoglu          #+#    #+#             */
/*   Updated: 2023/10/14 04:12:29 by aisaoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	char *str;
	str = (char *)s;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return ((char *)s + i);
		i--;
	}
	return (0);
}
