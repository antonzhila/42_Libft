/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhiltso <azhiltso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 15:14:55 by azhiltso          #+#    #+#             */
/*   Updated: 2023/11/18 18:51:35 by azhiltso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*new_s;
	int		i;
	int		j;

	i = 0;
	j = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	new_s = (char *)malloc((len + 1) * sizeof(*s1));
	if (!new_s)
		return (NULL);
	while (s1[i] != '\0')
	{
		new_s[j++] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		new_s[j++] = s2[i];
		i++;
	}
	new_s[j] = '\0';
	return (new_s);
}

// int	main(void)
// {
// 	printf("%s", ft_strjoin("HEHEHE", " HAHAAHAHHAH"));
// }
