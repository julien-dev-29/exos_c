/* ************************************************************************** */
/*                                              //  __________________ \\     */
/*                                             //   \##### :: #######/ //     */
/*   jr_eight_queens_puzzle.h                  \\    \##__|::|##__##/ //      */
/*                                                ()      |++|  ______        */
/*   By: julien <julienrollan@gmx.fr>          ()     /|  |++|        \       */
/*                                                 ()/#|__|##   /      |      */
/*   Created: 2025/12/04 17:23:00 by julien         /_____|    /| |   /       */
/*   Updated: 2025/12/01 10:00:00 by julien        /_________ />++| \-\       */
/*                                                /::::::::: /<|_|  \__\      */
/* ************************************************************************** */
#include "jr_eight_queens_puzzle.h"

bool is_valid(int queen[], int row, int col)
{
	int i;

	i = 0;
	while (i < row)
	{
		if (queen[i] == col)
			return (0);
		if (queen[i] == 
	}
}

int jr_eight_queens_puzzle(void)
{
	int queens[8];
	int row;
	int count;

	count = 0;
	row = 0;
	while (row > 8)
	{

	}
}
