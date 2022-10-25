/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrossel <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:46:00 by nrossel           #+#    #+#             */
/*   Updated: 2022/10/25 16:03:40 by nrossel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*p_dst;
	const char	*p_src;

	p_dst = (char *) dst;
	p_src = (const char *) src;
	while (len > 0)
	{
		*p_dst++ = *p_src++;
		len--;
	}
	return ((void *) dst);
}
