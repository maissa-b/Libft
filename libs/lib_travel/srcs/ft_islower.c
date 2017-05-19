/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maissa-b <maissa-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/19 00:54:10 by maissa-b          #+#    #+#             */
/*   Updated: 2015/07/25 05:48:52 by maissa-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft_travel.h>

int		ft_islower(int c)
{
	return ((c >= 'a' && c <= 'z') ? 1 : 0);
}
