/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhiltso <azhiltso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 19:56:55 by azhiltso          #+#    #+#             */
/*   Updated: 2023/12/23 13:35:13 by azhiltso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;
	size_t	i;

	if (!big || !little)
		return (NULL);
	if (*little == '\0')
		return ((char *)big);
	little_len = 0;
	while (little[little_len])
		little_len++;
	if (len < little_len)
		return (NULL);
	while (*big && len-- >= little_len)
	{
		i = 0;
		while (big[i] == little[i] && i < little_len)
			i++;
		if (i == little_len)
			return ((char *)big);
		big++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char	*largestring = "Foo Bar Baz";
//            const char *smallstring = "Bar";
//            char *ptr;

//            printf("%s", ft_strnstr(largestring, smallstring, 10));
// }
