/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_recursive_factorial.c                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: drevol <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/17 16:05:41 by drevol       #+#   ##    ##    #+#       */
/*   Updated: 2019/07/22 16:36:10 by drevol      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int n;

	n = nb;
	if (nb == 0)
		return (1);
	if (n < 0)
		return (0);
	else if (n == 1)
		return (n);
	else
	{
		n = nb * ft_recursive_factorial(nb - 1);
		return (n);
	}
}
