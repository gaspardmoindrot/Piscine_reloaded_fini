/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoindro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 14:34:07 by gmoindro          #+#    #+#             */
/*   Updated: 2019/04/03 15:20:38 by gmoindro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*new;
	int		a;

	a = 0;
	if (min >= max)
	{
		new = NULL;
		return (new);
	}
	if (!(new = malloc(sizeof(int) * (max - min + 1))))
		return (NULL);
	while (min < max)
	{
		new[a] = min;
		a++;
		min++;
	}
	return (new);
}
