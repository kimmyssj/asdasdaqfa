/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 16:48:13 by seungjki          #+#    #+#             */
/*   Updated: 2022/04/23 17:04:18 by seungjki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str);

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[0] == '\0')
		return (1);
	while (str[i])
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}

/*
#include<stdio.h>

int	main(void)
{
	printf("%d, %d, %d", ft_str_is_uppercase(""), 
		ft_str_is_uppercase("ASDQWDASasd"),
		ft_str_is_uppercase("ASDQWD"));
}
*/
