/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchoo <nchoo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 19:20:04 by nchoo             #+#    #+#             */
/*   Updated: 2022/05/24 17:32:04 by czhu-hen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	result;
	int	remainder;

	result = a / b;
	*div = result;
	remainder = a % b;
	*mod = remainder;
}

int main(void)
{
	int x;
	int y;
	int result;
	int remainder;

	x = 10;
	y = 6;
	ft_div_mod(x, y, &result, &remainder);
	printf("result is %d, remainder is %d\n", result, remainder);
}
