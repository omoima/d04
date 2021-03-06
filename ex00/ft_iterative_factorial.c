/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoima <omoima@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 15:32:24 by omoima            #+#    #+#             */
/*   Updated: 2020/07/16 14:57:16 by omoima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_iterative_factorial(int nb){
	int sum;
	sum = 1;

	if (nb == 1){
		return sum;
	}
	else if (nb < 1){
		return(0);
	}
	while(nb > 1){
		sum = sum*nb;
		nb--;
	}
	return sum;
}
