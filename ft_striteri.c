/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhiltso <azhiltso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 16:10:41 by azhiltso          #+#    #+#             */
/*   Updated: 2023/12/17 18:13:09 by azhiltso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

// void	print_index_and_char(unsigned int index, char *character)
// {
//     printf("Index: %u, Character: %c\n", index, *character);
// }

// int	main(void)
// {
//     char test_string[] = "Hello, World!";
//     printf("Original string: %s\n", test_string);
//     ft_striteri(test_string, print_index_and_char);
//     return 0;
// }
