/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoima <omoima@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 08:54:59 by omoima            #+#    #+#             */
/*   Updated: 2020/07/14 10:53:11 by omoima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power){
	int sum;
	int i;
	sum = nb;
	i = 1;

	if (power < 0){
		return(0);
	}
	else if (power == 1){
		return sum;
	}
	else {
		while (i < power){
			sum = sum * nb;
			i++;
		}
		return sum;
	}
}

