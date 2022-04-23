/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjki <@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 17:39:43 by seungjki          #+#    #+#             */
/*   Updated: 2022/04/23 19:34:13 by seungjki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src);

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
		i++;
	while (i >= 0)
	{
		dest[i] = src[i];
		i--;
	}
	return (dest);
}

#include <stdio.h>
#include <string.h>

int main(void)
{
	char a[] = "asdfghj";
	char b[] = "zxcvbn";
	char c[] = "qwer";
	char *d = ft_strcpy(a, c);
	char *e = strcpy(b, c);
	printf("%s\n", d);
	printf("%s\n", b);
	if (d == a && e == b)
		printf("1");
}
