/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokada <rokada@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 14:35:06 by rokada            #+#    #+#             */
/*   Updated: 2024/11/22 14:35:08 by rokada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_print_string(char *str)
{
	int		i;

	i = 0;
	if (str == NULL)
		return (ft_print_string("(null)"));
	while (str[i])
	{
		ft_print_char(str[i]);
		i++;
	}
	return (i);
}
