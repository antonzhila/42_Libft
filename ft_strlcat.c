/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhiltso <azhiltso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 18:25:38 by azhiltso          #+#    #+#             */
/*   Updated: 2023/12/23 13:35:08 by azhiltso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	src_len;

	if (!dest || !src)
		return (0);
	i = 0;
	j = 0;
	src_len = ft_strlen(src);
	while (dest[i] && i < size)
		i++;
	while (src[j] && (i + j + 1) < size)
	{
		dest[i + j] = src[j];
		j++;
	}
	if (i < size)
		dest[i + j] = '\0';
	return (i + src_len);
}

// int	main(void)
// {
//     char destination[20] = "Hello, ";
//     const char *source = "World!";
//     size_t dest_size = sizeof(destination);

//     size_t concatenated = ft_strlcat(destination, source, dest_size);

//     printf("Concatenated: %zu\n", concatenated);
//     printf("Destination: %s\n", destination);

//     return (0);
// }
