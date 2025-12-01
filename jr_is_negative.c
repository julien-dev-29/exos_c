/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   jr_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 10:00:00 by julien            #+#    #+#             */
/*   Updated: 2025/12/01 10:00:00 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "jr_putchar.h"
#include "jr_is_negative.h"

void	jr_is_negative(int n)
{
	if (n < 0)
		jr_putchar('N');
	else
		jr_putchar('P');
}
