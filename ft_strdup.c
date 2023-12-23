/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhiltso <azhiltso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 16:29:00 by azhiltso          #+#    #+#             */
/*   Updated: 2023/12/06 17:27:03 by azhiltso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*duplicate;
	int		i;

	i = 0;
	len = ft_strlen(s);
	duplicate = (char *)malloc(len + 1);
	if (!duplicate)
		return (NULL);
	while (s[i] != '\0')
	{
		duplicate[i] = s[i];
		i++;
	}
	duplicate[i] = '\0';
	return (duplicate);
}

// int	main(void)
// {
// 	printf("%s", ft_strdup("lorem ipsum dolor sit amet"));
// }
