/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etuncars <etuncars@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 15:16:12 by etuncars          #+#    #+#             */
/*   Updated: 2023/01/17 21:58:21 by etuncars         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t len)
{
	int	i;

	i = 0;
	while (len > 0)
	{
		((unsigned char *)dest)[i] = c;
		i++;
		len--;
	}
	return (dest);
}
/*
#include <stdio.h>

int main()
{
	char str[] = "kocaeli";
	printf("new situation: %s", ft_memset(str, 'a', 4));
	return 0;
}*/
