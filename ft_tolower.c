/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhiltso <azhiltso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 19:37:14 by azhiltso          #+#    #+#             */
/*   Updated: 2023/12/17 17:22:30 by azhiltso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_tolower(char c)
{
	if (c <= 90 && c >= 65)
		return (c + 32);
	return (c);
}

// int	main(void)
// {
// 	char	lol[20] = "heheHAHAHA";

// 	printf("%s", ft_tolower(lol));
// }
