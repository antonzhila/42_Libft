/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhiltso <azhiltso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 16:41:24 by azhiltso          #+#    #+#             */
/*   Updated: 2023/12/17 18:19:47 by azhiltso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*result;
	size_t		result_len;
	char const	*end;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	end = s1 + ft_strlen(s1) - 1;
	while (end > s1 && ft_strchr(set, *end))
		end--;
	result_len = end - s1 + 1;
	result = malloc((result_len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	ft_strlcpy(result, s1, result_len + 1);
	return (result);
}

// int	main(void)
// {
//     char *s1 = "HAHA test.   HAHA";
//     char *set = "HAHA";

//     char *trimmed = ft_strtrim(s1, set);

// 	if (trimmed)
// 	{
// 		printf("Trimmed string: \"%s\"\n", trimmed);
// 		free(trimmed);
// 	}
// 	else
// 	{
// 		printf("Memory allocation failed.\n");
// 	}

// 	return (0);
// }
