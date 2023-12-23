/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhiltso <azhiltso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:48:27 by azhiltso          #+#    #+#             */
/*   Updated: 2023/12/23 14:03:58 by azhiltso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total_size;
	size_t	i;
	void	*ptr;

	total_size = count * size;
	if (count && total_size / count != size)
		return (NULL);
	ptr = malloc(total_size);
	i = 0;
	if (ptr == NULL)
		return (NULL);
	else
	{
		while (total_size-- > 0)
		{
			((char *)ptr)[i++] = 0;
		}
		return (ptr);
	}
}

// int	main(void)
// {
// // Define the number of elements and the size of each element
//     size_t num_elements = 5;
//     size_t element_size = sizeof(int);

//     // Calculate the total size
//     size_t total_size = num_elements * element_size;

//     // Use custom_calloc to allocate and initialize memory
//     int *arr = (int *)ft_calloc(num_elements, element_size);

//     if (arr != NULL)
// 	{
// 		int *current = arr;
// 		int *end = arr + total_size / sizeof(int);

//         while (current < end)
// 		{
// 			printf("arr[%zu] = %d\n", current - arr, *current);
// 			current++;
//         }

//         // Free the allocated memory
//         free(arr);
//     }
// 	else
// 	{
//         printf("Memory allocation failed.\n");
//     }

//     return (0);
// }