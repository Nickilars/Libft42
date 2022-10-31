/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrossel <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:09:26 by nrossel           #+#    #+#             */
/*   Updated: 2022/10/31 09:53:35 by nrossel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	*to_find;

	to_find = (unsigned char *)s + ft_strlen(s);
	while (c != *to_find)
	{
		if (to_find == s)
			return (NULL);
		to_find--;
	}
	return (to_find);
}
