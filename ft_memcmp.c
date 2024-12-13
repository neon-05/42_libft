/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabussi <ylabussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 19:20:51 by ylabussi          #+#    #+#             */
/*   Updated: 2024/12/12 19:23:19 by ylabussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (*(t_byte *)(s1 + i) == *(t_byte *)(s2 + i) && i < n)
		i++;
	return ((i < n) * (*(t_byte *)(s1 + i) - *(t_byte *)(s2 + i)));
}
