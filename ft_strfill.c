/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strfill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ieropaie <ieropaie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/21 23:17:20 by ieropaie          #+#    #+#             */
/*   Updated: 2018/12/21 23:17:24 by ieropaie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strfill(char **tab, const char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			*tab++ = ft_strqdupc(&s, c);
		s++;
	}
	*tab = NULL;
}
