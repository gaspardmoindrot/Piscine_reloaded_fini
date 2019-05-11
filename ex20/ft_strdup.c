/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmoindro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 13:40:55 by gmoindro          #+#    #+#             */
/*   Updated: 2019/04/03 15:35:35 by gmoindro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*new;
	int		a;

	a = 0;
	new = malloc(sizeof(*src));
	if (new == NULL)
		return (NULL);
	while (src[a] != '\0')
	{
		new[a] = src[a];
		a++;
	}
	new[a] = '\0';
	return (new);
}
