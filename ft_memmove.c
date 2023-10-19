/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 21:15:53 by polmarti          #+#    #+#             */
/*   Updated: 2023/09/13 21:15:57 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int	i;

	if (!dst && !src)
		return (dst);
	if (dst > src)
	{
		i = (int)len -1;
		while (i >= 0)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < (int)len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dst);
}

/*#include <string.h>
#include <stdio.h>
int	main()
{
	char s2[13] = "hola que tal";
	char s1[5] = "adios";
	//memmove(s1, s2, 5);
	ft_memmove(s1, s2, 5);
	printf("%s\n", s1);
	return 0;
}*/
//trabaja con int porque size_t (0 - 1) es el maximo de uns long
//compara dst>src para saber si se overlapean
//si lo hace, empieza desde atras (len-1 por el null)
// lo de src no se modifique antes de ser copiados a dst.