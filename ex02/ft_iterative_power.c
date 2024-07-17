/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfuhrman <nfuhrman@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 23:21:23 by nfuhrman          #+#    #+#             */
/*   Updated: 2024/07/16 23:26:12 by nfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 0;
	if (power < 0)
		return (0);
	if (power == 0 || nb == 0)
		return (1);

    result = nb;
    while (power > 1)
	{
		result = result * nb;
		power--;
	}
	return (result);
}

/*#include <stdio.h>*/
/*int	main(void)*/
/*{*/
/*	printf("0:%d\n", ft_iterative_power(1, -10));*/
/*	printf("0:%d\n", ft_iterative_power(1, -1));*/
/*	printf("1:%d\n", ft_iterative_power(10, 0));*/
/*	printf("10:%d\n", ft_iterative_power(10, 1));*/
/*	printf("100:%d\n", ft_iterative_power(10, 2));*/
/*	printf("256:%d\n", ft_iterative_power(2, 8));*/
/*	printf("216:%d\n", ft_iterative_power(6, 3));*/
/*	return (0);*/
/*}*/
