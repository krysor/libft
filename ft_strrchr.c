/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkaczoro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 16:57:39 by kkaczoro          #+#    #+#             */
/*   Updated: 2022/03/12 19:36:25 by kkaczoro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if (s[i] == c)
		return ((char *)s + i);
	i--;
	while (i >= 0 && s[i])
	{
		if (s[i] == c)
			return ((char *)s + i);
		i--;
	}
	return (0);
}