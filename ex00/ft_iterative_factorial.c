/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tisilva <tisilva@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 15:40:59 by tisilva           #+#    #+#             */
/*   Updated: 2026/07/30 17:26:18 by tisilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	n;

	i = 1;
	n = nb;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	while (i < n)
	{
		nb *= (n - i);
		i++;
	}
	return (nb);
}

// int	main(void)
// {
// 	printf("%d\n", ft_iterative_factorial(5));
// 	return (0);
// }
