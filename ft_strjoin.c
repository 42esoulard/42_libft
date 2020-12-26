/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esoulard <esoulard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 20:45:47 by esoulard          #+#    #+#             */
/*   Updated: 2019/10/22 19:52:35 by esoulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		s1len;
	int		s2len;
	int		i;
	int		j;

	s1len = 0;
	s2len = 0;
	i = -1;
	j = 0;
	new = NULL;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	while (s1[s1len])
		s1len++;
	while (s2[s2len])
		s2len++;
	if (!(new = malloc(sizeof(char) * (s1len + s2len + 1))))
		return (NULL);
	while (s1[++i])
		new[i] = s1[i];
	while (s2[j])
		new[i++] = s2[j++];
	new[i] = '\0';
	return (new);
}
