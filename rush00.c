/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogumbi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 08:22:36 by nogumbi           #+#    #+#             */
/*   Updated: 2020/07/15 08:26:07 by nogumbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void ft_print(int i, char start, char mid, char end)
{
	ft_putchar(start);
	while((i-1)>1)
	{
		ft_putchar(mid);
		i--;
	}
	if(i>1)
	{
		ft_putchar(end);
		ft_putchar('\n');
	}
}

void rush(int x, int y)
{
	if(x >0 && y>0)
	{
		ft_print(x, 'o', '-', 'o');
			y--;
			{
				while(y>1)
				{
					ft_print(x, '|', ' ', '|');
					y--;
				}
				if(y>0)
				{
					ft_print(x, 'o', '-', 'o');
					y--;
				}
			}
	}
}
