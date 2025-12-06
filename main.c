/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julien <julien@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 10:00:00 by julien            #+#    #+#             */
/*   Updated: 2025/12/01 10:00:00 by julien           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "jr_putnbr.h"
#include "jr_find_next_prime.h"

int	main(void)
{
	jr_putnbr(jr_find_next_prime(10));
	return (0);
}
