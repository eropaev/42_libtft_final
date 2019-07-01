/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnwstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ieropaie <ieropaie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 02:53:41 by ieropaie          #+#    #+#             */
/*   Updated: 2019/06/30 05:26:44 by ieropaie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putnwstr(wchar_t *s, int n)
{
	int		i;

	i = 0;
	while (s[i] != '\0' & n > 0)
	{
		if (ft_wcharlen(s[i]) > n)
			break ;
		n -= ft_wcharlen(s[i]);
		ft_putwchar(s[i++]);
	}
}
