/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabussi <ylabussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 19:12:31 by ylabussi          #+#    #+#             */
/*   Updated: 2024/12/12 19:19:40 by ylabussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	void	*p;

	i = 0;
	p = NULL;
	while (*(t_byte *)(s + i) != (t_byte) c && i < n)
		i++;
	if (i < n)
		p = (void *)(s + i);
	return (p);
}