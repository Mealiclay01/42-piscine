/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mealiclay01 <mealiclay01@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 16:59:46 by mealiclay01          #+#    #+#             */
/*   Updated: 2022/09/17 16:59:47 by mealiclay01         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ft(int *nbr);

int		main(void)
{
	int a = 10;
	ft_ft(&a);
	if (a == 42)
	{
		write(1, "OK\n", 3);
	}
	else
	{
		write(1, "FAIL\n", 5);
	}
}
