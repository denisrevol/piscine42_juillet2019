/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strjoin.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: drevol <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/24 18:04:58 by drevol       #+#   ##    ##    #+#       */
/*   Updated: 2019/07/25 11:17:14 by drevol      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_count_sep(char *sep)
{
	int i;

	i = 0;
	while (sep[i] != '\0')
		i++;
	return (i);
}

int		ft_count_strs(char **strs)
{
	int j;
	int k;

	j = 0;
	while (strs[j])
	{
		k = 0;
		while (strs[j][k] != '\0')
			k++;
		j++;
	}
	return (j);
}

char	ft_str(char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	int		l;
	char	**dest;

	i = 0;
	k = 0;
	dest = NULL;
	while (strs[i++])
	{
		j = 0;
		while (strs[i][j++] != '\0')
		{
			dest[k++] = &strs[i][j];
		}
		l = 0;
		while (sep[l++] != '\0')
		{
			dest[k++] = &sep[l];
		}
	}
	*dest[k] = '\0';
	return (**dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	**dest;
	int		r1;
	int		r2;

	if (size == 0)
		return (NULL);
	r1 = ft_count_sep(sep);
	r2 = ft_count_strs(strs);
	dest = malloc((size + r1 * (r2 - 1)) * sizeof(char) + 1);
	if (dest == NULL)
		return (NULL);
	**dest = ft_str(strs, sep);
	return (*dest);
}
