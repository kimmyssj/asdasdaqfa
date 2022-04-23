/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 15:58:48 by seungjki          #+#    #+#             */
/*   Updated: 2022/04/23 17:28:19 by seungjki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_putstr_non_printable(char *str);

void	superhexman(char *str, int i)
{
	char	hex[16];
	char	conta;
	int		j;

	j = 0;
	write(1, "\\", 1);
	while (j < 10)
	{
		hex[j] = j + '0';
		j++;
	}
	while (j - 10 < 6)
	{
		hex[j] = j - 10 + 'a';
		j++;
	}
	conta = hex[str[i] / 16];
	write(1, &conta, 1);
	conta = hex[str[i] % 16];
	write(1, &conta, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 32 || str[i] == 127))
			superhexman(str, i);
		else
			write(1, (str + i), 1);
		i++;
	}
}

/*
#include <stdio.h>
int main(void)
{
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
}
*/
