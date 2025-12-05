/* ************************************************************************** */
/*                                              //  __________________ \\     */
/*                                             //   \##### :: #######/ //     */
/*   jr_strrev.h                               \\    \##__|::|##__##/ //      */
/*                                                ()      |++|  ______        */
/*   By: julien <julienrolland@gmx.fr>         ()     /|  |++|        \       */
/*                                                 ()/#|__|##   /      |      */
/*   Created: 2025/12/04 17:23:00 by julien         /_____|    /| |   /       */
/*   Updated: 2025/12/01 10:00:00 by julien        /_________ />++| \-\       */
/*                                                /::::::::: /<|_|  \__\      */
/* ************************************************************************** */
#include "jr_strrev.h"

char	*jr_strrev(char *str)
{
    int start;
    int end;
    char temp;

    if (!str)
        return (0);
    start = 0;
    end = 0;
    while (str[end])
        end++;
    end--;
    while (start < end)
    {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
    return (str);
}
