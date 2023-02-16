/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etuncars <etuncars@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 01:33:51 by etuncars          #+#    #+#             */
/*   Updated: 2023/01/18 01:54:21 by etuncars         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)(s + i));
			i++;
	}
	return (0);
}
/*
#include <stdio.h>

int main()
{	
	char *s = "Deneme";
	printf("%s\n", (char *)ft_memchr(s,'m',6));
}*/
