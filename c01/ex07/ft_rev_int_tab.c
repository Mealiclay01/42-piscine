/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*                                                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*                                                     #+#    #+#             */
/*                                                    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < size / 2)
	{
		tmp = tab[i];
		tab[i] = tab[(size - 1) - i];
		tab[(size - 1) - i] = tmp;
		i++;
	}
}

/*
int	main(void)
{
	int	tab[5] = {1, 2, 3, 4, 5};
	int	i;

	i = 0;
	ft_rev_int_tab(tab, 5);
	while (i < 5)
	{
		printf("%d ", tab[i]);
		i++;
	}
	return (0);
}
*/
