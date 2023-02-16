/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etuncars <etuncars@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 02:54:32 by etuncars          #+#    #+#             */
/*   Updated: 2023/02/11 01:15:33 by etuncars         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		((unsigned char *)s)[i] = '\0';
		i++;
		n--;
	}
}

/*
#include <unistd.h>
int	main()
{
	char a[] = "deneme";
	ft_bzero(a, 3);	
write(1, &a, 6);
}*/
