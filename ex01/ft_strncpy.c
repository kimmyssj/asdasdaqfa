/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 16:16:14 by seungjki          #+#    #+#             */
/*   Updated: 2022/04/23 21:33:59 by seungjki         ###   ########.fr       */
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
	while (i < j)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

#include <string.h>
#include <stdio.h>

int main(void)
{
   printf("ex01\n");
    char ex01_src[] = "Hello world!";
	char ex01_dest[20] = "asdasdasd";
	printf("src : %s\nn = 10\n", ex01_src);
	ft_strncpy(ex01_dest, ex01_src, 7);
	printf("ft_strncpy : %s\n\n", ex01_dest);	
	   printf("ex02\n");
    char ex02_src[] = "Hello world!";
	char ex02_dest[20] = "asdasdasd";
	printf("src : %s\nn = 7\n", ex02_src);
	strncpy(ex02_dest, ex02_src, 7);
	printf("strncpy : %s\n\n", ex02_dest);
}
