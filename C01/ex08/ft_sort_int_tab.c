/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchoo <nchoo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 21:25:02 by nchoo             #+#    #+#             */
/*   Updated: 2022/05/24 18:05:49 by czhu-hen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	index;
	int	pass;

	index = 0;
	pass = 1;
	while (pass < size)
	{
		while (index < size - 1)
		{
			if (tab[index] > tab[index + 1])
			{
				swap(&tab[index], &tab[index + 1]);
			}
		index++;
		}
	pass++;
	index = 0;
	}
}

int main(void)
{
	int arr[5] = {78, 1, -5, 1241, 10};

	printf("the order before is %d %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3], arr[4]);
	ft_sort_int_tab(arr, 5);
	printf("the order is now %d %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3], arr[4]);
}
