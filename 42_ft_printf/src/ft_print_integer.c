/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_integer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rokada <rokada@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 14:34:49 by rokada            #+#    #+#             */
/*   Updated: 2024/11/22 14:34:52 by rokada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_print_integer(int n)
{
	int		len;
	char	*num;

	len = 0;
	num = ft_itoa(n);
	if (!num)
		return (0);
	len = ft_print_string(num);
	free(num);
	return (len);
}
