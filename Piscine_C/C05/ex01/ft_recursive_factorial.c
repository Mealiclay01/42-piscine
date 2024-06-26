/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mealiclay01 <mealiclay01@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 10:59:16 by mealiclay01          #+#    #+#             */
/*   Updated: 2022/09/19 11:01:26 by mealiclay01         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial_recur(int i, int nb)
{
	i *= nb--;
	if (nb > 0)
		return (ft_recursive_factorial_recur(i, nb));
	return (i);
}

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (ft_recursive_factorial_recur(1, nb));
}
