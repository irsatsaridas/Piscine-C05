/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isaridas <isaridas@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 14:14:54 by isaridas          #+#    #+#             */
/*   Updated: 2022/08/02 14:28:27 by isaridas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_sqrt(int nb)
{
	int i;

	i = 0;
	if (nb <= 0)
		return (0);
	else if (nb == 1)
		return (1);
	else
	{
		while (i < nb)
		{
			if (i*i > nb)
				return (i - 1);
			i++;
		}
	}
	return (0);
}

int main(void)
{
	printf("%d, %d, %d, %d, %d", ft_sqrt(-5), ft_sqrt(0), ft_sqrt(1), ft_sqrt(399), ft_sqrt(4097));
}
