/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maissa-b <maissa-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 19:50:24 by maissa-b          #+#    #+#             */
/*   Updated: 2015/06/25 08:25:16 by maissa-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft_perform.h>

int	ft_toupper(int c)
{
	if (c <= 122 && 97 <= c)
	{
		c -= 32;
		return (c);
	}
	else
		return (c);
}
