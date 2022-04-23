/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 15:13:17 by seungjki          #+#    #+#             */
/*   Updated: 2022/04/23 17:13:51 by seungjki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str);

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i])
	{
		if (str[i] < 'A')
			return (0);
		else if (str[i] > 'Z' && str[i] < 'a')
			return (0);
		else if (str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}

/*
#include<stdio.h>
int main(void)
{
	char str1[] = "aASDSAasdqw";
	char str2[] = "12412551125";
	char str3[] = "";
	printf("%d, %d, %d", ft_str_is_alpha(str1)
			,ft_str_is_alpha(str2) 
			,ft_str_is_alpha(str3));
}
*/
