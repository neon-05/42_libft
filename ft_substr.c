/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabussi <ylabussi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 17:09:43 by ylabussi          #+#    #+#             */
/*   Updated: 2024/12/13 17:16:54 by ylabussi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*n;

	if (len > ft_strlen(s))
		return (NULL);
	n = malloc(len + 1);
	if (!n)
		return (NULL);
	ft_strlcpy(n, s + start, len + 1);
	return (n);
}