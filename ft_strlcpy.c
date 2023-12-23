/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhiltso <azhiltso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 18:30:49 by azhiltso          #+#    #+#             */
/*   Updated: 2023/12/06 17:15:48 by azhiltso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	src_len;
	size_t	i;

	src_len = 0;
	i = 0;
	while (src[src_len] != 0)
	{
		src_len++;
	}
	if (size == 0)
		return (src_len);
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}

// int main(void)
// {
//     char destination[20];
//     // const char *source = "Hello, World!";
//     // size_t dest_size = sizeof(destination);

//     size_t copied = ft_strlcpy(destination, "lorem ipsum", 3);
// 	// printf("%lu", sizeof(copied));
//     // Verify the result
//     printf("Copied: %zu\n", copied);
//     printf("Destination: %s\n", destination);

//     return 0;
// }
