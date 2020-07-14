/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoima <omoima@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 16:51:13 by omoima            #+#    #+#             */
/*   Updated: 2020/07/14 08:50:48 by omoima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_factorial(int nb){
	if (nb == 0){
		return (1);
	}
	else if (nb < 0){
		return(0);
	}
	else {
		return nb * ft_recursive_factorial(nb-1);
	}
}
