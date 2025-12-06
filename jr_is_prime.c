/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   jr_is_prime.h                                                            */
/*                                                                            */
/*   By: julien <julienrollan@gmx.fr>                                         */
/*                                                                            */
/*   Created: 2025/12/06 17:23:00 by julien                                   */
/*   Updated: 2025/12/06 10:00:00 by julien                                   */
/*                                                                            */
/* ************************************************************************** */
#include "jr_is_prime.h"

int	jr_is_prime(int nb)
{
	int i;

	i = 2;
	while (i * i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
