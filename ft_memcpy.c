/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrossel <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 17:58:09 by nrossel           #+#    #+#             */
/*   Updated: 2022/10/25 14:46:11 by nrossel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*p_dst;
	const char	*p_src;

	i = 0;
	p_dst = (char *) dst;
	p_src = (const char *) src;
	while (i < n)
	{
		p_dst[i] = p_src[i];
		i++;
	}
	return ((void *) p_dst);
}
