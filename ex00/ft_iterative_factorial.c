/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaridas <isaridas@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 16:51:04 by isaridas          #+#    #+#             */
/*   Updated: 2022/08/01 16:54:52 by isaridas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	sonuc;

	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	sonuc = 1;
	while (nb > 1)
	{
		sonuc *= nb;
		nb--;
	}
	return (sonuc);
}
