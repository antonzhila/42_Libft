/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhiltso <azhiltso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 18:56:59 by azhiltso          #+#    #+#             */
/*   Updated: 2023/12/17 17:23:01 by azhiltso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_toupper(char c)
{
	if (c <= 122 && c >= 97)
		return (c - 32);
	return (c);
}

// int	main(void)
// {
// 	char	lol[20] = "heheHAHAHA";

// 	printf("%s", ft_toupper(lol));
// }