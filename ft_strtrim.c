/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ieropaie <ieropaie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/21 02:37:28 by ieropaie          #+#    #+#             */
/*   Updated: 2018/12/21 23:50:06 by ieropaie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(const char *s)
{
	int		start;
	int		end;
	char	*trimed;

	if (s == NULL)
		return (NULL);
	start = 0;
	while (*(s + start) == ' ' || *(s + start) == '\n' || *(s + start) == '\t')
		start++;
	end = ft_strlen(s) - 1;
	while ((*(s + end) == ' ' || *(s + end) == '\n' || *(s + end) == '\t')
			&& end >= 0)
		end--;
	end++;
	if (end == 0)
		return (ft_strdup(""));
	if (!(trimed = (char *)malloc(end - start + 1)))
		return (NULL);
	ft_memcpy(trimed, s + start, end - start);
	*(trimed + end - start) = '\0';
	return (trimed);
}
