/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strdup.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: drevol <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/23 19:06:38 by drevol       #+#   ##    ##    #+#       */
/*   Updated: 2019/07/24 11:56:26 by drevol      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*tab;

	i = 0;
	j = 0;
	while (src[i] != '\0')
		i++;
	tab = malloc(i * sizeof(*tab) + 1);
	if (tab == NULL)
		return (NULL);
	else
	{
		while (src[j] != '\0')
		{
			tab[j] = src[j];
			j++;
		}
		tab[j] = '\0';
		return (tab);
	}
}
