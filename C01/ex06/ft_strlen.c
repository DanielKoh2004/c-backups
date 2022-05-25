/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchoo <nchoo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 19:48:28 by nchoo             #+#    #+#             */
/*   Updated: 2022/05/24 17:51:21 by czhu-hen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	index;
	int	length;

	index = 0;
	length = 0;
	while (str[index] != '\0')
	{
		length++;
		index++;
	}
	return (length);
}

int main(void)
{
	int i = ft_strlen("Hello World");
	
	printf("%d\n", i);
}

