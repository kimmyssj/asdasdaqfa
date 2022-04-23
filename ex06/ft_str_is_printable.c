/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 16:52:33 by seungjki          #+#    #+#             */
/*   Updated: 2022/04/23 17:16:42 by seungjki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str);

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i])
	{
		if (str[i] <= 31 || str[i] == 127)
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdio.h>

int main(void)
{
	printf("%d    %d    %d", ft_str_is_printable(""),
	ft_str_is_printable("asd{124zxc"),
	ft_str_is_printable("asdqwwdq2ASD\n"));
}
*/
