/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdel.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: wvan-ees <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/21 12:59:42 by wvan-ees      #+#    #+#                 */
/*   Updated: 2019/01/21 13:05:37 by wvan-ees      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strdel(char **ar)
{
	if (ar)
	{
		free(*ar);
		*ar = NULL;
	}
}
