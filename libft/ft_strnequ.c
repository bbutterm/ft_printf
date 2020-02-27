/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jijerde <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 18:17:22 by jijerde           #+#    #+#             */
/*   Updated: 2018/12/21 20:31:54 by jijerde          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (!s1 || !s2)
		return (0);
	if (n == 0)
		return (1);
	if (*s1 != *s2)
		return (0);
	while (*s1 == *s2 && *s1 && *s2 && n != 1)
	{
		s1++;
		s2++;
		n--;
		if (*s1 != *s2)
			return (0);
	}
	return (1);
}
