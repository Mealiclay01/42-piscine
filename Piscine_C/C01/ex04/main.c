/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mealiclay01 <mealiclay01@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 17:00:48 by mealiclay01          #+#    #+#             */
/*   Updated: 2022/09/17 17:00:50 by mealiclay01         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b);

int		main(void)
{
	int a;
	int b;

	a = 16;
	b = 5;
	ft_ultimate_div_mod(&a, &b);
	if (a == 3 && b == 1)
	{
		write(1, "OK\n", 3);
	}
	else
	{
		write(1, "FAIL\n", 5);
	}
}
