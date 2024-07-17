/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfuhrman <nfuhrman@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 14:29:30 by nfuhrman          #+#    #+#             */
/*   Updated: 2024/07/17 14:39:29 by nfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/*int	main(void)*/
/*{*/
/*	printf("-1:%d\n", ft_fibonacci(-20));*/
/*	printf("-1:%d\n", ft_fibonacci(-1));*/
/*	printf("0:%d\n", ft_fibonacci(0));*/
/*	printf("1:%d\n", ft_fibonacci(1));*/
/*	printf("1:%d\n", ft_fibonacci(2));*/
/*	printf("2:%d\n", ft_fibonacci(3));*/
/*	printf("55:%d\n", ft_fibonacci(10));*/
/*	printf("6765:%d\n", ft_fibonacci(20));*/
/*}*/
