/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memdel.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: wvan-ees <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/21 12:29:05 by wvan-ees      #+#    #+#                 */
/*   Updated: 2019/01/31 17:03:04 by wvan-ees      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memdel(void **ar)
{
	if (ar)
	{
		free(*ar);
		*ar = NULL;
	}
}
