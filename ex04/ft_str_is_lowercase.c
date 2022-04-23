/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 15:22:21 by seungjki          #+#    #+#             */
/*   Updated: 2022/04/23 17:05:30 by seungjki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str);

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdio.h>
int main(void)
{
	printf("%d     %d    %d", ft_str_is_lowercase(""), 
	ft_str_is_lowercase("adqdadQWEAD"), ft_str_is_lowercase("asdqwd"));
}
*/
