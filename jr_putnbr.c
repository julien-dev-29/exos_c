/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   jr_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+ +:+             */
/*   By: julien <julien@student.42.fr>              +#+            +#+        */
/*                                                     +:+:+  +:+:+           */
/*   Created: 2025/12/02 11:02:00 by julien             #+#    #+#            */
/*   Updated: 2025/12/01 10:00:00 by julien           ##############          */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "jr_putnbr.h"
#include "jr_putchar.h"

void	jr_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		jr_putchar('-');
		jr_putchar('2');
		jr_putnbr(147483648);
		return ;
	}
	if (nb < 0)
	{
		jr_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
		jr_putnbr(nb / 10);
	jr_putchar(nb % 10 + '0');
}
