/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisaoglu <aisaoglu@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 13:42:42 by aisaoglu          #+#    #+#             */
/*   Updated: 2023/10/28 13:42:44 by aisaoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dst2;
	const char	*src2;

	src2 = (const char *)src;
	dst2 = (char *)dst;
	if (dst2 == src2)
	{
		return (dst);
	}
	if (dst2 < src2 || dst2 >= src2 + len)
	{
		return (ft_memcpy(dst, src, len));
	}
	while (len > 0)
	{
		dst2[len - 1] = src2[len - 1];
		len--;
	}
	return (dst);
}
// int main()
// {
// 	char dst[9] = "123456789";
// 	char src[4] = "abcd";
// 	ft_memcpy(dst, src, 4);
// 	printf("%s",dst);
// }