/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   jr_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 10:00:00 by julien            #+#    #+#             */
/*   Updated: 2025/12/01 10:00:00 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "jr_print_reverse_alphabet.h"
#include "jr_putchar.h"

void	jr_print_reverse_alphabet(void)
{
	int	c;

	c = 122;
	while (c >= 97)
	{
		jr_putchar(c);
		c--;
	}
}
