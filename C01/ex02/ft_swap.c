/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchoo <nchoo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 17:45:49 by nchoo             #+#    #+#             */
/*   Updated: 2022/05/24 17:26:52 by czhu-hen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

int main(void)
{
	int x;
	int y;

	x = 5;
	y = 10;
	printf("x is %d, y is %d\n", x, y);
	ft_swap(&x, &y);
	printf("x is now %d, y is now %d\n", x, y);
}
