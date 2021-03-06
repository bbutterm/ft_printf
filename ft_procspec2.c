/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_procspec2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jijerde <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 04:40:09 by jijerde           #+#    #+#             */
/*   Updated: 2019/09/19 04:54:49 by jijerde          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_flagstr2(t_flags *fl, char *str, char **buff)
{
	char	*tmp;
	size_t	j;

	j = 0;
	if (fl->psn > 0)
	{
		tmp = ft_strsub(str, 0, fl->psn);
		free(*buff);
		*buff = tmp;
		fl->wdh -= (int)(j = ft_strlen(*buff));
		fl->re += (int)j;
	}
	else if (fl->psn == -1)
	{
		tmp = ft_strjoin(*buff, str);
		free(*buff);
		*buff = tmp;
		fl->wdh -= (int)(j = ft_strlen(*buff));
		fl->re += (int)j;
	}
}
