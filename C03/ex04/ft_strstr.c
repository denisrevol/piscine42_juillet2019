/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strstr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: drevol <marvin@le-101.fr>                  +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/13 19:55:28 by drevol       #+#   ##    ##    #+#       */
/*   Updated: 2019/07/18 08:16:56 by drevol      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	if (str[0] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		while (str[i] == to_find[j] && to_find[j] != '\0')
		{
			j++;
			if (to_find[j] == '\0')
				return (&str[i - j + 1]);
		}
		i++;
	}
	return (0);
}
