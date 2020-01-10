/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_print_reverse_alphabet.c                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: drevol <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/04 19:25:49 by drevol       #+#   ##    ##    #+#       */
/*   Updated: 2019/07/05 07:32:47 by drevol      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char alpharev;

	alpharev = 'z';
	while (alpharev >= 'a')
	{
		write(1, &alpharev, 1);
		alpharev--;
	}
}
