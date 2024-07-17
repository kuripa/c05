/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfuhrman <nfuhrman@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 16:34:04 by nfuhrman          #+#    #+#             */
/*   Updated: 2024/07/17 17:18:26 by nfuhrman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	checker(int n, int base)
{
	if (n * n == base)
		return (n);
	if (n * n > base)
		return (0);
	return (checker(n + 1, base));
}

int	ft_sqrt(int nb)
{
	return (checker(1, nb));
}
