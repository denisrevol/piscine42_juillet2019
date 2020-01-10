/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_find_next_prime.c                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: drevol <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/23 08:06:10 by drevol       #+#   ##    ##    #+#       */
/*   Updated: 2019/07/23 11:42:35 by drevol      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	int j;

	j = nb;
	if (nb > 2147483647 || nb < 0)
		return (0);
	while (j >= nb)
	{
		ft_is_prime(j);
		if (ft_is_prime(j) == 0)
			j++;
		else
			return (j);
	}
	return (0);
}

int main()
{
	ft_find_next_prime(2147483647);
}
