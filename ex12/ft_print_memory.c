/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 17:35:46 by seungjki          #+#    #+#             */
/*   Updated: 2022/04/23 17:37:51 by seungjki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	*ft_print_memory(void *addr, unsigned int size);

void	sentencespitter(char *addr)
{
	int	i;

	i = 0;
	while (i < 16 && addr[i] != '\0')
	{
		if (addr[i] < 32 || addr[i] == 127)
			write (1, ".", 1);
		else
			write(1, addr + i, 1);
		i++;
	}
	write(1, "\n", 1);
}

void	addrspitter(void *addr, char *hex, char *mem)
{
	int							hexsize;
	int							i;
	unsigned long long			addrlove;

	addrlove = (unsigned long long)addr;
	i = 0;
	while (i < 16)
	{
		hexsize = addrlove % 16;
		addrlove = (addrlove - hexsize) / 16;
		mem[15 - i] = hex[hexsize];
		i++;
	}
	write(1, mem, 16);
	write(1, ": ", 2);
}

char	writer(char *addr, char *hex, int i, char checker)
{
	char	c[2];

	if (addr[i] != '\0')
	{
		c[0] = hex[addr[i] / 16];
		c[1] = hex[addr[i] % 16];
		write(1, c, 2);
	}
	if (addr[i] == '\0' || checker == 0)
	{
		checker = 0;
		write(1, "  ", 2);
	}
	return (checker);
}

char	asciispitter(char *addr, char *hex, char checker)
{
	int	i;
	int	count;

	i = 0;
	count = 1;
	if (addr[0] == '\0')
		checker = 0;
	else
		checker = 1;
	while (i < 16)
	{
		checker = writer(addr, hex, i, checker);
		if (count % 2 == 0)
			write(1, " ", 1);
		i ++;
		count ++;
	}
	return (checker);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	char			hex[18];
	char			mem[16];
	unsigned int	i;

	i = 0;
	if (size == 0)
		return (addr);
	while (i < 16)
	{
		if (i < 10)
			hex[i] = '0' + i;
		if (i >= 10)
			hex[i] = 'a' - 10 + i;
		i++;
	}
	hex[17] = 1;
	while (i - 16 <= size / 16)
	{
		addrspitter(addr + ((i - 16) * 16), hex, mem);
		hex[17] = asciispitter(addr + ((i - 16) * 16), hex, hex[17]);
		sentencespitter(addr + ((i - 16) * 16));
		i++;
	}
	return (addr);
}

/*
#include <stdio.h>
int main(void)
{

 char string[94] = "Bonjour les aminches*sc**c 
 est fou*tout*ce qu on peut faire avec***print_memory****lol*lol* *";
 string[20] = 9;
 string[23] = 10;
 string[24] = 9;
 string[35] = 9;
 string[40] = 9;
 string[65] = 9;
 string[66] = 10;
 string[67] = 9;
 string[80] = 10;
 string[81] = 10;
 string[82] = 10;
 string[83] = 9;
 string[87] = 46;
 string[91] = 10;
 string[93] = 0;
 ft_print_memory(string, sizeof(string));
 printf("Address\n");
 for (int i = 0; i < 6; i++)
 {
  printf("%p\n", string + 16 * i);
 }
}
*/
