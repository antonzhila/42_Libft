/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhiltso <azhiltso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 19:57:35 by azhiltso          #+#    #+#             */
/*   Updated: 2023/12/17 17:53:53 by azhiltso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdlib.h>

// static void	*ft_memset(char *str, int symbol, size_t bites)
// {
// 	while (bites-- != 0)
// 		*str++ = symbol;
// 	return ((void *)str);
// }

void	*ft_bzero(char *str, size_t bites)
{
	return (ft_memset(str, 0, bites));
}
// int	main(void)
// {
// 	char buffer[10] = "TestString";

//     printf("Original String: %s\n", buffer);

//     // Clear the buffer using ft_bzero
//     ft_bzero(buffer, sizeof(buffer));

//     printf("Modified String: %s\n", buffer);

//     return 0;
// }