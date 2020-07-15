/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoima <omoima@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 11:23:50 by omoima            #+#    #+#             */
/*   Updated: 2020/07/15 15:49:28 by omoima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_fibonacci(int index){
		
	if (index < 0){
		return(-1);
	}
	else if (index == 0){
		return 0;
	}
	else if (index == 1){
		return 1;
	}
	else{
		return ft_fibonacci(index-1) + ft_fibonacci(index-2);
	}
}

