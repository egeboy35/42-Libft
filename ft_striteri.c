/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etuncars <etuncars@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:15:53 by etuncars          #+#    #+#             */
/*   Updated: 2023/02/13 17:17:15 by etuncars         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (s)
	{
		i = 0;
		while (s[i])
		{
			f(i, &s[i]);
			i++;
		}
	}
}

// #include <stdio.h>
// void	ft_42(unsigned a, char *b)
// {
// 	*b = ft_toupper(*b);
// }
// int	main()
// {
// 	char str[] = "ahmet";
// 	ft_striteri(str, ft_42);
// 	printf("%s", str);
// }