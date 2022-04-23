/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 16:16:14 by seungjki          #+#    #+#             */
/*   Updated: 2022/04/23 17:14:06 by seungjki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n);

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
		j++;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	i = 0;
	while (src[i] != '\0')
		i++;
	{
		while (i < j)
		{
			dest[i] = '\0';
			i++;
		}
	}
	return (dest);
}

/*
#include <string.h>
#include <stdio.h>

int main(void)
{
	char a[] = "qwerty";
	char b[] = "asdfghi";
	char qwe[] = "a";
	char c[] = "zxab";
	char *d = ft_strncpy(a, c, 3);
	char *e = strncpy(b, c, 6);
	printf("%s\n", a);
	printf("%s\n", b);
	if (d == a && e == b)
		printf("1");
}
*/
