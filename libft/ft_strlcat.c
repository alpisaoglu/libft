/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisaoglu <aisaoglu@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 23:25:08 by aisaoglu          #+#    #+#             */
/*   Updated: 2023/10/14 01:56:51 by aisaoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dsize;

	dsize = 0;
	while (dest[dsize] != '\0' && dsize < dstsize)
		dsize++;
	i = dsize;
	while (src[dsize - i] && dsize +1 < dstsize)
	{
		dest[dsize] = src[dsize - i];
		dsize++;
	}
	if (i < dstsize)
		dest[dsize] = '\0';
	return (i + ft_strlen(src));
}
