/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 14:41:45 by seungjki          #+#    #+#             */
/*   Updated: 2022/04/23 19:51:15 by seungjki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str);

void	cap_changer(char *str, int i)
{
	while (str[i])
	{
		if (((str[i - 1] >= 'A' && str[i - 1] <= 'Z')
				|| (str[i - 1] >= '0' && str[i - 1] <= '9')
				|| (str[i - 1] >= 'a'
					&& str[i - 1] <= 'z'))
			&& (str[i] >= 'A' && str[i] <= 'Z'))
			str[i] = str[i] + 32;
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[0] >= 'a' && str[0] <= 'z')
			str[0] = str[0] - 32;
		if ((str[i - 1] >= 91 && str[i - 1] <= 96)
			|| (str[i - 1] >= 123 && str[i - 1] <= 126))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		}
		if ((str[i - 1] >= 32 && str[i - 1] <= 47)
			|| (str[i - 1] >= 58 && str[i - 1] <= 64))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		}
		cap_changer(str, i);
		i++;
	}
	return (str);
}


#include<stdio.h>
int main(void)
{
	char str[] = "sALUt, coMMent tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s", ft_strcapitalize(str));
}

