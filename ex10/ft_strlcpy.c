/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 15:44:22 by seungjki          #+#    #+#             */
/*   Updated: 2022/04/23 17:26:42 by seungjki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size);

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[size - 1] = '\0';
	i = 0;
	while (src[i])
		i++;
	return (i);
}

/*
#include<stdio.h>
int main(void)
{
	printf("ex10\n");
    char ex10_src[] = "hello my name is hunpark!";
	char ex10_dest[50];
    printf("src : %s, size = 5\n", ex10_src);
	printf("ft_strlcpy : %d\n", ft_strlcpy(ex10_dest, ex10_src, 5));
	printf("dest : %s\n\n", ex10_dest);
}
*/
