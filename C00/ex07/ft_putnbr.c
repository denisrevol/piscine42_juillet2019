/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putnbr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: drevol <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/07 08:25:52 by drevol       #+#   ##    ##    #+#       */
/*   Updated: 2019/07/09 07:32:02 by drevol      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_long(void)
{
	ft_putchar('-');
	ft_putchar('2');
	ft_putchar('1');
	ft_putchar('4');
	ft_putchar('7');
	ft_putchar('4');
	ft_putchar('8');
	ft_putchar('3');
	ft_putchar('6');
	ft_putchar('4');
	ft_putchar('8');
}

void	ft_putnbr(int nb)
{
	int a;

	a = nb;
	if (a == -2147483648)
		ft_print_long();
	else if (a < 0)
	{
		ft_putchar('-');
		a = a * (-1);
	}
	else if (a < 10)
		ft_putchar(a + '0');
	else if (a < 100)
	{
		ft_putchar(a / 10 + '0');
		ft_putchar(a % 10 + '0');
	}
	else
	{
		ft_putnbr(a / 10);
		ft_putnbr(a % 10);
	}
}
