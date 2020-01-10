/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_iterative_factorial.c                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: drevol <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/17 12:41:55 by drevol       #+#   ##    ##    #+#       */
/*   Updated: 2019/07/22 16:33:21 by drevol      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int n;
	int i;

	n = nb;
	i = 1;
	if (nb == 0)
		return (1);
	if (nb > 0)
	{
		while (i < nb)
		{
			n = n * (nb - i);
			i++;
		}
		return (n);
	}
	else
		return (0);
}
