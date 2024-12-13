/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabussi <ylabussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 21:19:05 by ylabussi          #+#    #+#             */
/*   Updated: 2024/12/12 21:25:10 by ylabussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	l;
	char	*n;

	l = ft_strlen(s) + 1;
	n = calloc(sizeof(char), l);
	if (!n)
		return (NULL);
	ft_strlcpy(n, s, l);
	ft_strlcat(n, s, l);
	return (n);
}
