/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azhiltso <azhiltso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 18:41:05 by azhiltso          #+#    #+#             */
/*   Updated: 2023/12/10 19:58:26 by azhiltso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*result;

	result = (t_list *)malloc(sizeof(*result));
	if (!result)
		return (NULL);
	result->content = content;
	result->next = NULL;
	return (result);
}

// int	main(void)
// {
// 	printf("%s\n", (char *)ft_lstnew("LOXI SOSAT"));
// }
