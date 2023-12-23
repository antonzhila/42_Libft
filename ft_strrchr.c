/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhiltso <azhiltso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 19:57:00 by azhiltso          #+#    #+#             */
/*   Updated: 2023/12/23 13:35:11 by azhiltso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last_occur;

	if (!s)
		return (NULL);
	last_occur = NULL;
	while (*s)
	{
		if (*s == (char)c)
			last_occur = (char *)s;
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (last_occur);
}

// int	main(void)
// {
// 	printf("%s", ft_strrchr("HEHEhah", 'h'));
// }
