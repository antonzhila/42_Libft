/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhiltso <azhiltso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 19:57:47 by azhiltso          #+#    #+#             */
/*   Updated: 2023/12/04 18:16:24 by azhiltso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (!dst)
		return (NULL);
	i = 0;
	while (i < n)
	{
		*(char *)(dst + i) = *(char *)(src + i);
		i++;
	}
	return (dst);
}

// int main(void)
// {
//     char src[] = "Hello, World!";
//     char dst[20];

//     // Using the custom ft_memcpy function
//     ft_memcpy(dst, src, sizeof(src));

//     // Using the standard memcpy function for comparison
//     char dst_copy[20];
//     memcpy(dst_copy, src, sizeof(src));

//     printf("Custom ft_memcpy: %s\n", dst);
//     printf("Standard memcpy  : %s\n", dst_copy);

//     return 0;
// }