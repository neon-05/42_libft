/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabussi <ylabussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 18:49:49 by ylabussi          #+#    #+#             */
/*   Updated: 2024/12/12 18:54:47 by ylabussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (dst < src)
			*(t_byte *)(dst + i) = *(t_byte *)(src + i);
		else
			*(t_byte *)(dst + (n - i - 1)) = *(t_byte *)(src + (n - i - 1));
		i++;
	}
	return (dst);
}