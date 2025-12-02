/* ************************************************************************** */
/*                                                    ##############          */
/*                                                    ##############          */
/*   jr_print_combn.c                                 ##############          */
/*                                                    #####    #####          */
/*   By: julien <julien@student.42.fr>                #:    ##   :+#          */
/*                                                    #:    |  :::+#          */
/*   Created: 2025/12/02 11:02:00 by julien           ##:::----::+##          */
/*   Updated: 2025/12/01 10:00:00 by julien             ##########            */
/*                                                     ############           */
/* ************************************************************************** */
#include "jr_print_combn.h"
#include <unistd.h>

void	init_tab(char tab[], int n)
{
	int		i;

	i = 0;
	while (i < n)
	{
		tab[i] = i + '0';
		i++;
	}
}

void	calc_next_comb(char tab[], int n)
{
	int	i;
	int	j;

	i = n - 1;
	while (i >= 0 && tab[i] == '9' - (n - 1 - i))
		i--;
	tab[i]++;
	j = i + 1;
	while (j < n)
	{
		tab[j] = tab[j - 1] + 1;
		j++;
	}

}

void	jr_print_combn(int n)
{
	char	tab[n];

	init_tab(tab, n);
	while (1)
	{
		write(1, tab, n);
		if (tab[0] == '9' - (n - 1))
			break;
		write(1, ", ", 2);
		calc_next_comb(tab, n);
	}
}
