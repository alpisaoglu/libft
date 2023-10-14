/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aisaoglu <aisaoglu@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 01:56:10 by aisaoglu          #+#    #+#             */
/*   Updated: 2023/10/14 10:19:29 by aisaoglu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;

	i = 0;
	while (*s != '\0')
	{
		i++;
	}
	if(i >= len)
		return (NULL);
	char *new_str = (char *)malloc(len+1);
	while(len > i)
	{
		if(s[start +i] != '\0')
			return (NULL);
		new_str[i] = s[start +i];
	}
}


int main()
{
	char *t = "talhayaylayımben";
	unsigned int i = 5;
	size_t si = 5;
	printf("%s",ft_substr(t,i,si)); 
}