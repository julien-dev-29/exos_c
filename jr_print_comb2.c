/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   jr_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+ +:+             */
/*   By: julien <julien@student.42.fr>              +#+            +#+        */
/*                                                     +:+:+  +:+:+           */
/*   Created: 2025/12/01 10:00:00 by julien             #+#    #+#            */
/*   Updated: 2025/12/01 10:00:00 by julien           ##############          */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "jr_putchar.h"
#include "jr_print_comb2.h"

void	print_numbers(int n)
{
	jr_putchar(n / 10 + '0');
	jr_putchar(n % 10 + '0');
}

void	jr_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			print_numbers(a);
			jr_putchar(' ');
			print_numbers(b);
			if (!(a == 98 && b == 99))
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
