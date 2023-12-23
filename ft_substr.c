/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhiltso <azhiltso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:52:12 by azhiltso          #+#    #+#             */
/*   Updated: 2023/12/04 17:15:07 by azhiltso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	max_len;
	char	*substring;

	s_len = 0;
	max_len = 0;
	if (s == NULL)
		return (NULL);
	substring = (char *)malloc(sizeof(*s) * (len + 1));
	if (substring == NULL)
		return (NULL);
	while (s[s_len])
	{
		if (s_len >= start && max_len < len)
		{
			substring[max_len] = s[s_len];
			max_len++;
		}
		s_len++;
	}
	substring[max_len] = 0;
	return (substring);
}

// int	main(void)
// {
// 	printf("%s", ft_substr("hehe hello", 3, 6));
// }
