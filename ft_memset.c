/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhiltso <azhiltso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 19:58:02 by azhiltso          #+#    #+#             */
/*   Updated: 2023/12/17 17:20:25 by azhiltso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int symbol, size_t bites)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)str;
	while (bites-- != 0)
		*ptr++ = (unsigned char)symbol;
	return (str);
}

// int	main(void)
// {
//     char str[20] = "Hello, World!";
//     char str_copy[20];
//     ft_memset(str, 'A', 5);
//     printf("ft_memset: %s\n", str);
//     return 0;
// }
