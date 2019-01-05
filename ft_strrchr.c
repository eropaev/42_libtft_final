/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ieropaie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/21 02:37:04 by ieropaie          #+#    #+#             */
/*   Updated: 2018/12/21 03:07:41 by ieropaie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char		*ft_strrchr(const char *str, int c)
{
	char	*tab;

	tab = (char *)str + ft_strlen(str);
	while (*tab != c)
	{
		if (tab == str)
			return (NULL);
		tab--;
	}
	return (tab);
}
