/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahola <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 02:44:23 by mahola            #+#    #+#             */
/*   Updated: 2019/10/16 19:18:59 by mahola           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	i;

	if (!(s2 = (char*)malloc(sizeof(char) * (ft_strlen(s1) + 1))))
		return (NULL);
	i = 0;
	while (s1[i])
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
