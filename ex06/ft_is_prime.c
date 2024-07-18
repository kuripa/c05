/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfuhrman <nfuhrman@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 17:23:09 by nfuhrman          #+#    #+#             */
/*   Updated: 2024/07/17 18:07:48 by nfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	prime_checker(int n, int base)
{
	if (base % n == 0 || base < 2)
		return (0);
	else if (n == base - 1)
		return (1);
	else if (base > n)
		return (prime_checker(n + 1, base));
	return (1);
}

int	ft_is_prime(int nb)
{
	if (nb == 2)
		return (1);
	return (prime_checker(2, nb));
}
