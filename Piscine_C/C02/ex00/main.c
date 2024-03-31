/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mealiclay01 <mealiclay01@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 17:13:43 by mealiclay01          #+#    #+#             */
/*   Updated: 2022/09/17 17:13:44 by mealiclay01         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		printf("%s\n", ft_strcpy(av[1], av[2]));
		return (0);
	}
}
