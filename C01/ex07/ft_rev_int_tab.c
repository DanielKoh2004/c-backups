/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchoo <nchoo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 20:02:00 by nchoo             #+#    #+#             */
/*   Updated: 2022/05/24 17:56:37 by czhu-hen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	swap;
	int	index;
	int	halfsize;

	index = 0;
	size -= 1;
	halfsize = size / 2;
	while (size > halfsize)
	{
		swap = tab[size];
		tab[size] = tab[index];
		tab[index] = swap;
		size--;
		index++;
	}
}

int main(void)
{
	int arr[5] = {1, 2, 3, 4, 5};

	printf("%d %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3], arr[4]);
	ft_rev_int_tab(arr, 5);
	printf("%d %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3], arr[4]);
}

