/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoima <omoima@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 11:23:50 by omoima            #+#    #+#             */
/*   Updated: 2020/07/15 13:56:43 by omoima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_fibonacci(int index){
	int curr;
	int final;
	curr = 0;
	final = 0;
	
	if (index < 0){
		return(-1);
	}
	else {
		final = index;
	}
	return final;
}

int main(){
	int i;
	i = ft_fibonacci(10);

	printf("%d", i);

	return(0);
}
