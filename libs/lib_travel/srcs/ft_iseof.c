/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iseof.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maissa-b <maissa-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/21 18:10:05 by maissa-b          #+#    #+#             */
/*   Updated: 2015/11/21 18:11:05 by maissa-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft_travel.h>

int			ft_iseof(char c)
{
	return ((c == '\0' || c == '\n' || c == '\t') ? 1 : 0);
}
