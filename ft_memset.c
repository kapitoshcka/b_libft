/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkarnats <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 15:55:50 by fkarnats          #+#    #+#             */
/*   Updated: 2018/09/14 13:10:44 by fkarnats         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** memset -- fill a byte string with a byte value
** The memset() function writes len bytes of value c (coverted to an
** unsigned char) to the string b.
** The memset() function returns its first argument.
*/
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	char *p;

	p = (char *)b;
	while (len > 0)
	{
		*p = c;
		p++;
		len--;
	}
	return (b);
}

/*
**int main()
**{
**	char str[100] = "first function from my first project";
**
**	ft_memset(str + 11, '.', 8);
**	printf("After memset(): %s\n", str);
**	return 0;
**}
*/
