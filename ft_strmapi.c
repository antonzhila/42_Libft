/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhiltso <azhiltso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 15:52:38 by azhiltso          #+#    #+#             */
/*   Updated: 2023/12/17 17:25:07 by azhiltso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*res;

	i = 0;
	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	res = malloc(len + 1);
	if (!res)
		return (NULL);
	while (i != len)
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}

// char	my_mapping_function(unsigned int index, char c)
// {
// 	printf("Index: %u, Character: %c\n", index, c);
// 	return (c);
// }

// int	main(void)
// {
// 	char *test_string = "Hello, World!";
//     char *result = ft_strmapi(test_string, my_mapping_function);

// 	if (result)
//     {
//         printf("Original string: %s\n", test_string);
//         printf("Modified string: %s\n", result);
//         free(result);
// 	}
// 	else
//         printf("Error: ft_strmapi failed\n");
//     return 0;
// }
