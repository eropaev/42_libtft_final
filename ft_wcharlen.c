/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wcharlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ieropaie <ieropaie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/30 05:26:09 by ieropaie          #+#    #+#             */
/*   Updated: 2019/06/30 05:27:43 by ieropaie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_wcharlen(wchar_t c)
{
	int		len;

	len = 0;
	if (c <= 0x7F)
		len = 1;
	else if (c <= 0x7FF)
		len = 2;
	else if (c <= 0xFFFF)
		len = 3;
	else
		len = 4;
	return (len);
}
