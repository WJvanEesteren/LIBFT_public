/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: wvan-ees <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/20 17:18:42 by wvan-ees      #+#    #+#                 */
/*   Updated: 2019/02/03 18:54:49 by wvan-ees      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char const *ar)
{
	int		i;

	i = 0;
	if (ar)
	{
		while (ar[i])
		{
			write(1, &ar[i], 1);
			i++;
		}
	}
}
