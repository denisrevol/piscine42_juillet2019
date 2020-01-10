/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_ultimate_range.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: drevol <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/24 12:00:42 by drevol       #+#   ##    ##    #+#       */
/*   Updated: 2019/07/25 15:25:38 by drevol      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int n;

	i = min;
	n = 0;
	if (min >= max)
	{	
		range = NULL;
		return (0);
	}
	range = malloc((max - min) * sizeof(int));
	if (range == (NULL))
		return (-1);
	while (i < max)
	{
		range[n] = &i;
		i++;
		n++;
	}
	return (n);
}
