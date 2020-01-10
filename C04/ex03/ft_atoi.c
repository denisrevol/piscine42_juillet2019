/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_atoi.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: drevol <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/22 07:52:50 by drevol       #+#   ##    ##    #+#       */
/*   Updated: 2019/07/22 08:23:37 by drevol      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int i;
	int neg;
	int nb;

	i = 0;
	nb = 0;
	neg = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
			|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i++] == '-')
			neg = -neg;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10;
		nb += str[i] - '0';
		i++;
	}
	if (neg < 0)
		return (-nb);
	else
		return (nb);
}
