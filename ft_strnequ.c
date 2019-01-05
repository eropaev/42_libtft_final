/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ieropaie <ieropaie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/21 02:36:37 by ieropaie          #+#    #+#             */
/*   Updated: 2018/12/22 22:43:36 by ieropaie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (s1 == NULL || s2 == NULL)
		return (0);
	if (n == 0)
		return (1);
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (n == 1 && *s1 == *s2)
		return (1);
	if (*s1 == *s2 && n)
		return (ft_strnequ(s1 + 1, s2 + 1, n - 1));
	return (0);
}
