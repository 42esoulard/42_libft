/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esoulard <esoulard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 19:08:07 by esoulard          #+#    #+#             */
/*   Updated: 2019/10/23 15:43:44 by esoulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*dstcast;
	char	*srccast;

	i = 0;
	if (dst == src || n == 0)
		return (dst);
	dstcast = (char *)dst;
	srccast = (char *)src;
	while (i < n)
	{
		dstcast[i] = srccast[i];
		i++;
	}
	return (dstcast);
}
