/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putnbr_base.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: drevol <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/16 09:53:18 by drevol       #+#   ##    ##    #+#       */
/*   Updated: 2019/07/22 08:24:26 by drevol      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_len(char *base)
{
	int i;

	if (base[0] == '\0')
		return (0);
	i = 0;
	while (base[i] != '\0')
		i++;
	if (i == 1)
		return (0);
	return (i);
}

int		ft_ctrl(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int len_base;

	if (ft_ctrl(base) == 1)
	{
		len_base = ft_len(base);
		if (len_base == 0)
			return ;
		if (nbr < 0)
		{
			ft_putchar('-');
			nbr = -nbr;
		}
		if (nbr < len_base)
			ft_putchar(base[nbr]);
		else if ((nbr / len_base) < len_base)
		{
			ft_putchar(base[nbr / len_base]);
			ft_putchar(base[nbr % len_base]);
		}
		else if (len_base != 0)
		{
			ft_putnbr_base(nbr / len_base, base);
			ft_putnbr_base(nbr % len_base, base);
		}
	}
}
