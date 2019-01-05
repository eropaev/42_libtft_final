/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcount.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ieropaie <ieropaie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/21 23:08:54 by ieropaie          #+#    #+#             */
/*   Updated: 2018/12/21 23:08:56 by ieropaie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strcount(char *s, char c)
{
	unsigned int	count;

	if (!*s)
		return (0);
	count = 0;
	if (*s != c)
		++count;
	while (*++s)
		if (*s == c && *(s - 1) != c)
			count++;
	return (count);
}
