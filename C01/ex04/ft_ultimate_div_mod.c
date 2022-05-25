/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchoo <nchoo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 19:32:41 by nchoo             #+#    #+#             */
/*   Updated: 2022/05/24 17:36:08 by czhu-hen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	result;
	int	remainder;

	result = *a / *b;
	remainder = *a % *b;
	*a = result;
	*b = remainder;
}

int main(void)
{
	int x;
	int y;

	x = 10;
	y = 6;
	printf("x is %d, y is %d\n", x, y);
	ft_ultimate_div_mod(&x, &y);
	printf("x is now %d, y is now %d\n", x, y);
}
