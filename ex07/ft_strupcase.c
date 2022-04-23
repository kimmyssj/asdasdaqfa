/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 17:38:54 by seungjki          #+#    #+#             */
/*   Updated: 2022/04/23 17:18:49 by seungjki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str);

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 'a' + 'A';
		i ++;
	}
	return (str);
}

/*
#include<stdio.h>
int main(void)
{
	char a[] = "asdqwdjj!@#!#!@$12123  ";
	printf("%s", ft_strupcase(a));
}
*/
