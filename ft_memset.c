/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:57:51 by polmarti          #+#    #+#             */
/*   Updated: 2023/09/13 16:57:55 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n-- > 0)
		*p++ = (unsigned char)c;
	return (s);
}
/*#include <string.h>
#include <stdio.h>*/
/*int	main(void)
{
	char p[20] = "hola que tal";
	char x[20] = "hola que tal";
	ft_memset(x, 'p', 20);
	printf("%s\n", x);
	memset(p, 'p', 20);
	printf("%s\n", p);
	return (0);
}*/

/*void	*ft_memset(void *s, int c, size_t n)
{
	while (n-- > 0)
	{
		*(unsigned char *)s = (unsigned char)c;
		s++;
	}
	return (s);
}*/ //Esta version no funciona porque la memset original espera un puntero
//al inicio del string