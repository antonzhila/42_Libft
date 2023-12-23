/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhiltso <azhiltso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:56:47 by azhiltso          #+#    #+#             */
/*   Updated: 2023/12/17 17:51:10 by azhiltso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	counter;

	counter = 0;
	while (*s1 && *s2 && counter < n)
	{
		if (*s1 != *s2)
			break ;
		s1++;
		s2++;
		counter++;
	}
	if (counter == n)
		return (0);
	else
		return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

// int	main (void)
// {
// 	char s1[6] = "Hey";
// 	char s2[6] = "abcd";
// 	printf("%d", ft_strncmp(s1, s2, 5));
// 	return (0);
// }