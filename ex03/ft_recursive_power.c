/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfuhrman <nfuhrman@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 23:52:29 by nfuhrman          #+#    #+#             */
/*   Updated: 2024/07/17 00:03:43 by nfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int ft_recursive_power(int nb, int power)
{

    if(power < 1)
    {
        return 1;
    }   
    return (nb * ft_recursive_power(nb , power - 1));
}


int	main(void)
{
	printf("0:%d\n", ft_recursive_power(1, -10));
	printf("0:%d\n", ft_recursive_power(1, -1));
	printf("1:%d\n", ft_recursive_power(10, 0));
	printf("10:%d\n", ft_recursive_power(10, 1));
	printf("100:%d\n", ft_recursive_power(10, 2));
	printf("256:%d\n", ft_recursive_power(2, 8));
	printf("216:%d\n", ft_recursive_power(6, 3));
	return (0);
}
