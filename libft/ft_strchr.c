/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisaoglu <aisaoglu@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 13:43:29 by aisaoglu          #+#    #+#             */
/*   Updated: 2023/10/28 13:43:31 by aisaoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int ch)
{
	while (*str != '\0' && (char)ch != *str)
		str++;
	if ((char)ch == *str)
		return ((char *)str);
	return (0);
}
