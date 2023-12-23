/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhiltso <azhiltso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 19:31:42 by azhiltso          #+#    #+#             */
/*   Updated: 2023/12/17 17:24:15 by azhiltso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int str)
{
	return (32 <= str && 126 >= str);
}

// int    main(void)
// {
//     char    ssymbol[10] = " ";

//     printf("%d", ft_isprint(ssymbol));
// }