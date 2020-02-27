/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fspec.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jijerde <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 04:07:43 by jijerde           #+#    #+#             */
/*   Updated: 2019/09/19 04:09:36 by jijerde          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_fspec(t_args *ag, t_flags *fl)
{
	if (!fl->lnh)
		return (ft_dtoa(fl, va_arg(ag->args, double), fl->psn));
	else if (fl->lnh == 1)
		return (ft_dtoa(fl, va_arg(ag->args, double), fl->psn));
	else if (fl->lnh == 5)
		return (ft_dtoa(fl, va_arg(ag->args, long double), fl->psn));
	return (0);
}
