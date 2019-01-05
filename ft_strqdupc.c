/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strqdupc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ieropaie <ieropaie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/21 23:07:17 by ieropaie          #+#    #+#             */
/*   Updated: 2018/12/21 23:07:21 by ieropaie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strqdupc(const char **s1, char c)
{
	char	*str;

	str = ft_strallocc(*s1, c);
	if (str)
		*s1 = ft_stpcpyc(str, *s1, c);
	return (str);
}
