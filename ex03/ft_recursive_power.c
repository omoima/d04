/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoima <omoima@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 10:55:39 by omoima            #+#    #+#             */
/*   Updated: 2020/07/14 11:21:02 by omoima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_power(int nb, int power){
	if (power < 0){
		return(0);
	}
	else if (power == 1){
		return nb;
	}
	else {
		return nb * ft_recursive_power(nb, power-1);
	}
}

